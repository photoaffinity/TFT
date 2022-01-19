//TG MODIFIED BY T.GIOIOSA
#include "Printing.h"
#include "includes.h"

const GUI_POINT printinfo_points[6] = {
  {START_X + PICON_LG_WIDTH * 0 + PICON_SPACE_X * 0, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0},
  {START_X + PICON_LG_WIDTH * 1 + PICON_SPACE_X * 1, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0},
  {START_X + PICON_LG_WIDTH * 2 + PICON_SPACE_X * 2, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0},
  {START_X + PICON_LG_WIDTH * 0 + PICON_SPACE_X * 0, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1},
  {START_X + PICON_LG_WIDTH * 1 + PICON_SPACE_X * 1, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1},
  {START_X + PICON_LG_WIDTH * 2 + PICON_SPACE_X * 2, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1},
};

const GUI_RECT printinfo_val_rect[6] = {
  {START_X + PICON_LG_WIDTH * 0 + PICON_SPACE_X * 0 + PICON_VAL_X, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0 + PICON_VAL_Y,
   START_X + PICON_LG_WIDTH * 0 + PICON_SPACE_X * 0 + PICON_VAL_LG_EX, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0 + PICON_VAL_Y + BYTE_HEIGHT},

  {START_X + PICON_LG_WIDTH * 1 + PICON_SPACE_X * 1 + PICON_VAL_X, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0 + PICON_VAL_Y,
   START_X + PICON_LG_WIDTH * 1 + PICON_SPACE_X * 1 + PICON_VAL_LG_EX, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0 + PICON_VAL_Y + BYTE_HEIGHT},

  {START_X + PICON_LG_WIDTH * 2 + PICON_SPACE_X * 2 + PICON_VAL_X, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0 + PICON_VAL_Y,
   START_X + PICON_LG_WIDTH * 2 + PICON_SPACE_X * 2 + PICON_VAL_SM_EX, PICON_START_Y + PICON_HEIGHT * 0 + PICON_SPACE_Y * 0 + PICON_VAL_Y + BYTE_HEIGHT},

  {START_X + PICON_LG_WIDTH * 0 + PICON_SPACE_X * 0 + PICON_VAL_X, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1 + PICON_VAL_Y,
   START_X + PICON_LG_WIDTH * 0 + PICON_SPACE_X * 0 + PICON_VAL_LG_EX, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1 + PICON_VAL_Y + BYTE_HEIGHT},

  {START_X + PICON_LG_WIDTH * 1 + PICON_SPACE_X * 1 + PICON_VAL_X, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1 + PICON_VAL_Y,
   START_X + PICON_LG_WIDTH * 1 + PICON_SPACE_X * 1 + PICON_VAL_LG_EX, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1 + PICON_VAL_Y + BYTE_HEIGHT},

  {START_X + PICON_LG_WIDTH * 2 + PICON_SPACE_X * 2 + PICON_VAL_X, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1 + PICON_VAL_Y,
   START_X + PICON_LG_WIDTH * 2 + PICON_SPACE_X * 2 + PICON_VAL_SM_EX, PICON_START_Y + PICON_HEIGHT * 1 + PICON_SPACE_Y * 1 + PICON_VAL_Y + BYTE_HEIGHT},
};

const GUI_RECT ProgressBar = {START_X + 1,                                PICON_START_Y + PICON_HEIGHT * 2 + PICON_SPACE_Y * 2 + 1,
                              START_X + 4 * ICON_WIDTH + 3 * SPACE_X - 1, ICON_START_Y + ICON_HEIGHT + SPACE_Y - PICON_SPACE_Y - 1};

static uint32_t nextLayerDrawTime = 0;
const  char *const Speed_ID[2] = {"Speed", "Flow"};
bool hasFilamentData;

#define TOGGLE_TIME     2000  // 1 seconds is 1000
#define LAYER_DRAW_TIME 500   // 1 seconds is 1000

