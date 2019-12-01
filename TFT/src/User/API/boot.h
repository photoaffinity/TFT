#ifndef _BOOT_H_
#define _BOOT_H_

#include "variants.h"
#include "stdbool.h"

#define W25QXX_SECTOR_SIZE (0x1000) // 4096-4K

//address in spiflash W25Qxx
#define LOGO_ADDR               0x0
#define ICON_ADDR(num)          ((num)*0x5000+0x4B000)

//
#define WORD_UNICODE            0x280000 // unicode (+0x480000 4.5M)
#define BYTE_ASCII_ADDR         0x700000 // ascii (+0x1000 4K)
//#define BYTE_RESERVE_ADDR      0x710000


#define BMP		(1<<1)
#define FONT	(1<<2)

#define BMP_ROOT_DIR "0:"ROOT_DIR"/bmp"
#define FONT_ROOT_DIR "0:"ROOT_DIR"/font"
#define TFT_RESET_FILE "0:reset.txt"

enum
{
  ICON_BACKGROUND = -1,
  ICON_HEAT = 0,
  ICON_MOVE,
  ICON_HOME,
  ICON_PRINT,
  ICON_EXTRUDE,
  ICON_FAN,
  ICON_SETTINGS,
  ICON_LEVELING,  
  ICON_INC,
  ICON_DEC,
  ICON_NOZZLE,
  ICON_BED,
  ICON_1_DEGREE,
  ICON_5_DEGREE,
  ICON_10_DEGREE,
  ICON_STOP,
  ICON_BACK,
  ICON_X_INC,
  ICON_Y_INC,
  ICON_Z_INC,
  ICON_01_MM,
  ICON_1_MM,
  ICON_10_MM,
  ICON_X_DEC,
  ICON_Y_DEC,
  ICON_Z_DEC,  
  ICON_X_HOME,
  ICON_Y_HOME,
  ICON_Z_HOME,
  ICON_FOLDER,
  ICON_FILE,
  ICON_PAGE_UP,
  ICON_PAGE_DOWN,
  ICON_PAUSE,
  ICON_RESUME,  
  ICON_LOAD,
  ICON_UNLOAD,
  ICON_SLOW_SPEED,
  ICON_NORMAL_SPEED,
  ICON_FAST_SPEED,
  ICON_E_1_MM,
  ICON_E_5_MM,
  ICON_E_10_MM,  
  ICON_FAN_FULL_SPEED,
  ICON_FAN_HALF_SPEED,
  ICON_ROTATE_UI,
  ICON_LANGUAGE,
  ICON_TOUCHSCREEN_ADJUST,
  ICON_MORE,
  ICON_SCREEN_INFO,
  ICON_BKCOLOR,
  ICON_FONTCOLOR,
  ICON_DISCONNECT,
  ICON_BAUDRATE,  
  ICON_PERCENTAGE,
  ICON_BABYSTEP,
  ICON_001_MM,
  ICON_BSD_SOURCE,
  ICON_SD_SOURCE,
  ICON_U_DISK,
  ICON_RUNOUT,  
  ICON_POINT_1,
  ICON_POINT_2,
  ICON_POINT_3,
  ICON_POINT_4,
  ICON_MARLIN,
  ICON_BIGTREE,
  ICON_GCODE,
  ICON_BLTOUCH,
  ICON_BLTOUCH_DEPLOY,
  ICON_BLTOUCH_STOW,
  ICON_BLTOUCH_TEST,
  ICON_BLTOUCH_REPEAT,
  ICON_SCREEN_SETTINGS,
  ICON_MACHINE_SETTINGS,
  ICON_FEATURE_SETTINGS,
  ICON_PROBE_OFFSET,
  ICON_EEPROM_SAVE,
  ICON_SILENT_ON,
  ICON_SHUT_DOWN,
  ICON_RGB_SETTINGS,
  ICON_RGB_RED,
  ICON_RGB_GREEN,
  ICON_RGB_BLUE,
  ICON_RGB_WHITE,
  ICON_RGB_OFF,
  ICON_PREHEAT_BOTH,
  ICON_PREHEAT_PLA,
  ICON_PREHEAT_PETG,
  ICON_PREHEAT_ABS,
  ICON_POWER_SUPPLY,
  ICON_CUSTOM,
  ICON_CUSTOM_0,
  ICON_CUSTOM_1,
  ICON_CUSTOM_2,
  ICON_CUSTOM_3,
  ICON_CUSTOM_4,
  ICON_CUSTOM_5,
  ICON_CUSTOM_6,
  ICON_HOME_MOVE,
  ICON_HEAT_FAN,
  ICON_MANUAL_LEVEL,
  ICON_COOLDOWN,
  ICON_SILENT_OFF,
  ICON_STATUSNOZZLE,
  ICON_STATUSBED,
  ICON_STATUSFAN,
  ICON_MAINMENU,
  ICON_STATUS_SPEED,
  ICON_STATUS_FLOW,
  ICON_INFOBOX_PART1,
  ICON_INFOBOX_PART2,
  
//  ICON_RESERVE
// Preview should be in the last place
  ICON_PREVIEW,
};

typedef union
{
	u16 color;
	struct{
	u16  b:5;
	u16  g:6;
	u16  r:5;
 }RGB;
}GUI_COLOR;

void scanUpdates(void);
bool bmpDecode(char *bmp, u32 addr);

#endif 
