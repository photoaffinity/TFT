#include "language.h"
#include "includes.h"
#include "language_en.h"
#include "language_cn.h"
#include "language_ru.h"
#include "language_jp.h"
#include "language_de.h"
#include "language_am.h"


const char *const en_pack[LABEL_NUM]={
  EN_LANGUAGE,
  EN_HEAT,
  EN_MOVE,
  EN_HOME,
  EN_PRINT,
  EN_EXTRUDE,
  EN_FAN,
  EN_SETTINGS,
  EN_LEVELING,
  EN_INC,
  EN_DEC,
  EN_NOZZLE,
  EN_BED,
  EN_STOP,
  EN_BACK,
  EN_PAGE_UP,
  EN_PAGE_DOWN,
  EN_PAUSE,
  EN_RESUME,
  EN_LOAD,
  EN_UNLOAD,
  EN_SLOW_SPEED,
  EN_NORMAL_SPEED,
  EN_FAST_SPEED,
  EN_FAN_FULL_SPEED,
  EN_FAN_HALF_SPEED,
  EN_POWER_OFF,
  EN_TOUCHSCREEN_ADJUST,
  EN_SCREEN_INFO,
  EN_DISCONNECT,
  EN_BAUDRATE_115200,
  EN_BAUDRATE_250000,
  EN_DETECTIONS_OFF,
  EN_DETECTIONS_ON,
  EN_PERCENTAGE,
  EN_BABYSTEP,
  EN_PERCENTAGE_SPEED,
  EN_PERCENTAGE_FLOW,
  EN_VALUE_ZERO,
  EN_1_DEGREE,
  EN_5_DEGREE,
  EN_10_DEGREE,
  EN_X_INC,
  EN_Y_INC,
  EN_Z_INC,
  EN_X_DEC,
  EN_Y_DEC,
  EN_Z_DEC,
  EN_X_HOME,
  EN_Y_HOME,
  EN_Z_HOME,
  EN_001_MM,
  EN_01_MM,
  EN_1_MM,
  EN_5_MM,
  EN_10_MM,
  EN_1_PERCENT,
  EN_5_PERCENT,
  EN_10_PERCENT,

  EN_READY,
  EN_PRINTING,
  EN_BUSY,
  EN_UNCONNECTED,
  EN_DISCONNECT_INFO,
  EN_LOADING,
  EN_POWER_FAILED,
  EN_CONTINUE,
  EN_CANNEL,
  EN_ADJUST_TITLE,
  EN_ADJUST_INFO,
  EN_ADJUST_OK,
  EN_ADJUST_FAILED,
  EN_WARNING,
  EN_STOP_PRINT,
  EN_CONFIRM,
  EN_TFTSD,
  EN_READ_TFTSD_ERROR,
  EN_TFTSD_INSERTED,
  EN_TFTSD_REMOVED,
  EN_U_DISK,
  EN_READ_U_DISK_ERROR,
  EN_U_DISK_INSERTED,
  EN_U_DISK_REMOVED,
  EN_ONBOARDSD,
  EN_READ_ONBOARDSD_ERROR
};

const char *const cn_pack[LABEL_NUM]={
  CN_LANGUAGE,
  CN_HEAT,
  CN_MOVE,
  CN_HOME,
  CN_PRINT,
  CN_EXTRUDE,
  CN_FAN,
  CN_SETTINGS,
  CN_LEVELING,
  CN_INC,
  CN_DEC,
  CN_NOZZLE,
  CN_BED,
  CN_STOP,
  CN_BACK,
  CN_PAGE_UP,
  CN_PAGE_DOWN,
  CN_PAUSE,
  CN_RESUME,
  CN_LOAD,
  CN_UNLOAD,
  CN_SLOW_SPEED,
  CN_NORMAL_SPEED,
  CN_FAST_SPEED,
  CN_FAN_FULL_SPEED,
  CN_FAN_HALF_SPEED,
  CN_POWER_OFF,
  CN_TOUCHSCREEN_ADJUST,
  CN_SCREEN_INFO,
  CN_DISCONNECT,
  CN_BAUDRATE_115200,
  CN_BAUDRATE_250000,
  CN_DETECTIONS_OFF,
  CN_DETECTIONS_ON,
  CN_PERCENTAGE,
  CN_BABYSTEP,
  CN_PERCENTAGE_SPEED,
  CN_PERCENTAGE_FLOW,
  CN_VALUE_ZERO,
  CN_1_DEGREE,
  CN_5_DEGREE,
  CN_10_DEGREE,
  CN_X_INC,
  CN_Y_INC,
  CN_Z_INC,
  CN_X_DEC,
  CN_Y_DEC,
  CN_Z_DEC,
  CN_X_HOME,
  CN_Y_HOME,
  CN_Z_HOME,
  CN_001_MM,
  CN_01_MM,
  CN_1_MM,
  CN_5_MM,
  CN_10_MM,
  CN_1_PERCENT,
  CN_5_PERCENT,
  CN_10_PERCENT,

  CN_READY,
  CN_PRINTING,
  CN_BUSY,
  CN_UNCONNECTED,
  CN_DISCONNECT_INFO,
  CN_LOADING,
  CN_POWER_FAILED,
  CN_CONTINUE,
  CN_CANNEL,
  CN_ADJUST_TITLE,
  CN_ADJUST_INFO,
  CN_ADJUST_OK,
  CN_ADJUST_FAILED,
  CN_WARNING,
  CN_STOP_PRINT,
  CN_CONFIRM,
  CN_TFTSD,
  CN_READ_TFTSD_ERROR,
  CN_TFTSD_INSERTED,
  CN_TFTSD_REMOVED,
  CN_U_DISK,
  CN_READ_U_DISK_ERROR,
  CN_U_DISK_INSERTED,
  CN_U_DISK_REMOVED,
  CN_ONBOARDSD,
  CN_READ_ONBOARDSD_ERROR
};