#define LAYER_TITLE "Layer"                    //TG defines layout of the printing_icons (small) at upper half of screen
#define SPDL_ICON_POS 0
#define VAC_ICON_POS  1
#define FAN_ICON_POS  2
#define TIM_ICON_POS  3
#define Z_ICON_POS    4
#define SPD_ICON_POS  5

const ITEM itemIsPause[2] = {                   //TG changes the icon from pause to resume
  // icon                        label
  {ICON_PAUSE,                   LABEL_PAUSE},
  {ICON_RESUME,                  LABEL_RESUME},
};

const ITEM itemIsPrinting[3] = {
  // icon                        label
  {ICON_BACKGROUND,              LABEL_BACKGROUND},
  {ICON_MAINMENU,                LABEL_MAIN_SCREEN},
  {ICON_BACK,                    LABEL_BACK},
};

void menuBeforePrinting(void)
{
  // load stat/end/cancel gcodes from spi flash

  switch (infoFile.source)
  {
    case BOARD_SD:  // GCode from file on ONBOARD SD
      {
        uint32_t size;

        size = request_M23_M36(infoFile.title + 5);
        //if (powerFailedCreate(infoFile.title) == false)
        //{
        //
        //}  // FIXME: Powerfail resume is not yet supported for ONBOARD_SD. Need more work.

        if (size == 0)
        {
          ExitDir();
          infoMenu.cur--;
          return;
        }

        //if (powerFailedExist())
        //{
        request_M24(0);
        //}
        //else
        //{
        //request_M24(infoBreakPoint.offset);
        //}

        printStart(NULL, size);
        break;
      }

    case TFT_UDISK:
    case TFT_SD:  // GCode from file on TFT SD
      {
        FIL file;

        if (f_open(&file, infoFile.title, FA_OPEN_EXISTING | FA_READ) != FR_OK)
        {
          ExitDir();
          infoMenu.cur--;
          return;
        }

        if (powerFailedCreate(infoFile.title) == false)
        {}
        powerFailedlSeek(&file);

        printStart(&file, f_size(&file));
        break;
      }

    default:
      ExitDir();
      infoMenu.cur--;
      return;
  }

  infoMenu.menu[infoMenu.cur] = menuPrinting;
}

static inline void reValueSpindle(int icon_pos)    //TG updates the spindle display at icon(0), for the current tool index
{
  char tempstr[10];
  //sprintf(tempstr, "%d/%d", heatGetCurrentTemp(currentTool), heatGetTargetTemp(currentTool));  //TG get new temps for the current tool
  sprintf(tempstr, "%d", currentSpindleSpeedID ? convertSpeed_Marlin_2_LCD(currentTool,spindleGetCurSpeed(currentTool)) : 
       convertSpeed_Marlin_2_LCD(currentTool,spindleGetSetSpeed(currentTool)));

  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
  //TG 1/14/20 modified below to show Spidle or Laser during printing
  ICON_ReadDisplay(printinfo_points[icon_pos].x, printinfo_points[icon_pos].y, infoSettings.laser_mode==0 ? ICON_PRINTING_SPINDLE:ICON_PRINTING_LASER);
  GUI_DispString(printinfo_points[icon_pos].x + PICON_TITLE_X, printinfo_points[icon_pos].y + PICON_TITLE_Y,
                 (u8 *)heatDisplayID[currentTool]);                       //TG display name ID of current tool
  GUI_DispStringInPrect(&printinfo_val_rect[icon_pos], (u8 *)tempstr);    //TG print current/target temps for currentTool
  GUI_DispString(printinfo_points[icon_pos].x + PICON_TITLE_X + 5*BYTE_WIDTH,
                 printinfo_points[icon_pos].y, currentSpindleSpeedID ? (u8*)"Act" : (u8*)"Set");
  GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
}

