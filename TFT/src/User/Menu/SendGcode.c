#include "SendGcode.h"
#include "includes.h"

#define TERMINAL_MAX_CHAR (NOBEYOND(600, RAM_SIZE*45, 4800))
#define MAX_PAGE_COUNT    20

typedef struct
{
  char *   ptr[MAX_PAGE_COUNT];  // Pointer array to terminal pages within terminal buffer
  uint8_t  pageHead;             // index of first page
  uint8_t  pageTail;             // index of last page
  uint8_t  oldPageHead;          // old index of starting page
  uint8_t  pageIndex;            // current page index
  uint8_t  oldPageIndex;         // old page index
  uint16_t terminalBufTail;      // last copy index for copying data in buffer
  uint16_t buffSize;             // maximum buffer/cache size
  uint8_t  maxPageCount;         // maximum page count allowed
  uint8_t  bufferFull;
} TERMINAL_DATA;

typedef enum
{
  GKEY_SEND = 0,
  GKEY_ABC_123,
  GKEY_SPACE,
  GKEY_DEL,
  GKEY_BACK,
  // no need to declare key numbers if no special task is performed by the key
  GKEY_IDLE = IDLE_TOUCH,
} GKEY_VALUES;

typedef enum
{
  TERM_PAGE_NUMBER = 0,
  TERM_PAGE_UP,
  TERM_PAGE_DOWN,
  TERM_TOGGLE_ACK,
  TERM_BACK,
  TERM_KEY_COUNT,  // number of keys
  TERM_IDLE = IDLE_TOUCH,
} TERMINAL_KEY_VALUES;

// colors
#if TERMINAL_KEYBOARD_COLOR_LAYOUT == 0
  #define KB_BG_COLOR        0x1904
  #define KEY_FONT_COLOR     WHITE
  #define KEY_BG_COLOR       0x2986

  #define CTRL_FONT_COLOR      WHITE
  #define CTRL_BG_COLOR        0x2174

  #define BAR_BG_COLOR         KB_BG_COLOR
  #define BAR_BORDER_COLOR     KEY_BG_COLOR
  #define BAR_VALUE_FONT_COLOR BLACK
  #define BAR_VALUE_BG_COLOR   0xD6DA

  #define PAGE_FONT_COLOR      WHITE

#elif TERMINAL_KEYBOARD_COLOR_LAYOUT == 1

  #define KB_BG_COLOR        0xC638
  #define KEY_FONT_COLOR     DARKGRAY
  #define KEY_BG_COLOR       0xE73C

  #define CTRL_FONT_COLOR      WHITE
  #define CTRL_BG_COLOR        0x2174

  #define BAR_BG_COLOR         KB_BG_COLOR
  #define BAR_BORDER_COLOR     KEY_BG_COLOR
  #define BAR_VALUE_FONT_COLOR BLACK
  #define BAR_VALUE_BG_COLOR   KEY_BG_COLOR

  #define PAGE_FONT_COLOR      DARKGRAY

#else

  #define KB_BG_COLOR        BLACK
  #define KEY_FONT_COLOR     BLACK
  #define KEY_BG_COLOR       WHITE

  #define CTRL_FONT_COLOR      WHITE
  #define CTRL_BG_COLOR        0x2174
  #define BAR_BG_COLOR         KB_BG_COLOR
  #define BAR_BORDER_COLOR     KEY_BG_COLOR
  #define BAR_VALUE_FONT_COLOR BLACK
  #define BAR_VALUE_BG_COLOR   KEY_BG_COLOR

  #define PAGE_FONT_COLOR      WHITE

#endif

#define BTN_ROUND_CORNER  11

#define TERM_FONT_COLOR infoSettings.marlin_mode_font_color
#define TERM_BG_COLOR   infoSettings.marlin_mode_bg_color

// keyboard layouts
#define LAYOUT_1_COL_COUNT 6
#define LAYOUT_1_ROW_COUNT 4

#define LAYOUT_2_COL_COUNT 7
#define LAYOUT_2_ROW_COUNT 4

#define LAYOUT_3_COL_COUNT 10
#define LAYOUT_3_ROW_COUNT  6

#if LCD_WIDTH < 480  // number of columns and rows is based on LCD display resolution
  #define KB_TYPE_STANDARD
  #define KB_COL_COUNT LAYOUT_1_COL_COUNT
  #define KB_ROW_COUNT LAYOUT_1_ROW_COUNT