const char *const ru_pack[LABEL_NUM]={
  RU_LANGUAGE,
  RU_HEAT,
  RU_MOVE,
  RU_HOME,
  RU_PRINT,
  RU_EXTRUDE,
  RU_FAN,
  RU_SETTINGS,
  RU_LEVELING,
  RU_INC,
  RU_DEC,
  RU_NOZZLE,
  RU_BED,
  RU_STOP,
  RU_BACK,
  RU_PAGE_UP,
  RU_PAGE_DOWN,
  RU_PAUSE,
  RU_RESUME,
  RU_LOAD,
  RU_UNLOAD,
  RU_SLOW_SPEED,
  RU_NORMAL_SPEED,
  RU_FAST_SPEED,
  RU_FAN_FULL_SPEED,
  RU_FAN_HALF_SPEED,
  RU_POWER_OFF,
  RU_TOUCHSCREEN_ADJUST,
  RU_SCREEN_INFO,
  RU_DISCONNECT,
  RU_BAUDRATE_115200,
  RU_BAUDRATE_250000,
  RU_DETECTIONS_OFF,
  RU_DETECTIONS_ON,
  RU_PERCENTAGE,
  RU_BABYSTEP,
  RU_PERCENTAGE_SPEED,
  RU_PERCENTAGE_FLOW,
  RU_VALUE_ZERO,
  RU_1_DEGREE,
  RU_5_DEGREE,
  RU_10_DEGREE,
  RU_X_INC,
  RU_Y_INC,
  RU_Z_INC,
  RU_X_DEC,
  RU_Y_DEC,
  RU_Z_DEC,
  RU_X_HOME,
  RU_Y_HOME,
  RU_Z_HOME,
  RU_001_MM,
  RU_01_MM,
  RU_1_MM,
  RU_5_MM,
  RU_10_MM,
  RU_1_PERCENT,
  RU_5_PERCENT,
  RU_10_PERCENT,

  RU_READY,
  RU_PRINTING,
  RU_BUSY,
  RU_UNCONNECTED,
  RU_DISCONNECT_INFO,
  RU_LOADING,
  RU_POWER_FAILED,
  RU_CONTINUE,
  RU_CANNEL,
  RU_ADJUST_TITLE,
  RU_ADJUST_INFO,
  RU_ADJUST_OK,
  RU_ADJUST_FAILED,
  RU_WARNING,
  RU_STOP_PRINT,
  RU_CONFIRM,
  RU_TFTSD,
  RU_READ_TFTSD_ERROR,
  RU_TFTSD_INSERTED,
  RU_TFTSD_REMOVED,
  RU_U_DISK,
  RU_READ_U_DISK_ERROR,
  RU_U_DISK_INSERTED,
  RU_U_DISK_REMOVED,
  RU_ONBOARDSD,
  RU_READ_ONBOARDSD_ERROR
};

