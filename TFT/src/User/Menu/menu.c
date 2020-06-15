#include "menu.h"
#include "includes.h"
#include "list_item.h"

// exhibitRect is 2 ICON Space in the Upper Row and 2 Center Coloum.
const GUI_RECT exhibitRect = {
   1*ICON_WIDTH+1*SPACE_X+START_X,  0*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  3*ICON_WIDTH+2*SPACE_X+START_X,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y
};

const GUI_RECT rect_of_key[ITEM_PER_PAGE*2]={
  //8 icons area
  {0*ICON_WIDTH+0*SPACE_X+START_X,  0*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  1*ICON_WIDTH+0*SPACE_X+START_X,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y},
  {1*ICON_WIDTH+1*SPACE_X+START_X,  0*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  2*ICON_WIDTH+1*SPACE_X+START_X,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y},
  {2*ICON_WIDTH+2*SPACE_X+START_X,  0*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  3*ICON_WIDTH+2*SPACE_X+START_X,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y},
  {3*ICON_WIDTH+3*SPACE_X+START_X,  0*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  4*ICON_WIDTH+3*SPACE_X+START_X,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y},
  {0*ICON_WIDTH+0*SPACE_X+START_X,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  1*ICON_WIDTH+0*SPACE_X+START_X,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},
  {1*ICON_WIDTH+1*SPACE_X+START_X,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  2*ICON_WIDTH+1*SPACE_X+START_X,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},
  {2*ICON_WIDTH+2*SPACE_X+START_X,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  3*ICON_WIDTH+2*SPACE_X+START_X,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},
  {3*ICON_WIDTH+3*SPACE_X+START_X,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  4*ICON_WIDTH+3*SPACE_X+START_X,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},

  //8 labels area
  {0*SPACE_X_PER_ICON,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  1*SPACE_X_PER_ICON,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},
  {1*SPACE_X_PER_ICON,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  2*SPACE_X_PER_ICON,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},
  {2*SPACE_X_PER_ICON,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  3*SPACE_X_PER_ICON,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},
  {3*SPACE_X_PER_ICON,  1*ICON_HEIGHT+0*SPACE_Y+ICON_START_Y,  4*SPACE_X_PER_ICON,  1*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y},
  {0*SPACE_X_PER_ICON,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  1*SPACE_X_PER_ICON,  2*ICON_HEIGHT+2*SPACE_Y+ICON_START_Y},
  {1*SPACE_X_PER_ICON,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  2*SPACE_X_PER_ICON,  2*ICON_HEIGHT+2*SPACE_Y+ICON_START_Y},
  {2*SPACE_X_PER_ICON,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  3*SPACE_X_PER_ICON,  2*ICON_HEIGHT+2*SPACE_Y+ICON_START_Y},
  {3*SPACE_X_PER_ICON,  2*ICON_HEIGHT+1*SPACE_Y+ICON_START_Y,  4*SPACE_X_PER_ICON,  2*ICON_HEIGHT+2*SPACE_Y+ICON_START_Y},
};

const GUI_RECT rect_of_keyListView[ITEM_PER_PAGE]={
  //8 icons area
  {START_X,  0*LISTITEM_HEIGHT+ICON_START_Y,    LISTITEM_WIDTH+START_X,  1*LISTITEM_HEIGHT+ICON_START_Y},
  {START_X,  1*LISTITEM_HEIGHT+ICON_START_Y,    LISTITEM_WIDTH+START_X,  2*LISTITEM_HEIGHT+ICON_START_Y},
  {START_X,  2*LISTITEM_HEIGHT+ICON_START_Y,    LISTITEM_WIDTH+START_X,  3*LISTITEM_HEIGHT+ICON_START_Y},
  {START_X,  3*LISTITEM_HEIGHT+ICON_START_Y,    LISTITEM_WIDTH+START_X,  4*LISTITEM_HEIGHT+ICON_START_Y},
  {START_X,  4*LISTITEM_HEIGHT+ICON_START_Y,    LISTITEM_WIDTH+START_X,  5*LISTITEM_HEIGHT+ICON_START_Y},

  {2*START_X + LISTITEM_WIDTH,  0*LIST_ICON_HEIGHT+0*LISTICON_SPACE_Y+ICON_START_Y,  2*START_X + LISTITEM_WIDTH + 1*LIST_ICON_WIDTH,  1*LIST_ICON_HEIGHT+0*LISTICON_SPACE_Y+ICON_START_Y},
  {2*START_X + LISTITEM_WIDTH,  1*LIST_ICON_HEIGHT+1*LISTICON_SPACE_Y+ICON_START_Y,  2*START_X + LISTITEM_WIDTH + 1*LIST_ICON_WIDTH,  2*LIST_ICON_HEIGHT+1*LISTICON_SPACE_Y+ICON_START_Y},
  {2*START_X + LISTITEM_WIDTH,  2*LIST_ICON_HEIGHT+2*LISTICON_SPACE_Y+ICON_START_Y,  2*START_X + LISTITEM_WIDTH + 1*LIST_ICON_WIDTH,  3*LIST_ICON_HEIGHT+2*LISTICON_SPACE_Y+ICON_START_Y},
};