static inline void reValueVacuum(int icon_pos)       //TG updates the temps display at icon(0-7), for the BED (only one)
{ //TG 1/14/20 show Vacuum status (dust collection state)
  char tempstr[10];
  //sprintf(tempstr, "%d/%d", heatGetCurrentTemp(BED), heatGetTargetTemp(BED));   //TG get new temps for the bed
  sprintf(tempstr, "%s %s", (vacuumState & 2) == 2 ? (char*)"Auto" : (char*)"", (vacuumState & 1) == 1 ? (char*)"On" : (char*)"Off");
  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
  ICON_ReadDisplay(printinfo_points[icon_pos].x, printinfo_points[icon_pos].y, ICON_PRINTING_VACUUM);
  GUI_DispString(printinfo_points[icon_pos].x + PICON_TITLE_X, printinfo_points[icon_pos].y + PICON_TITLE_Y,
                 (u8 *)vacuumDisplayID[0]);
  GUI_DispStringInPrect(&printinfo_val_rect[icon_pos], (u8 *)tempstr);
  GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
}

static inline void reDrawFan(int icon_pos)        //TG updates the fan speed or percent display at icon(0-7), for the current tool index
{
  char tempstr[10];
  if (infoSettings.fan_percentage == 1)           //TG pick speed or % based on flag
    sprintf(tempstr, "%d%%", fanGetCurPercent(currentFan));
  else
    sprintf(tempstr, "%d", fanGetCurSpeed(currentFan));

  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
  ICON_ReadDisplay(printinfo_points[icon_pos].x, printinfo_points[icon_pos].y, ICON_PRINTING_FAN);
  GUI_DispString(printinfo_points[icon_pos].x + PICON_TITLE_X, printinfo_points[icon_pos].y + PICON_TITLE_Y,
                 (uint8_t *)fanID[currentFan]);
  GUI_DispStringInPrect(&printinfo_val_rect[icon_pos], (uint8_t *)tempstr);
  GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
}

static inline void reDrawSpeed(int icon_pos)      //TG updates the print speed or flow display at icon(0-7) for printing
{
  char tempstr[10];

  if(currentSpeedID == 0)       //TG choose speed or flow depending on currentSpeedID flag
    ICON_ReadDisplay(printinfo_points[icon_pos].x,printinfo_points[icon_pos].y,ICON_PRINTING_SPEED);
  else
    ICON_ReadDisplay(printinfo_points[icon_pos].x, printinfo_points[icon_pos].y, ICON_PRINTING_FLOW);

  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
  sprintf(tempstr, "%d%%", speedGetCurPercent(currentSpeedID));
  GUI_DispString(printinfo_points[icon_pos].x + PICON_TITLE_X, printinfo_points[icon_pos].y + PICON_TITLE_Y,
                 (uint8_t *)Speed_ID[currentSpeedID]);
  GUI_DispStringInPrect(&printinfo_val_rect[icon_pos], (uint8_t *)tempstr);
  GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
}

static inline void reDrawTime(int icon_pos)       //TG updates the time string at icon(0-7)
{
  uint8_t hour, min, sec;

  getPrintTimeDetail(&hour, &min, &sec);
  GUI_SetNumMode(GUI_NUMMODE_ZERO);
  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
  char tempstr[10];
  sprintf(tempstr, "%02u:%02u:%02u", hour, min, sec);
  ICON_ReadDisplay(printinfo_points[icon_pos].x, printinfo_points[icon_pos].y, ICON_PRINTING_TIMER);
  GUI_DispStringInPrect(&printinfo_val_rect[icon_pos], (uint8_t *)tempstr);
  GUI_SetNumMode(GUI_NUMMODE_SPACE);
  GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
}