const char *const jp_pack[LABEL_NUM]={
  JP_LANGUAGE,
  JP_HEAT,
  JP_MOVE,
  JP_HOME,
  JP_PRINT,
  JP_EXTRUDE,
  JP_FAN,
  JP_SETTINGS,
  JP_LEVELING,
  JP_INC,
  JP_DEC,
  JP_NOZZLE,
  JP_BED,
  JP_STOP,
  JP_BACK,
  JP_PAGE_UP,
  JP_PAGE_DOWN,
  JP_PAUSE,
  JP_RESUME,
  JP_LOAD,
  JP_UNLOAD,
  JP_SLOW_SPEED,
  JP_NORMAL_SPEED,
  JP_FAST_SPEED,
  JP_FAN_FULL_SPEED,
  JP_FAN_HALF_SPEED,
  JP_POWER_OFF,
  JP_TOUCHSCREEN_ADJUST,
  JP_SCREEN_INFO,
  JP_DISCONNECT,
  JP_BAUDRATE_115200,
  JP_BAUDRATE_250000,
  JP_DETECTIONS_OFF,
  JP_DETECTIONS_ON,
  JP_PERCENTAGE,
  JP_BABYSTEP,
  JP_PERCENTAGE_SPEED,
  JP_PERCENTAGE_FLOW,
  JP_VALUE_ZERO,
  JP_1_DEGREE,
  JP_5_DEGREE,
  JP_10_DEGREE,
  JP_X_INC,
  JP_Y_INC,
  JP_Z_INC,
  JP_X_DEC,
  JP_Y_DEC,
  JP_Z_DEC,
  JP_X_HOME,
  JP_Y_HOME,
  JP_Z_HOME,
  JP_001_MM,
  JP_01_MM,
  JP_1_MM,
  JP_5_MM,
  JP_10_MM,
  JP_1_PERCENT,
  JP_5_PERCENT,
  JP_10_PERCENT,

  JP_READY,
  JP_PRINTING,
  JP_BUSY,
  JP_UNCONNECTED,
  JP_DISCONNECT_INFO,
  JP_LOADING,
  JP_POWER_FAILED,
  JP_CONTINUE,
  JP_CANNEL,
  JP_ADJUST_TITLE,
  JP_ADJUST_INFO,
  JP_ADJUST_OK,
  JP_ADJUST_FAILED,
  JP_WARNING,
  JP_STOP_PRINT,
  JP_CONFIRM,
  JP_TFTSD,
  JP_READ_TFTSD_ERROR,
  JP_TFTSD_INSERTED,
  JP_TFTSD_REMOVED,
  JP_U_DISK,
  JP_READ_U_DISK_ERROR,
  JP_U_DISK_INSERTED,
  JP_U_DISK_REMOVED,
  JP_ONBOARDSD,
  JP_READ_ONBOARDSD_ERROR
};

const char *const am_pack[LABEL_NUM]={
  AM_LANGUAGE,
  AM_HEAT,
  AM_MOVE,
  AM_HOME,
  AM_PRINT,
  AM_EXTRUDE,
  AM_FAN,
  AM_SETTINGS,
  AM_LEVELING,
  AM_INC,
  AM_DEC,
  AM_NOZZLE,
  AM_BED,
  AM_STOP,
  AM_BACK,
  AM_PAGE_UP,
  AM_PAGE_DOWN,
  AM_PAUSE,
  AM_RESUME,
  AM_LOAD,
  AM_UNLOAD,
  AM_SLOW_SPEED,
  AM_NORMAL_SPEED,
  AM_FAST_SPEED,
  AM_FAN_FULL_SPEED,
  AM_FAN_HALF_SPEED,
  AM_POWER_OFF,
  AM_TOUCHSCREEN_ADJUST,
  AM_SCREEN_INFO,
  AM_DISCONNECT,
  AM_BAUDRATE_115200,
  AM_BAUDRATE_250000,
  AM_DETECTIONS_OFF,
  AM_DETECTIONS_ON,
  AM_PERCENTAGE,
  AM_BABYSTEP,
  AM_PERCENTAGE_SPEED,
  AM_PERCENTAGE_FLOW,
  AM_VALUE_ZERO,
  AM_1_DEGREE,
  AM_5_DEGREE,
  AM_10_DEGREE,
  AM_X_INC,
  AM_Y_INC,
  AM_Z_INC,
  AM_X_DEC,
  AM_Y_DEC,
  AM_Z_DEC,
  AM_X_HOME,
  AM_Y_HOME,
  AM_Z_HOME,
  AM_001_MM,
  AM_01_MM,
  AM_1_MM,
  AM_5_MM,
  AM_10_MM,
  AM_1_PERCENT,
  AM_5_PERCENT,
  AM_10_PERCENT,

  AM_READY,
  AM_PRINTING,
  AM_BUSY,
  AM_UNCONNECTED,
  AM_DISCONNECT_INFO,
  AM_LOADING,
  AM_POWER_FAILED,
  AM_CONTINUE,
  AM_CANNEL,
  AM_ADJUST_TITLE,
  AM_ADJUST_INFO,
  AM_ADJUST_OK,
  AM_ADJUST_FAILED,
  AM_WARNING,
  AM_STOP_PRINT,
  AM_CONFIRM,
  AM_TFTSD,
  AM_READ_TFTSD_ERROR,
  AM_TFTSD_INSERTED,
  AM_TFTSD_REMOVED,
  AM_U_DISK,
  AM_READ_U_DISK_ERROR,
  AM_U_DISK_INSERTED,
  AM_U_DISK_REMOVED,
  AM_ONBOARDSD,
  AM_READ_ONBOARDSD_ERROR
};