const GUI_RECT rect_of_key_14[14]={
  //7 icons area
  {1,  9, 79,  113 },
  {81,  9, 159,  113 },
  {161, 9, 239,  113},
  {241,  9, 319,  113 },

  {30,  116, 108,  220 },
  {121,  116, 199,  220 },
  {212,  116, 290,  220 },

  //7 labels area
  {1,  89, 79,  105 },
  {81,  89, 159,  105 },
  {161, 89, 239,  105},
  {241,  89, 319,  105 },

  {30,  196, 108,  212 },
  {121,  196, 199,  212 },
  {212,  196, 290,  212 },
};

//Clean up the gaps outside icons
void menuClearGaps(void)
{
  const GUI_RECT gaps[]={
  {0,                               0,               LCD_WIDTH,                       TITLE_END_Y},
  {0,                               TITLE_END_Y,     LCD_WIDTH,                       ICON_START_Y},
  {0,                               ICON_START_Y,    0*ICON_WIDTH+0*SPACE_X+START_X,  LCD_HEIGHT},
  {1*ICON_WIDTH+0*SPACE_X+START_X,  ICON_START_Y,    1*ICON_WIDTH+1*SPACE_X+START_X,  LCD_HEIGHT},
  {2*ICON_WIDTH+1*SPACE_X+START_X,  ICON_START_Y,    2*ICON_WIDTH+2*SPACE_X+START_X,  LCD_HEIGHT},
  {3*ICON_WIDTH+2*SPACE_X+START_X,  ICON_START_Y,    3*ICON_WIDTH+3*SPACE_X+START_X,  LCD_HEIGHT},
  {4*ICON_WIDTH+3*SPACE_X+START_X,  ICON_START_Y,    LCD_WIDTH,                       LCD_HEIGHT}};

  GUI_SetBkColor(infoSettings.title_bg_color);
  GUI_ClearPrect(gaps);
  GUI_SetBkColor(infoSettings.bg_color);
  for(uint8_t i = 1; i < COUNT(gaps); i++)
    GUI_ClearPrect(gaps + i);
}

void GUI_RestoreColorDefault(void){
  GUI_SetBkColor(infoSettings.bg_color);
  GUI_SetColor(infoSettings.font_color);
  GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
  GUI_SetNumMode(GUI_NUMMODE_SPACE);
}


void menuClearGaps14(void)
{
  const GUI_RECT gaps[]={
  {0,   0,    LCD_WIDTH,    9},
  {0,   0,    1,    LCD_HEIGHT},
  {319,   0,    LCD_WIDTH,    LCD_HEIGHT},

  {79,   0,    81,    116},
  {159,   0,    161,    116},
  {239,   0,    241,    116},
  {0,   113,    LCD_WIDTH,    116},

  {0,   113,    30,    LCD_HEIGHT},
  {290,   113,    LCD_WIDTH,    LCD_HEIGHT},
  {108,   113,    121,    LCD_HEIGHT},
  {199,   113,    212,    LCD_HEIGHT},
  {0,   220,   LCD_WIDTH,    LCD_HEIGHT},
};

  GUI_SetBkColor(infoSettings.title_bg_color);
  GUI_ClearPrect(gaps);
  GUI_SetBkColor(infoSettings.bg_color);
  for(uint8_t i = 1; i < COUNT(gaps); i++)
    GUI_ClearPrect(gaps + i);
}
static const MENUITEMS *curMenuItems = NULL;   //current menu
static const MENUITEMS14 *curMenuItems14 = NULL;   //current menu