static inline void reDrawProgress(int icon_pos, uint8_t prevProgress)   //TG updates the % completed display at icon(0-7), for the print
{
  char buf[6];
  uint8_t newProgress = getPrintProgress();

  sprintf(buf, "%d%%", newProgress);
  GUI_SetTextMode(GUI_TEXTMODE_TRANS);
  GUI_DispString(printinfo_points[icon_pos].x + PICON_TITLE_X, printinfo_points[icon_pos].y + PICON_TITLE_Y, (uint8_t *)buf);
  GUI_SetTextMode(GUI_TEXTMODE_NORMAL);

  uint16_t progStart = ((ProgressBar.x1 - ProgressBar.x0) * prevProgress) / 100;
  uint16_t progEnd = ((ProgressBar.x1 - ProgressBar.x0) * newProgress) / 100;
  GUI_FillRectColor(ProgressBar.x0 + progStart, ProgressBar.y0, ProgressBar.x0 + progEnd, ProgressBar.y1, MAT_ORANGE);
}

static inline void reDrawLayer(int icon_pos)      //TG updates the layer height display at icon(0-7), for the print
{
  if (OS_GetTimeMs() > nextLayerDrawTime)		  //TG draw every 500ms
  {
    char tempstr[10];

    sprintf(tempstr, "%.2fmm",
            (infoFile.source >= BOARD_SD) ? coordinateGetAxisActual(Z_AXIS) : coordinateGetAxisTarget(Z_AXIS));

    GUI_SetTextMode(GUI_TEXTMODE_TRANS);
    ICON_ReadDisplay(printinfo_points[icon_pos].x, printinfo_points[icon_pos].y, ICON_PRINTING_ZLAYER);
    GUI_DispString(printinfo_points[icon_pos].x + PICON_TITLE_X, printinfo_points[icon_pos].y + PICON_TITLE_Y,
                   (uint8_t *)LAYER_TITLE);
    GUI_DispStringInPrect(&printinfo_val_rect[icon_pos], (uint8_t *)tempstr);
    GUI_SetTextMode(GUI_TEXTMODE_NORMAL);
    nextLayerDrawTime = OS_GetTimeMs() + LAYER_DRAW_TIME;
  }
}

static inline void toggleInfo(void)     //TG handle multiple hotends, fans, etc. if more than one cycle thru them
{
  if (nextScreenUpdate(TOGGLE_TIME))	//TG every 2000ms
  {
	//TG commented out not needed    
	//if (infoSettings.hotend_count > 1)
    //{
    //  currentTool = (currentTool + 1) % infoSettings.hotend_count;
    //  RAPID_SERIAL_LOOP();  // perform backend printing loop before drawing to avoid printer idling
    //  reValueNozzle(EXT_ICON_POS);
    //}

    if ((infoSettings.fan_count + infoSettings.fan_ctrl_count) > 1)
    {
      currentFan = (currentFan + 1) % (infoSettings.fan_count + infoSettings.fan_ctrl_count); // cycle thru number of fans
      RAPID_SERIAL_LOOP();  // perform backend printing loop before drawing to avoid printer idling
      reDrawFan(FAN_ICON_POS); // update the speed/% for new fan
    }

    //currentSpeedID = (currentSpeedID + 1) % 2;  //TG 2/24/21 don't toggle plot speed / flow
    currentSpindleSpeedID = (currentSpindleSpeedID + 1) % 2;  // toggle between spindle Actual and spindle Set speeds

    RAPID_SERIAL_LOOP();              // perform backend printing loop before drawing to avoid printer idling
    reValueSpindle(SPDL_ICON_POS);     // update the speeds for spindle Act or Set (based on currentSpindleSpeedID)

    RAPID_SERIAL_LOOP();  // perform backend printing loop before drawing to avoid printer idling
    reDrawSpeed(SPD_ICON_POS);
    speedQuery();

    if (infoFile.source >= BOARD_SD)
      coordinateQuery();

    if (!hasFilamentData && isPrinting())
      updatePrintUsedFilament();
  }
}

