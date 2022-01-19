//TG MODIFIED BY T.GIOIOSA
#include "UnifiedMove.h"
#include "includes.h"

void menuUnifiedMove(void)
{
  MENUITEMS UnifiedMoveItems = {
    // title
    LABEL_UNIFIEDMOVE,
    // icon                          label
    {
      {ICON_HOME,                    LABEL_HOME},
      {ICON_MOVE,                    LABEL_MOVE},
      //{ICON_EXTRUDE,                 LABEL_EXTRUDE},  //TG 2/10/21 was EXTRUDE, removed for CNC
      {ICON_REMOVED,				 LABEL_REMOVED},
	  {ICON_DISABLE_STEPPERS,        LABEL_DISABLE_STEPPERS},
      {ICON_BABYSTEP,                LABEL_BABYSTEP},
      {ICON_MANUAL_LEVEL,            LABEL_LEVELING},
      {ICON_BACKGROUND,              LABEL_BACKGROUND},
      {ICON_BACK,                    LABEL_BACK},
    }
  };

  KEY_VALUES key_num = KEY_IDLE;

  if (infoMachineSettings.leveling != BL_DISABLED)
  {
    UnifiedMoveItems.items[6].icon = ICON_LEVELING;
    UnifiedMoveItems.items[6].label.index = LABEL_BED_LEVELING;
  }

  menuDrawPage(&UnifiedMoveItems);

  while (infoMenu.menu[infoMenu.cur] == menuUnifiedMove)
  {
    key_num = menuKeyGetValue();
    switch (key_num)
    {
      case KEY_ICON_0:
        infoMenu.menu[++infoMenu.cur] = menuHome;
        break;

      case KEY_ICON_1:
        infoMenu.menu[++infoMenu.cur] = menuMove;
        break;

      case KEY_ICON_2:
        //infoMenu.menu[++infoMenu.cur] = menuExtrude; //TG removed for CNC
        break;

      case KEY_ICON_3:
        storeCmd("M84\n");
        break;

      case KEY_ICON_4:
        infoMenu.menu[++infoMenu.cur] = menuBabystep;
        break;

      case KEY_ICON_5:
        infoMenu.menu[++infoMenu.cur] = menuManualLeveling;
        break;

      case KEY_ICON_6:
        if (infoMachineSettings.leveling != BL_DISABLED)
          infoMenu.menu[++infoMenu.cur] = menuBedLeveling;
        break;

      case KEY_ICON_7:
        infoMenu.cur--;
        break;

      default:
        break;
    }

    loopProcess();
  }
}