static const LISTITEMS *curListItems = NULL;   //current listmenu

static bool isListview;

uint8_t *labelGetAddress(const LABEL *label)
{
  if (label->index == LABEL_BACKGROUND) return NULL;  // No content in label
  if (label->index < LABEL_NUM) // Index of language
    return textSelect(label->index);
  else // Address of string
    return label->address;
}
void menuDrawItem(const ITEM *item, uint8_t positon)
{
  uint8_t *content = labelGetAddress(&item->label);
  const GUI_RECT *rect = rect_of_key + positon;
  if(item->icon != ICON_BACKGROUND)
    ICON_ReadDisplay(rect->x0, rect->y0, item->icon);
  else
    GUI_ClearPrect(rect);

  rect = rect_of_key + ITEM_PER_PAGE + positon;
  GUI_ClearPrect(rect);
  if (content)
    GUI_DispStringInPrect(rect, content);
}
void menuDrawItem14(const ITEM *item, uint8_t positon)
{
  uint8_t *content = labelGetAddress(&item->label);
  const GUI_RECT *rect = rect_of_key_14 + positon;

  if(item->icon != ICON_BACKGROUND)
    ICON_ReadDisplay14(rect->x0, rect->y0, item->icon);
  else
    GUI_ClearPrect(rect);

  rect = rect_of_key_14 + 7 + positon;
  if (content){
    GUI_SetTextMode(GUI_TEXTMODE_TRANS);
    GUI_DispStringInRect(rect->x0, rect->y0, rect->x1, rect->y1,content);
    GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
  }






}
void menuDrawIconOnly14(const ITEM *item, uint8_t positon)
{
  const GUI_RECT *rect = rect_of_key_14 + positon;
  if(item->icon != ICON_BACKGROUND)
    ICON_ReadDisplay14(rect->x0, rect->y0, item->icon);
  else
    GUI_ClearPrect(rect);
}

void menuDrawIconOnly(const ITEM *item, uint8_t positon)
{
  const GUI_RECT *rect = rect_of_key + positon;
  if(item->icon != ICON_BACKGROUND)
    ICON_ReadDisplay(rect->x0, rect->y0, item->icon);
  else
    GUI_ClearPrect(rect);
}

 void menuDrawListItem(const LISTITEM *item, uint8_t position)
{
   const GUI_RECT *rect = rect_of_keyListView + position;
  if (item->icon == ICONCHAR_BACKGROUND)
  {
    GUI_ClearPrect(rect);
  }
  else
  {
    ListItem_Display(rect, position, item, false);
  }
}
void menuRefreshListPage(void){
 for (uint8_t i = 0; i < ITEM_PER_PAGE; i++)
    {
      menuDrawListItem(&curListItems->items[i], i);
      #ifdef RAPID_SERIAL_COMM
        if(isPrinting() == true && infoSettings.serial_alwaysOn != 1)
        {
          loopBackEnd();   //perform backend printing loop between drawing icons to avoid printer idling
        }
      #endif
    }

}

static REMINDER reminder = {{0, 0, LCD_WIDTH, TITLE_END_Y}, 0, STATUS_UNCONNECT, LABEL_UNCONNECTED};
static REMINDER volumeReminder = {{0, 0, LCD_WIDTH, TITLE_END_Y}, 0, STATUS_IDLE, LABEL_BACKGROUND};
static REMINDER busySign = {{LCD_WIDTH - 5, 0, LCD_WIDTH, 5}, 0, STATUS_BUSY, LABEL_BUSY};

void reminderSetUnConnected(void)
{
  reminder.status = STATUS_UNCONNECT;
  reminder.inf = LABEL_UNCONNECTED;
}