static inline void printingDrawPage(void) //TG 2/23/21 redraws entire printing menu
{
  reValueSpindle(SPDL_ICON_POS);
  reValueVacuum(VAC_ICON_POS);
  reDrawFan(FAN_ICON_POS);
  reDrawTime(TIM_ICON_POS);
  GUI_SetColor(ORANGE);
  GUI_DrawRect(ProgressBar.x0 - 1, ProgressBar.y0 - 1, ProgressBar.x1 + 1, ProgressBar.y1 + 1);
  GUI_SetColor(DARKGRAY);
  GUI_FillPrect(&ProgressBar);
  GUI_RestoreColorDefault();
  updatePrintProgress();
  reDrawProgress(TIM_ICON_POS, 0);
  nextLayerDrawTime = 0;  // Draw layer now
  reDrawLayer(Z_ICON_POS);
  reDrawSpeed(SPD_ICON_POS);
}

void drawPrintInfo(void) //TG called at start of menu and stop of printing
{
  GUI_SetTextMode(GUI_TEXTMODE_TRANS);

  ICON_CustomReadDisplay(rect_of_keySS[17].x0, rect_of_keySS[17].y0, INFOBOX_ADDR);
  GUI_SetColor(INFOMSG_BKCOLOR);
  GUI_DispString(rect_of_keySS[17].x0 + STATUS_MSG_ICON_XOFFSET, rect_of_keySS[17].y0 + STATUS_MSG_ICON_YOFFSET,
                 IconCharSelect(ICONCHAR_INFO));
  GUI_DispStringInRectEOL(rect_of_keySS[17].x0 + BYTE_HEIGHT + STATUS_MSG_TITLE_XOFFSET,
                          rect_of_keySS[17].y0 + STATUS_MSG_ICON_YOFFSET,
                          rect_of_keySS[17].x1 - BYTE_HEIGHT + STATUS_MSG_TITLE_XOFFSET,
                          rect_of_keySS[17].y1 - STATUS_MSG_ICON_YOFFSET,
                          (uint8_t *)textSelect(LABEL_PRINT_FINISHED));
  GUI_SetColor(INFOMSG_COLOR);
  GUI_SetBkColor(INFOMSG_BKCOLOR);
  GUI_DispStringInPrect(&msgRect,LABEL_CLICK_FOR_MORE);
  GUI_RestoreColorDefault();
}

void stopConfirm(void)
{
  printAbort();
  infoMenu.cur--;
}

void printInfoPopup(void)
{
  uint8_t hour = infoPrintSummary.time / 3600;
  uint8_t min = infoPrintSummary.time % 3600 / 60;
  uint8_t sec = infoPrintSummary.time % 60;
  char showInfo[150];
  char tempstr[30];

  sprintf(showInfo, (char*)textSelect(LABEL_PRINT_TIME), hour, min, sec);

  if (infoPrintSummary.length == 0 && infoPrintSummary.weight == 0 && infoPrintSummary.cost == 0)
  {
    strcat(showInfo, (char *)textSelect(LABEL_NO_FILAMENT_STATS));
  }
  else
  {
    if (infoPrintSummary.length > 0)
    {
      sprintf(tempstr, (char *)textSelect(LABEL_FILAMENT_LENGTH), infoPrintSummary.length);
      strcat(showInfo, tempstr);
    }
    if (infoPrintSummary.weight > 0)
    {
      sprintf(tempstr, (char *)textSelect(LABEL_FILAMENT_WEIGHT), infoPrintSummary.weight);
      strcat(showInfo, tempstr);
    }
    if (infoPrintSummary.cost > 0)
    {
      sprintf(tempstr, (char *)textSelect(LABEL_FILAMENT_COST), infoPrintSummary.cost);
      strcat(showInfo, tempstr);
    }
  }
  popupReminder(DIALOG_TYPE_INFO, (uint8_t *)infoPrintSummary.name, (uint8_t *)showInfo);
}