#elif LCD_WIDTH < 800
  #define KB_TYPE_EXTENDED
  #define KB_COL_COUNT LAYOUT_2_COL_COUNT
  #define KB_ROW_COUNT LAYOUT_2_ROW_COUNT
#else
  #define KB_TYPE_QWERTY
  #define KB_COL_COUNT LAYOUT_3_COL_COUNT
  #define KB_ROW_COUNT LAYOUT_3_ROW_COUNT
#endif

#define LAYOUT_QWERTY 0
#define LAYOUT_QWERTZ 1
#define LAYOUT_AZERTY 2

#define GRID_ROW_COUNT (1 + KB_ROW_COUNT + 1)         // text box + keyboard rows + control bar
#define ROW_HEIGHT     (LCD_HEIGHT / GRID_ROW_COUNT)  // button height
#define CTRL_COL_COUNT 4                              // control button count for keyboard view

// keyboard key sizes
#define KEY_WIDTH  LCD_WIDTH / KB_COL_COUNT + 0.5
#define KEY_HEIGHT ROW_HEIGHT
#define KEY_COUNT  (1 + (KB_COL_COUNT * KB_ROW_COUNT) + (CTRL_COL_COUNT))  // send + all keys + control bar keys

// control bar sizes
#define CTRL_WIDTH           (LCD_WIDTH / CTRL_COL_COUNT) // control bar button width in keyboard view
#define TERMINAL_CTRL_WIDTH  (LCD_WIDTH / TERM_KEY_COUNT) // control bar button width in terminal view
#define CTRL_HEIGHT          ROW_HEIGHT

// value textbox inset padding
#define TEXTBOX_INSET 4

#define COMMAND_START_ROW 0                              // row number for textbox and send button
#define KB_START_ROW      1                              // row number for keyboard
#define CRTL_START_ROW    (KB_START_ROW + KB_ROW_COUNT)  // row number for control bar

// for text in terminal
#define CURSOR_H_OFFSET 2
#define CURSOR_END_Y    (LCD_HEIGHT - CTRL_HEIGHT)

// gcode.command draw area inside textbox
const GUI_RECT textBoxRect = {             0 + TEXTBOX_INSET, (COMMAND_START_ROW + 0) * CTRL_HEIGHT + TEXTBOX_INSET,
                              3 * CTRL_WIDTH - TEXTBOX_INSET, (COMMAND_START_ROW + 1) * CTRL_HEIGHT - TEXTBOX_INSET};