void reminderMessage(int16_t inf, SYS_STATUS status)
{
  reminder.inf = inf;
  GUI_SetColor(infoSettings.reminder_color);
  GUI_SetBkColor(infoSettings.title_bg_color);
  GUI_DispStringInPrect(&reminder.rect, textSelect(reminder.inf));
  GUI_RestoreColorDefault();
  reminder.status = status;
  reminder.time = OS_GetTimeMs() + 2000; // 2 seconds
}

void volumeReminderMessage(int16_t inf, SYS_STATUS status)
{
  volumeReminder.inf = inf;
  GUI_SetColor(infoSettings.sd_reminder_color);
  GUI_SetBkColor(infoSettings.title_bg_color);
  GUI_DispStringInPrect(&volumeReminder.rect, textSelect(volumeReminder.inf));
  volumeReminder.status = status;
  volumeReminder.time = OS_GetTimeMs() + 2000;
  GUI_RestoreColorDefault();
}

void busyIndicator(SYS_STATUS status)
{
  if(status == STATUS_BUSY)
  {
    GUI_SetColor(YELLOW);
    GUI_FillCircle(busySign.rect.x0, (busySign.rect.y1 - busySign.rect.y0) / 2, (busySign.rect.x1-busySign.rect.x0)/2);
    GUI_SetColor(infoSettings.font_color);
  }
  busySign.status = status;
  busySign.time = OS_GetTimeMs() + 2000;
}

void loopReminderClear(void)
{
  switch(reminder.status)
  {
    case STATUS_IDLE:
      return;

    case STATUS_BUSY:
      if(infoCmd.count == CMD_MAX_LIST)
        return;
      break;

    case STATUS_UNCONNECT:
      if(infoHost.connected == false)
        return;
      break;

    case STATUS_NORMAL:
      if(OS_GetTimeMs() < reminder.time)
        return;
      break;
    default:
      return;
  }

  /* Clear warning message */
  reminder.status = STATUS_IDLE;
  if (isListview)
  {
    if (curListItems == NULL)
    return;
    menuDrawTitle(labelGetAddress(&curListItems->title));
  }
  else
  {
    if (curMenuItems == NULL)
      return;
    menuDrawTitle(labelGetAddress(&curMenuItems->title));
  }
}

void loopVolumeReminderClear(void)
{
  switch(volumeReminder.status)
  {
    case STATUS_NORMAL:
      if(OS_GetTimeMs() < volumeReminder.time)
        return;
      break;
    default:
      return;
  }

  /* Clear warning message */
  volumeReminder.status = STATUS_IDLE;
  if(isListview)
  {
    if(curListItems == NULL)
      return;
    menuDrawTitle(labelGetAddress(&curListItems->title));
  }
  else
  {
  if(curMenuItems == NULL)
    return;
  menuDrawTitle(labelGetAddress(&curMenuItems->title));
  }

}

void loopBusySignClear(void)
{
  switch(busySign.status)
  {
    case STATUS_IDLE:
      return;

    case STATUS_BUSY:
     if(OS_GetTimeMs() < busySign.time)
        return;
     break;
  }

  /* End Busy display sing */
  busySign.status = STATUS_IDLE;
  GUI_SetColor(infoSettings.title_bg_color);
  GUI_FillCircle(busySign.rect.x0, (busySign.rect.y1 - busySign.rect.y0) / 2, (busySign.rect.x1-busySign.rect.x0)/2);
  GUI_SetColor(infoSettings.font_color);
}

void menuDrawTitle(const uint8_t *content) //(const MENUITEMS * menuItems)
{
  uint16_t start_y = (TITLE_END_Y - BYTE_HEIGHT) / 2;
  GUI_FillRectColor(10, start_y, LCD_WIDTH-10, start_y+BYTE_HEIGHT, infoSettings.title_bg_color);

  if (content)
  {
    GUI_SetTextMode(GUI_TEXTMODE_TRANS);
    GUI_DispLenString(10, start_y, content, LCD_WIDTH-20);
    GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
  }

  show_GlobalInfo();
  if(reminder.status == STATUS_IDLE) return;
  GUI_SetColor(infoSettings.reminder_color);
  GUI_SetBkColor(infoSettings.title_bg_color);
  GUI_DispStringInPrect(&reminder.rect, textSelect(reminder.inf));
  GUI_RestoreColorDefault();
}