void menuPrinting(void)
{
  // 1 title, ITEM_PER_PAGE items (icon + label)
  MENUITEMS printingItems = {
    // title
    LABEL_BACKGROUND,
    // icon                          label
    {
      {ICON_BACKGROUND,              LABEL_BACKGROUND}, // these are the 8 printing status icons that occupy the space
      {ICON_BACKGROUND,              LABEL_BACKGROUND}, // of large icons 0 - 3
      {ICON_BACKGROUND,              LABEL_BACKGROUND},
      {ICON_BACKGROUND,              LABEL_BACKGROUND},
      {ICON_BACKGROUND,              LABEL_BACKGROUND},
      {ICON_BACKGROUND,              LABEL_BABYSTEP},
      {ICON_MORE,                    LABEL_MORE},
      {ICON_STOP,                    LABEL_STOP},
    }
  };

  // so we can track when speed changes happen and display them quickly
  uint16_t lastCurrent = spindleGetCurSpeed(currentTool);
  uint16_t lastTarget = spindleGetSetSpeed(currentTool);

  uint8_t   nowFan[MAX_FAN_COUNT] = {0};    // so state of fan can be checked for change
  uint8_t   oldProgress = 0;                //TG 8/21/21 added to fix V27
  uint8_t   nowVac = 0;                     // so state of vacuum can be checked for change
  uint16_t  curspeed[2] = {0};
  uint32_t  time = 0;
  //HEATER    nowHeat;    //TG 2/23/21 take out for CNC
  float curLayer = 0;
  bool lastPause = isPaused();
  bool lastPrinting = isPrinting();  //TG returns 1=printing, 0=idle
  //memset(&nowHeat, 0, sizeof(HEATER));  //TG 2/23/21 take out for CNC



  if (lastPrinting == true)
  {
    if (infoMachineSettings.long_filename_support == ENABLED && infoFile.source == BOARD_SD)
      printingItems.title.address = (uint8_t *) infoFile.Longfile[infoFile.fileIndex];
    else
      printingItems.title.address = getPrintName(infoFile.title);
    printingItems.items[KEY_ICON_4] = itemIsPause[lastPause];  //TG below line displays STL preview if it exists, otherwise BABYSTEP icon
    printingItems.items[KEY_ICON_5].icon = (infoFile.source < BOARD_SD && isPrintModelIcon()) ? ICON_PREVIEW : ICON_BABYSTEP;
  }
  else // returned to this menu after a print was done (ex: after a popup)
  {
    printingItems.title.address = (uint8_t *)infoPrintSummary.name;

    #ifdef TFT70_V3_0
      printingItems.items[KEY_ICON_5] = itemIsPrinting[1];  // MainScreen
    #else
      printingItems.items[KEY_ICON_4] = itemIsPrinting[1];  // MainScreen
      printingItems.items[KEY_ICON_5] = itemIsPrinting[0];  // BackGround
    #endif
      printingItems.items[KEY_ICON_6] = itemIsPrinting[0];  // BackGround
      printingItems.items[KEY_ICON_7] = itemIsPrinting[2];  // Back
  }

  menuDrawPage(&printingItems);
  printingDrawPage();
  if (lastPrinting == false)
    drawPrintInfo();

  while (infoMenu.menu[infoMenu.cur] == menuPrinting)
  {
    //Scroll_DispString(&titleScroll, LEFT); // Scroll display file name will take too many CPU cycles

    //check spindle speeds change  //TG 2/23/21 since reValueSpindle gets called in toggle() function, 
    //this isn't absolutely necessay, but it does allow quicker than 2 sec display of speed changes from toggle()
    if(spindleGetCurSpeed(currentTool) != lastCurrent || spindleGetSetSpeed(currentTool) != lastTarget)
    {
      lastCurrent = spindleGetCurSpeed(currentTool);
      lastTarget = spindleGetSetSpeed(currentTool);
      RAPID_SERIAL_LOOP();  //perform backend printing loop before drawing to avoid printer idling
      reValueSpindle(SPDL_ICON_POS);
    }

    //check Vacuum change  //TG 2/23/21
    if(nowVac != vacuumState)
    {
      RAPID_SERIAL_LOOP();   //perform backend printing loop before drawing to avoid printer idling
      reValueVacuum(VAC_ICON_POS);
    }

    //check Fan speed change  //TG 2/23/21 is fan needed?
    if (nowFan[currentFan] != fanGetCurSpeed(currentFan))
    {
      nowFan[currentFan] = fanGetCurSpeed(currentFan);
      RAPID_SERIAL_LOOP();  // perform backend printing loop before drawing to avoid printer idling
      reDrawFan(FAN_ICON_POS);
    }

    // check printing progress
    oldProgress = getPrintProgress();  // get old progress before "updatePrintProgress()"
    if (getPrintSize() != 0)
    {
      // check print time change
      if (time != getPrintTime() || updatePrintProgress())
      {
        time = getPrintTime();
        RAPID_SERIAL_LOOP();  // perform backend printing loop before drawing to avoid printer idling

        reDrawTime(TIM_ICON_POS);
        reDrawProgress(TIM_ICON_POS, oldProgress);
      }
    }
    else
    {
      if (getPrintProgress() != 100)
      {
        updatePrintProgress();
        reDrawTime(TIM_ICON_POS);
        reDrawProgress(TIM_ICON_POS, oldProgress);
      }
    }

    // Z_AXIS coordinate
    if (curLayer != ((infoFile.source >= BOARD_SD) ? coordinateGetAxisActual(Z_AXIS) : coordinateGetAxisTarget(Z_AXIS)))
    {
      curLayer = (infoFile.source >= BOARD_SD) ? coordinateGetAxisActual(Z_AXIS) : coordinateGetAxisTarget(Z_AXIS);
      RAPID_SERIAL_LOOP();  // perform backend printing loop before drawing to avoid printer idling
      reDrawLayer(Z_ICON_POS);
    }

    // check change in speed or flow
    if (curspeed[currentSpeedID] != speedGetCurPercent(currentSpeedID))
    {
      curspeed[currentSpeedID] = speedGetCurPercent(currentSpeedID);
      RAPID_SERIAL_LOOP();  //perform backend printing loop before drawing to avoid printer idling
      reDrawSpeed(SPD_ICON_POS);
    }

    // check if print is paused
    if (lastPause != isPaused())
    {
      lastPause = isPaused();
      printingItems.items[KEY_ICON_4] = itemIsPause[lastPause];
      menuDrawItem(&printingItems.items[KEY_ICON_4], KEY_ICON_4);
    }

    // check if print just started or just finished
    if (lastPrinting != isPrinting())
    {
      lastPrinting = isPrinting();
      return;  // It will restart this interface if directly return this function without modify the value of infoMenu
    }

    toggleInfo();

    KEY_VALUES key_num = menuKeyGetValue();
    switch (key_num)
    {
      case KEY_ICON_4:
        if (isPrinting())
          printPause(!isPaused(), false);
        #ifndef TFT70_V3_0
          else
          {
            clearInfoPrint();
            clearInfoFile();
            infoMenu.cur = 0;
          }
        #endif
        break;

      case KEY_ICON_5:
        #ifdef TFT70_V3_0
          if (isPrinting())
            infoMenu.menu[++infoMenu.cur] = menuBabystep;
          else
          {
            clearInfoPrint();
            clearInfoFile();
            infoMenu.cur = 0;
          }
        #else
          infoMenu.menu[++infoMenu.cur] = menuBabystep;
        #endif
        break;

      case KEY_ICON_6:
        infoMenu.menu[++infoMenu.cur] = menuMore;
        break;

      case KEY_ICON_7:
        if (isPrinting())
        {
          setDialogText(LABEL_WARNING, LABEL_STOP_PRINT, LABEL_CONFIRM, LABEL_CANCEL);
          showDialog(DIALOG_TYPE_ALERT, stopConfirm, NULL, NULL);
        }
        else
        {
          clearInfoPrint();
          infoMenu.cur--;
        }
        break;

      case KEY_INFOBOX:
        printInfoPopup();
        break;

      default:
        break;
    }

    loopProcess();
  }
}
