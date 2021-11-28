#ifndef _TFT_240_320_H_
#define _TFT_240_320_H_

#define LCD_WIDTH   240
#define LCD_HEIGHT  320

#ifndef BYTE_HEIGHT
  #define BYTE_HEIGHT 16
#endif
#ifndef BYTE_WIDTH
  #define BYTE_WIDTH  (BYTE_HEIGHT/2)
#endif

#ifndef LARGE_BYTE_HEIGHT
  #define LARGE_BYTE_HEIGHT 24
#endif
#ifndef LARGE_BYTE_WIDTH
  #define LARGE_BYTE_WIDTH  (LARGE_BYTE_HEIGHT/2)
#endif

#define ICON_WIDTH   70
#define ICON_HEIGHT  70
#define TITLE_END_Y  25               //title height
#define ICON_START_Y (TITLE_END_Y+4)  //top margin

#define LIST_ICON_WIDTH   55
#define LIST_ICON_HEIGHT  50

#define INFOBOX_WIDTH     150
#define INFOBOX_HEIGHT    70

#define SMALLICON_WIDTH   45
#define SMALLICON_HEIGHT  40

// Status screen menu
#define SSICON_COUNT              2
#define SSICON_WIDTH              ICON_WIDTH
#define SSICON_HEIGHT             ICON_HEIGHT
#define SSICON_VAL_Y0             55
#define SSICON_VAL_COLOR          BLACK
#define SSICON_NAME_Y0            5
#define SSICON_NAME_COLOR         WHITE
#define STATUS_MSG_ICON_XOFFSET   3
#define STATUS_MSG_ICON_YOFFSET   3
#define STATUS_MSG_TITLE_XOFFSET  3
#define STATUS_MSG_BODY_XOFFSET   0
#define STATUS_MSG_BODY_YOFFSET   45
#define STATUS_MSG_BODY_BOTTOM    4
#define STATUS_GANTRY_YOFFSET     4

#define NAME_LARGE_FONT           FONT_SIZE_NORMAL
#define VAL_LARGE_FONT            FONT_SIZE_NORMAL

// Heating Menu
#define PREHEAT_TITLE_Y   3
#define PREHEAT_TOOL_Y    32
#define PREHEAT_BED_Y     55

// Printing menu
#define PICON_LG_WIDTH     106
#define PICON_SM_WIDTH     87
#define PICON_HEIGHT       36
#define PICON_SPACE_X        (LCD_WIDTH - PICON_LG_WIDTH*2 - SPACE_X)
#define PICON_SPACE_Y      (ICON_HEIGHT + SPACE_Y - PICON_HEIGHT*2)/4
#define PICON_START_Y      (TITLE_END_Y+5)
#define PICON_TITLE_X      37
#define PICON_TITLE_Y      1
#define PICON_VAL_X        PICON_TITLE_X
#define PICON_VAL_Y        PICON_HEIGHT - BYTE_HEIGHT - 2
#define PICON_VAL_LG_EX    104
#define PICON_VAL_SM_EX    85

// Popup menu
#define POPUP_RECT_WINDOW         {SPACE_X*2, TITLE_END_Y, LCD_WIDTH - SPACE_X*2, LCD_HEIGHT-SPACE_Y}
#define POPUP_TITLE_HEIGHT        30
#define POPUP_BOTTOM_HEIGHT       50
#define POPUP_BUTTON_HEIGHT       40
#define POPUP_BUTTON_WIDTH        (LCD_WIDTH - SPACE_X*7)/2
#define POPUP_RECT_SINGLE_CONFIRM {110, LCD_HEIGHT- SPACE_Y - 5 - POPUP_BUTTON_HEIGHT, 210, LCD_HEIGHT - SPACE_Y - 5}
#define POPUP_RECT_DOUBLE_CONFIRM {SPACE_X*3,  LCD_HEIGHT- SPACE_Y - 5 - POPUP_BUTTON_HEIGHT, SPACE_X*3 + POPUP_BUTTON_WIDTH, LCD_HEIGHT - SPACE_Y - 5}
#define POPUP_RECT_DOUBLE_CANCEL  {SPACE_X*4 + POPUP_BUTTON_WIDTH*1, LCD_HEIGHT- SPACE_Y - 5 - POPUP_BUTTON_HEIGHT, SPACE_X*4 + POPUP_BUTTON_WIDTH*2, LCD_HEIGHT - SPACE_Y - 5}

// The offset of the model preview icon in the gcode file
#define MODEL_PREVIEW_OFFSET 0x01

#endif