//Draw the entire interface
void menuDrawPage(const MENUITEMS *menuItems)
{
  u8 i = 0;
  isListview = false;
  curMenuItems = menuItems;
  TSC_ReDrawIcon = itemDrawIconPress;

  //GUI_Clear(BLACK);
  menuClearGaps(); //Use this function instead of GUI_Clear to eliminate the splash screen when clearing the screen.
  menuDrawTitle(labelGetAddress(&menuItems->title));
  for (i = 0; i < ITEM_PER_PAGE; i++)
  {
    menuDrawItem(&menuItems->items[i], i);
    #ifdef RAPID_SERIAL_COMM
      if(isPrinting() == true && infoSettings.serial_alwaysOn != 1)
      {
        loopBackEnd();   //perform backend printing loop between drawing icons to avoid printer idling
      }
    #endif
  }
}

//Draw the entire interface
void menuDrawPage14(const MENUITEMS14 *menuItems)
{
  u8 i = 0;
  isListview = false;
  curMenuItems14 = menuItems;
  TSC_ReDrawIcon = itemDrawIconPress14;

  GUI_Clear(BLACK);
  // menuClearGaps14(); //Use this function instead of GUI_Clear to eliminate the splash screen when clearing the screen.
  menuDrawTitle(labelGetAddress(&menuItems->title));
  for (i = 0; i < 7; i++)
  {
    menuDrawItem14(&menuItems->items[i], i);
    #ifdef RAPID_SERIAL_COMM
      if(isPrinting() == true && infoSettings.serial_alwaysOn != 1)
      {
        loopBackEnd();   //perform backend printing loop between drawing icons to avoid printer idling
      }
    #endif
  }
}
//Draw the entire interface
void menuDrawListPage(const LISTITEMS *listItems)
{
  u8 i = 0;
  isListview = true;
  curListItems = listItems;
  TSC_ReDrawIcon = itemDrawIconPress;

  GUI_SetBkColor(infoSettings.title_bg_color);
  GUI_ClearRect(0, 0, LCD_WIDTH, TITLE_END_Y);
  GUI_SetBkColor(infoSettings.bg_color);
  GUI_ClearRect(0, TITLE_END_Y, LCD_WIDTH, LCD_HEIGHT);

  //menuClearGaps(); //Use this function instead of GUI_Clear to eliminate the splash screen when clearing the screen.
  menuDrawTitle(labelGetAddress(&listItems->title));

  for (i = 0; i < ITEM_PER_PAGE; i++)
  {
    //const GUI_RECT *rect = rect_of_keyListView + i;
    if (curListItems->items[i].icon != ICONCHAR_BACKGROUND)
    menuDrawListItem(&curListItems->items[i], i);
    #ifdef RAPID_SERIAL_COMM
        if(isPrinting() == true && infoSettings.serial_alwaysOn != 1)
        {
          loopBackEnd();   //perform backend printing loop between drawing icons to avoid printer idling
        }
    #endif
  }
//  show_globalinfo();
}