const char *const de_pack[LABEL_NUM]={
  DE_LANGUAGE,
  DE_HEAT,
  DE_MOVE,
  DE_HOME,
  DE_PRINT,
  DE_EXTRUDE,
  DE_FAN,
  DE_SETTINGS,
  DE_LEVELING,
  DE_INC,
  DE_DEC,
  DE_NOZZLE,
  DE_BED,
  DE_STOP,
  DE_BACK,
  DE_PAGE_UP,
  DE_PAGE_DOWN,
  DE_PAUSE,
  DE_RESUME,
  DE_LOAD,
  DE_UNLOAD,
  DE_SLOW_SPEED,
  DE_NORMAL_SPEED,
  DE_FAST_SPEED,
  DE_FAN_FULL_SPEED,
  DE_FAN_HALF_SPEED,
  DE_POWER_OFF,
  DE_TOUCHSCREDE_ADJUST,
  DE_SCREDE_INFO,
  DE_DISCONNECT,
  DE_BAUDRATE_115200,
  DE_BAUDRATE_250000,
  DE_DETECTIONS_OFF,
  DE_DETECTIONS_ON,
  DE_PERCENTAGE,
  DE_BABYSTEP,
  DE_PERCENTAGE_SPEED,
  DE_PERCENTAGE_FLOW,
  DE_VALUE_ZERO,
  DE_1_DEGREE,
  DE_5_DEGREE,
  DE_10_DEGREE,
  DE_X_INC,
  DE_Y_INC,
  DE_Z_INC,
  DE_X_DEC,
  DE_Y_DEC,
  DE_Z_DEC,
  DE_X_HOME,
  DE_Y_HOME,
  DE_Z_HOME,
  DE_001_MM,
  DE_01_MM,
  DE_1_MM,
  DE_5_MM,
  DE_10_MM,
  DE_1_PERCENT,
  DE_5_PERCENT,
  DE_10_PERCENT,

  DE_READY,
  DE_PRINTING,
  DE_BUSY,
  DE_UNCONNECTED,
  DE_DISCONNECT_INFO,
  DE_LOADING,
  DE_POWER_FAILED,
  DE_CONTINUE,
  DE_CANNEL,
  DE_ADJUST_TITLE,
  DE_ADJUST_INFO,
  DE_ADJUST_OK,
  DE_ADJUST_FAILED,
  DE_WARNING,
  DE_STOP_PRINT,
  DE_CONFIRM,
  DE_TFTSD,
  DE_READ_TFTSD_ERROR,
  DE_TFTSD_INSERTED,
  DE_TFTSD_REMOVED,
  DE_U_DISK,
  DE_READ_U_DISK_ERROR,
  DE_U_DISK_INSERTED,
  DE_U_DISK_REMOVED,
  DE_ONBOARDSD,
  DE_READ_ONBOARDSD_ERROR
};

bool isRussia(const u8 *const str)
{
  if(str[0]==0xA7)
  {
    if(str[1]>=0xA1&&str[1]<=0xF1)
    return true;
  }
  return false;
}

bool isArmenian(const u8 *const str)
{
  if(str[0]==0xA1)
  {
    if(str[1]>=0x40&&str[1]<=0x8B)
    return true;
  }
  return false;
}

u16 my_strlen(const u8 *const str)
{
  u16 i=0,len=0;

  while(str[i])
  {
    if(isRussia(str+i) || isArmenian(str+i))
    {
      i+=2;
    }
    else
    {
      i++;
    }
    len++;
  }
  return len;
}

u8 * textSelect(u8 sel)
{
  switch(infoSettings.language)
  {
    case ENGLISH:   return (u8 *)en_pack[sel];
    case CHINESE:   return (u8 *)cn_pack[sel];
//    case RUSSIAN:   return (u8 *)ru_pack[sel];
    case JAPANESE:  return (u8 *)jp_pack[sel];
    case GERMAN:    return (u8 *)de_pack[sel];
//    case ARMENIAN:  return (u8 *)am_pack[sel];
    default:        return NULL;					 
  }
}