// keyboard rectangles
  const GUI_RECT editorKeyRect[KEY_COUNT] = {
  // row textbox
  {3 * CTRL_WIDTH, COMMAND_START_ROW * CTRL_HEIGHT, 4 * CTRL_WIDTH, (COMMAND_START_ROW + 1) * CTRL_HEIGHT},  // Send (top row)

  // row control bar
  {0 * CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 1 * CTRL_WIDTH, LCD_HEIGHT},  // ABC/123
  {1 * CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 2 * CTRL_WIDTH, LCD_HEIGHT},  // Space
  {2 * CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 3 * CTRL_WIDTH, LCD_HEIGHT},  // Del
  {3 * CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 4 * CTRL_WIDTH, LCD_HEIGHT},  // Back

  // row 1
  {0 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 1 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  {1 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 2 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  {2 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 3 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  {3 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 4 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  {4 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 5 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  {5 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 6 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  #if KB_COL_COUNT > LAYOUT_1_COL_COUNT
    {6 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 7 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  #endif
  #if KB_COL_COUNT > LAYOUT_2_COL_COUNT
    {7 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 8 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
    {8 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 9 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
    {9 * KEY_WIDTH, (KB_START_ROW + 0) * KEY_HEIGHT, 10 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT},
  #endif

    // row 2
    {0 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 1 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
    {1 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 2 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
    {2 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 3 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
    {3 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 4 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
    {4 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 5 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
    {5 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 6 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
  #if KB_COL_COUNT > LAYOUT_1_COL_COUNT
    {6 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 7 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
  #endif
  #if KB_COL_COUNT > LAYOUT_2_COL_COUNT
    {7 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 8 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
    {8 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 9 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
    {9 * KEY_WIDTH, (KB_START_ROW + 1) * KEY_HEIGHT, 10 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT},
  #endif

    // row 3
    {0 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 1 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
    {1 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 2 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
    {2 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 3 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
    {3 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 4 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
    {4 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 5 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
    {5 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 6 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
  #if KB_COL_COUNT > LAYOUT_1_COL_COUNT
    {6 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 7 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
  #endif
  #if KB_COL_COUNT > LAYOUT_2_COL_COUNT
    {7 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 8 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
    {8 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 9 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
    {9 * KEY_WIDTH, (KB_START_ROW + 2) * KEY_HEIGHT, 10 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT},
  #endif
    // row 4
    {0 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 1 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
    {1 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 2 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
    {2 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 3 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
    {3 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 4 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
    {4 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 5 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
    {5 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 6 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
  #if KB_COL_COUNT > LAYOUT_1_COL_COUNT
    {6 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 7 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
  #endif
  #if KB_COL_COUNT > LAYOUT_2_COL_COUNT
    {7 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 8 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
    {8 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 9 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
    {9 * KEY_WIDTH, (KB_START_ROW + 3) * KEY_HEIGHT, 10 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT},
  #endif

  #if KB_COL_COUNT > LAYOUT_2_COL_COUNT
    // row 5
    {0 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 1 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {1 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 2 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {2 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 3 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {3 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 4 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {4 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 5 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {5 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 6 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {6 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 7 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {7 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 8 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {8 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 9 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},
    {9 * KEY_WIDTH, (KB_START_ROW + 4) * KEY_HEIGHT, 10 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT},

    // row 6
    {0 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 1 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {1 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 2 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {2 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 3 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {3 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 4 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {4 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 5 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {5 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 6 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {6 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 7 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {7 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 8 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {8 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 9 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
    {9 * KEY_WIDTH, (KB_START_ROW + 5) * KEY_HEIGHT, 10 * KEY_WIDTH, (KB_START_ROW + 6) * KEY_HEIGHT},
  #endif
};

// area rectangles
const GUI_RECT editorAreaRect[3] = {
  {0, COMMAND_START_ROW * CTRL_HEIGHT, LCD_WIDTH, ROW_HEIGHT},                   // text box + send area
  {0, ROW_HEIGHT,                      LCD_WIDTH, LCD_HEIGHT - CTRL_HEIGHT},  // keyboard area
  {0, CRTL_START_ROW * CTRL_HEIGHT,    LCD_WIDTH, LCD_HEIGHT}                    // control bar area
};

const GUI_RECT terminalKeyRect[TERM_KEY_COUNT] = {
  {0 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 1 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT},// page number
  {1 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 2 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT},// page down
  {2 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 3 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT},// page up
  {3 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 4 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT},// ACK
  {4 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT - CTRL_HEIGHT, 5 * TERMINAL_CTRL_WIDTH, LCD_HEIGHT},// Back
};

const GUI_RECT terminalAreaRect[2] = {
  {0,            0, LCD_WIDTH, CURSOR_END_Y},  // terminal area
  {0, CURSOR_END_Y, LCD_WIDTH,   LCD_HEIGHT},  // control area
};

// keyboard keys for first layout
const char * const gcodeKey123[KEY_COUNT] = {
    "Send", "ABC", "Space", "Del", "Back",
  #if KB_COL_COUNT == LAYOUT_1_COL_COUNT
    "1", "2", "3", "M", "G", "T",
    "4", "5", "6", "X", "Y", "Z",
    "7", "8", "9", "E", "F", "R",
    ".", "0", "-", "/", "S", "V",
  #elif KB_COL_COUNT == LAYOUT_2_COL_COUNT
    "1", "2", "3", "M", "G", "T", "V",
    "4", "5", "6", "X", "Y", "Z", "S",
    "7", "8", "9", "E", "F", "R", "Q",
    ".", "0", "-", "/", "I", "J", "P",
  #else
    "A", "B", "C", "D", "E", "F", "G", "1", "2", "3",
    "H", "I", "J", "K", "L", "M", "N", "4", "5", "6",
    "O", "P", "Q", "R", "S", "T", "U", "7", "8", "9",
    "V", "W", "X", "Y", "Z", "(", ")", ".", "0", "-",
    "!", "@", "#", "%", "&", ",", ";", "*", "/", "+",
    "~", "`", "$","\\","\"", "'", ":", "_", "=", "?",
  #endif
};

// keyboard keys for second layout
const char * const gcodeKeyABC[KEY_COUNT] = {
  "Send", "123", "Space", "Del", "Back",
  #if KB_COL_COUNT == LAYOUT_1_COL_COUNT
    "A", "B", "C", "D", "H", "I",
    "J", "K", "L", "N", "O", "P",
    ",", ";", ":", "Q", "U", "W",
    "+", "*", "?", "!", "#", "&",
  #elif KB_COL_COUNT == LAYOUT_2_COL_COUNT
    "A", "B", "C", "D", "H", "K", "L",
    ",", ";", ":", "N", "O", "U", "W",
    "+", "*", "?", "!", "#", "&", "$",
    "/", "=", "(", ")", "@", "_", "%",
  #else
    #if TERMINAL_KEYBOARD_LAYOUT == LAYOUT_QWERTY
      "!", "@", "#", "%", "&", "*", "(", ")", "-", "+",
      "1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
      "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P",
      "A", "S", "D", "F", "G", "H", "J", "K", "L", ";",
      "Z", "X", "C", "V", "B", "N", "M", ",", ".", "/",
      "~", "`", "$","\\","\"", "'", ":", "_", "=", "?",
    #elif TERMINAL_KEYBOARD_LAYOUT == LAYOUT_QWERTZ
      "!", "\"", "$", "%", "&", "/", "(", ")", "=", "?",
      "1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
      "Q", "W", "E", "R", "T", "Z", "U", "I", "O", "P",
      "A", "S", "D", "F", "G", "H", "J", "K", "L", "@",
      "Y", "X", "C", "V", "B", "N", "M", ",", ".", "-",
      "|", ";", ":", "_", "#", "~", "+", "*", "'", "\\",
    #elif TERMINAL_KEYBOARD_LAYOUT == LAYOUT_AZERTY
      "#", "@", "~", "&", "(", ")", "_", "'", "\"", "%",
      "1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
      "A", "Z", "E", "R", "T", "Y", "U", "I", "O", "P",
      "Q", "S", "D", "F", "G", "H", "J", "K", "L", "M",
      "W", "X", "C", "V", "B", "N", ".", ",", ":", ";",
      "-", "+", "*", "\\", "|", "/", "?","!", "$", "=",
    #endif
  #endif
};

char * terminalBuf;
TERMINAL_DATA * terminalData;
uint8_t curView = 0;

bool numpad =
  #if defined(KB_TYPE_QWERTY)
    false;  // show qwerty as default for larger
  #else
    true;
  #endif

static inline void keyboardDrawButton(uint8_t index, uint8_t isPressed)
{
  if (index >= COUNT(editorKeyRect))
    return;

  uint16_t bgcolor;
  uint16_t fontcolor;

  if (index == GKEY_SPACE || index == GKEY_DEL || index > GKEY_BACK)
  {
    fontcolor = KEY_FONT_COLOR;
    bgcolor = KEY_BG_COLOR;
  }
  else
  {
    fontcolor = CTRL_FONT_COLOR;
    bgcolor = CTRL_BG_COLOR;
  }

  const GUI_RECT rectBtn = {editorKeyRect[index].x0 + 3, editorKeyRect[index].y0 + 3,
                            editorKeyRect[index].x1 - 3, editorKeyRect[index].y1 - 3};

  BUTTON btn = {.fontColor = fontcolor,
               .backColor = bgcolor,
               .context = (uint8_t *)((numpad) ? gcodeKey123[index] : gcodeKeyABC[index]),
               .lineColor = bgcolor,
               .lineWidth = 0,
               .pBackColor = fontcolor,
               .pFontColor = bgcolor,
               .pLineColor = fontcolor,
               .radius = BTN_ROUND_CORNER,
               .rect = rectBtn};

  if (index != GKEY_SEND)
    setLargeFont(true);

  GUI_DrawButton(&btn, isPressed);
  setLargeFont(false);
}

static inline void drawGcodeText(char *gcode)
{
  GUI_SetColor(BAR_VALUE_FONT_COLOR);
  GUI_SetBkColor(BAR_VALUE_BG_COLOR);
  GUI_ClearPrect(&textBoxRect);

  if (gcode != NULL)
    GUI_DispStringInRect(textBoxRect.x0 + 1, textBoxRect.y0 + 1, textBoxRect.x1 - 1, textBoxRect.y1 - 1, (uint8_t *)gcode);
}

static inline void drawKeyboard(void)
{
  GUI_SetColor(BAR_BORDER_COLOR);

  GUI_HLine( editorAreaRect[0].x0, editorAreaRect[0].y1, editorAreaRect[0].x1);
  GUI_HLine( editorAreaRect[1].x0, editorAreaRect[1].y1, editorAreaRect[1].x1);

  for (uint8_t i = 0; i < COUNT(gcodeKeyABC); i++)
  {
    keyboardDrawButton(i, false);
  }
}

static inline void keyboardDrawMenu(void)
{
  setMenu(MENU_TYPE_FULLSCREEN, NULL, COUNT(editorKeyRect), editorKeyRect, keyboardDrawButton, NULL);

  // clear bar area
  GUI_SetBkColor(BAR_BG_COLOR);
  GUI_ClearPrect(&editorAreaRect[0]);
  GUI_ClearPrect(&editorAreaRect[2]);

  GUI_SetBkColor(KB_BG_COLOR);
  GUI_ClearPrect(&editorAreaRect[1]);  // clear keyboard area

  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
  // draw keyboard and gcode value
  drawKeyboard();
  drawGcodeText(NULL);
}

static inline void menuKeyboardView(void)
{
  KEY_VALUES key_num = KEY_IDLE;
  char gcodeBuf[CMD_MAX_CHAR] = {0};
  uint8_t nowIndex = 0;
  uint8_t lastIndex = 0;

  keyboardDrawMenu();

  while (curView == 1)
  {
    if (infoMenu.menu[infoMenu.cur] != menuTerminal)
      break;

    key_num = menuKeyGetValue();
    switch (key_num)
    {
      case GKEY_IDLE:
        break;

      case GKEY_BACK:
        infoMenu.cur--;
        break;

      case GKEY_SEND:
        if (nowIndex)
        {
          gcodeBuf[nowIndex++] = '\n'; // End char '\n' for Gcode
          gcodeBuf[nowIndex] = 0;
          storeCmd(gcodeBuf);
          gcodeBuf[nowIndex = 0] = 0;
        }

        curView = 2;
        break;

      case GKEY_ABC_123:
        numpad = !numpad;
        drawKeyboard();
        break;

      case GKEY_DEL:
        if (nowIndex)
          gcodeBuf[--nowIndex] = 0;
        break;

      case GKEY_SPACE:
        if (nowIndex < CMD_MAX_CHAR - 1 && nowIndex > 0)
        {
          gcodeBuf[nowIndex++] = ' ';
          gcodeBuf[nowIndex] = 0;
        }
        break;

      default:
        if (nowIndex < CMD_MAX_CHAR - 1)
        {
          gcodeBuf[nowIndex++] = (numpad) ? gcodeKey123[key_num][0] : gcodeKeyABC[key_num][0];
          gcodeBuf[nowIndex] = 0;
        }
        break;
    }

    if (lastIndex != nowIndex)
    {
      lastIndex = nowIndex;
      drawGcodeText(gcodeBuf);
    }
    loopBackEnd();
  }
  GUI_RestoreColorDefault();
}

static inline void saveGcodeTerminalCache( char *str)
{
  uint16_t len = 0;
  uint16_t sign_len = strlen(str);
  if ((terminalData->terminalBufTail + sign_len) < terminalData->buffSize)
  {
    memcpy(terminalBuf + terminalData->terminalBufTail, str, sign_len);
    terminalData->terminalBufTail += sign_len;
  }
  else
  {
    len = (terminalData->terminalBufTail + sign_len) - terminalData->buffSize;
    memcpy(terminalBuf + terminalData->terminalBufTail, str, (sign_len - len));
    terminalData->terminalBufTail = 0;
    memcpy(terminalBuf + terminalData->terminalBufTail, str + (sign_len - len), len);
    terminalData->terminalBufTail += len;
    terminalData->bufferFull = 1;
    terminalData->pageHead++;
  }
}

void terminalCache(char *stream, TERMINAL_SRC src)
{
  if (infoMenu.menu[infoMenu.cur] != menuTerminal) return;

  if (src == TERMINAL_GCODE)
    saveGcodeTerminalCache(">>");

  saveGcodeTerminalCache(stream);
}

static inline void terminalDrawButton(uint8_t index, uint8_t isPressed)
{
  if (index >= TERM_KEY_COUNT || index == 0)
    return;

  uint16_t bgcolor;
  uint16_t fontcolor;
  const char * terminalKey[] = { "1/1", "<", ">", (char *)textSelect(itemToggle[infoSettings.terminalACK].index), "Back"};
  const GUI_RECT rectBtn = {terminalKeyRect[index].x0 + 3, terminalKeyRect[index].y0 + 3,
                            terminalKeyRect[index].x1 - 3, terminalKeyRect[index].y1 - 3};

  if (index < TERM_BACK)
  {
    fontcolor = KEY_FONT_COLOR;
    bgcolor = KEY_BG_COLOR;
  }
  else
  {
    fontcolor = CTRL_FONT_COLOR;
    bgcolor = CTRL_BG_COLOR;
  }

  BUTTON btn = {.fontColor = fontcolor,
               .backColor = bgcolor,
               .context = (uint8_t *)terminalKey[index],
               .lineColor = bgcolor,
               .lineWidth = 0,
               .pBackColor = fontcolor,
               .pFontColor = bgcolor,
               .pLineColor = fontcolor,
               .radius = BTN_ROUND_CORNER,
               .rect = rectBtn};

  setLargeFont(true);
  GUI_DrawButton(&btn, isPressed);
  setLargeFont(false);
}

static inline void terminalDrawPageNumber(void)
{
  GUI_SetBkColor(BAR_BG_COLOR);
  GUI_ClearRect(terminalKeyRect[TERM_PAGE_NUMBER].x0, terminalKeyRect[TERM_PAGE_NUMBER].y0 + 1,
                terminalKeyRect[TERM_PAGE_NUMBER].x1, terminalKeyRect[TERM_PAGE_NUMBER].y1);

  char tempstr[10];
  sprintf(tempstr, "%d/%d", abs(((terminalData->pageTail - terminalData->pageHead) - terminalData->pageIndex) + 1),
          abs((terminalData->pageTail - terminalData->pageHead) + 1));

  GUI_SetColor(PAGE_FONT_COLOR);
  setLargeFont(true);
  GUI_DispStringInPrect(&terminalKeyRect[TERM_PAGE_NUMBER], (uint8_t *)tempstr);
  setLargeFont(false);
}

static inline void terminalDrawMenu(void)
{
  setMenu(MENU_TYPE_FULLSCREEN, NULL, COUNT(terminalKeyRect), terminalKeyRect, terminalDrawButton, NULL);

  // clear terminal area
  GUI_SetBkColor(TERM_BG_COLOR);
  GUI_ClearPrect(&terminalAreaRect[0]);

  // clear bar area
  GUI_SetBkColor(BAR_BG_COLOR);
  GUI_ClearPrect(&terminalAreaRect[1]);

  // draw border
  GUI_SetColor(BAR_BORDER_COLOR);
  GUI_HLine(terminalAreaRect[0].x0, terminalAreaRect[0].y1, terminalAreaRect[0].x1);

  // draw keyboard
  for (uint8_t i = 0; i < COUNT(terminalKeyRect); i++)
  {
    terminalDrawButton(i, false);
  }
  terminalDrawPageNumber();
}

void menuTerminalWindow(void)
{
  #define CURSOR_START_X (terminalAreaRect[0].x0 + CURSOR_H_OFFSET)

  KEY_VALUES key_num = KEY_IDLE;
  CHAR_INFO info;
  uint16_t lastTerminalIndex = 0;
  uint8_t pageBufIndex = 0;
  int16_t cursorX = CURSOR_START_X;
  int16_t cursorY = terminalAreaRect[0].y0;
  terminalDrawMenu();

  while (curView == 2)
  {
    if (infoMenu.menu[infoMenu.cur] != menuTerminal)
      break;

    key_num = menuKeyGetValue();
    switch (key_num)
    {
      case TERM_PAGE_UP:  // page up
        if (terminalData->pageIndex < (terminalData->pageTail - terminalData->pageHead))
        {
          terminalData->pageIndex++;
        }
        if ((terminalData->pageTail < terminalData->pageHead)
            && (terminalData->pageIndex < (terminalData->pageTail + terminalData->maxPageCount - terminalData->pageHead)))
        {
          terminalData->pageIndex++;
        }
        break;

      case TERM_PAGE_DOWN:  // page down
        if (terminalData->pageIndex > 0)
          terminalData->pageIndex--;
        break;

      case TERM_TOGGLE_ACK:  // toggle ack in terminal
        infoSettings.terminalACK = (infoSettings.terminalACK + 1) % ITEM_TOGGLE_NUM;
        terminalDrawButton(TERM_TOGGLE_ACK, false);
        break;

      case TERM_BACK:  // back
        curView = 1;
        break;

      default:
        break;
    }

    // Scroll a certain number of pages from the top of the page buffer
    if (terminalData->oldPageIndex != terminalData->pageIndex)
    {
      terminalData->oldPageIndex = terminalData->pageIndex;

      if (terminalData->pageTail >= terminalData->pageIndex)
        pageBufIndex = terminalData->pageTail - terminalData->pageIndex;
      else
        pageBufIndex = terminalData->pageTail + (terminalData->maxPageCount - terminalData->pageIndex);

      lastTerminalIndex = terminalData->ptr[pageBufIndex] - terminalBuf;
      cursorX = CURSOR_START_X;
      cursorY = terminalAreaRect[0].y0;

      GUI_SetBkColor(TERM_BG_COLOR);
      GUI_ClearPrect(&terminalAreaRect[0]);

      terminalDrawPageNumber();
    }

    getCharacterInfo((uint8_t *)(terminalBuf + lastTerminalIndex), &info);

    while (terminalBuf + lastTerminalIndex && (lastTerminalIndex != terminalData->terminalBufTail))
    {
      // Next Line
      if (cursorX + info.pixelWidth > terminalAreaRect[0].x1 ||
          (terminalBuf[lastTerminalIndex] == '\n' && cursorX != CURSOR_START_X))
      {
        cursorX = CURSOR_START_X;
        cursorY += info.pixelHeight;
      }

      if (terminalBuf[lastTerminalIndex] != '\n')
      {
        if (cursorY + info.pixelHeight > terminalAreaRect[0].y1)  // Save the page pointer and scroll to a new screen
        {
          if (terminalData->pageIndex != 0)
            break;

          terminalData->pageTail = (terminalData->pageTail + 1) % terminalData->maxPageCount;
          // Save character buffer index to page buffer
          terminalData->ptr[terminalData->pageTail] = terminalBuf + lastTerminalIndex;

          // Update the bottom of the page buffer to limit the page range
          if ((terminalData->bufferFull == 1) && (terminalData->oldPageHead == terminalData->pageHead))
            terminalData->pageHead++;

          if (terminalData->pageHead >= terminalData->maxPageCount)
            terminalData->pageHead = 0;

          terminalData->oldPageHead = terminalData->pageHead;
          cursorX = CURSOR_START_X;
          cursorY = terminalAreaRect[0].y0;

          GUI_SetBkColor(TERM_BG_COLOR);
          GUI_ClearPrect(&terminalAreaRect[0]);

          terminalDrawPageNumber();
        }

        GUI_SetColor(TERM_FONT_COLOR);
        GUI_SetBkColor(TERM_BG_COLOR);

        GUI_DispOne(cursorX, cursorY, (uint8_t *)(terminalBuf + lastTerminalIndex));
        cursorX += info.pixelWidth;
      }

      lastTerminalIndex += info.bytes;
      if (lastTerminalIndex >= terminalData->buffSize)
        lastTerminalIndex = 0;
    }

    loopBackEnd();
  }

  terminalData->bufferFull = 0;
  terminalData->terminalBufTail = 0;
  terminalBuf[0] = 0;
  terminalData->pageTail = 0;
  terminalData->pageHead = 0;
  terminalData->pageIndex = 0;
  terminalData->oldPageIndex = 0;

  GUI_RestoreColorDefault();
}

void menuTerminal(void)
{
  TERMINAL_DATA termPage = {{terminalBuf}, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  if (isPrinting() || infoHost.printing) // display only 1 page if printing
  {
    termPage.buffSize = (LCD_WIDTH / BYTE_WIDTH * LCD_HEIGHT / BYTE_HEIGHT);
    termPage.maxPageCount = 1;
  }
  else
  {
    termPage.buffSize = TERMINAL_MAX_CHAR;
    termPage.maxPageCount = MAX_PAGE_COUNT;
  }

  char pageBuff[termPage.buffSize];

  terminalBuf = pageBuff;
  terminalData = &termPage;
  curView = 1;

  for(uint8_t i = 0; i < termPage.maxPageCount; i++)
  {
    termPage.ptr[i] = terminalBuf;
  }

  while (infoMenu.menu[infoMenu.cur] == menuTerminal)
  {
    if (curView == 1)
      menuKeyboardView();
    else if (curView == 2)
      menuTerminalWindow();
  }
}