//When there is a button value, the icon changes color and redraws
void itemDrawIconPress(u8 position, u8 is_press)
{

  if (position > KEY_ICON_7) return;

  if (isListview == false)
  {
    if (curMenuItems == NULL) return;
    if (curMenuItems->items[position].icon == ICON_BACKGROUND) return;

    const GUI_RECT *rect = rect_of_key + position;

    if (is_press) // Turn green when pressed
      ICON_PressedDisplay(rect->x0, rect->y0, curMenuItems->items[position].icon);
    else // Redraw normal icon when released
      ICON_ReadDisplay(rect->x0, rect->y0, curMenuItems->items[position].icon);
  }
  else
  { //draw rec over list item if pressed
    if (curListItems == NULL)
    return;

    const GUI_RECT *rect = rect_of_keyListView + position;

    if (curListItems->items[position].icon == ICONCHAR_BACKGROUND)
    {
    GUI_ClearPrect(rect);
    return;
    }
    if (is_press){
    ListItem_Display(rect,position,&curListItems->items[position], true);
    }
    else{
    ListItem_Display(rect,position,&curListItems->items[position], false);
    }

  }
}
void itemDrawIconPress14(u8 position, u8 is_press)
{

  if (position > KEY_ICON_7) return;

  if (isListview == false)
  {
    if (curMenuItems14 == NULL) return;
    if (curMenuItems14->items[position].icon == ICON_BACKGROUND) return;

    const GUI_RECT *rect = rect_of_key_14 + position;

    if (is_press) // Turn green when pressed
      ICON_PressedDisplay14(rect->x0, rect->y0, curMenuItems14->items[position].icon);
    else // Redraw normal icon when released
      ICON_ReadDisplay14(rect->x0, rect->y0, curMenuItems14->items[position].icon);
  }
  else
  { //draw rec over list item if pressed
    if (curListItems == NULL)
    return;

    const GUI_RECT *rect = rect_of_keyListView + position;

    if (curListItems->items[position].icon == ICONCHAR_BACKGROUND)
    {
    GUI_ClearPrect(rect);
    return;
    }
    if (is_press){
    ListItem_Display(rect,position,&curListItems->items[position], true);
    }
    else{
    ListItem_Display(rect,position,&curListItems->items[position], false);
    }

  }
}
// Get button value
KEY_VALUES menuKeyGetValue14(void)
{
  if (isListview == false)
  {
    return (KEY_VALUES)KEY_GetValue(sizeof(rect_of_key_14) / sizeof(rect_of_key_14[0]), rect_of_key_14); // for normal menu
  }
  else
  {
    return (KEY_VALUES)KEY_GetValue(sizeof(rect_of_keyListView) / sizeof(rect_of_keyListView[0]), rect_of_keyListView); //for listview
  }
}
// Get button value
KEY_VALUES menuKeyGetValue(void)
{
  if (isListview == false)
  {
    return (KEY_VALUES)KEY_GetValue(sizeof(rect_of_key) / sizeof(rect_of_key[0]), rect_of_key); // for normal menu
  }
  else
  {
    return (KEY_VALUES)KEY_GetValue(sizeof(rect_of_keyListView) / sizeof(rect_of_keyListView[0]), rect_of_keyListView); //for listview
  }
}

//Get the top left point of the corresponding icon position)
GUI_POINT getIconStartPoint(int index){
  GUI_POINT p = {rect_of_key[index].x0,rect_of_key[index].y0};
  return p;
}
GUI_POINT getIconStartPoint14(int index){
  GUI_POINT p = {rect_of_key_14[index].x0,rect_of_key_14[index].y0};
  return p;
}
void loopBackEnd(void)
{
  getGcodeFromFile();                 //Get Gcode command from the file to be printed

  sendQueueCmd();                     //Parse and send Gcode commands in the queue

  parseACK();                         //Parse the received slave response information

  parseRcvGcode();                    //Parse the received Gcode from other UART, such as: ESP3D, etc...

  loopCheckHeater();                  //Temperature related settings

#ifdef BUZZER_PIN
  loopBuzzer();
#endif

if(infoMachineSettings.onboard_sd_support == ENABLED && infoMachineSettings.autoReportSDStatus == DISABLED)
  {
    loopCheckPrinting(); //Check if there is a SD or USB print running.
  }

#ifdef U_DISK_SUPPORT
  USBH_Process(&USB_OTG_Core, &USB_Host);
#endif

#if LCD_ENCODER_SUPPORT
  loopCheckEncoder();
  if(infoMenu.menu[infoMenu.cur] != menuST7920)
    {
      loopCheckEncoderSteps(); //check change in encoder steps
    }
#endif

#ifdef ST7920_SPI
  loopCheckMode();
#endif

#ifdef FIL_RUNOUT_PIN
  loopBackEndFILRunoutDetect();
#endif
}

void loopFrontEnd(void)
{
  loopVolumeSource();                 //Check if volume source(SD/U disk) insert

  loopReminderClear();                //If there is a message in the status bar, timed clear

  loopVolumeReminderClear();

  loopBusySignClear();                //Busy Indicator clear

  temp_Change();  
  
#ifdef FIL_RUNOUT_PIN
  loopFrontEndFILRunoutDetect();
#endif
}

void loopProcess(void)
{
  loopBackEnd();
  loopFrontEnd();
}
