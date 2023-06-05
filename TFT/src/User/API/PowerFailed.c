#include "PowerFailed.h"
#include "includes.h"

#define BREAK_POINT_FILE "Printing.sys"

typedef struct
{
  float    axis[TOTAL_AXIS];
  uint32_t feedrate;
  uint16_t speed;
  uint16_t flow;
  uint16_t target[MAX_HEATER_COUNT];
  uint16_t fan[MAX_FAN_COUNT];
  uint8_t  tool;
  uint32_t offset;
  bool     relative;
  bool     relative_e;
  bool     pause;
} BREAK_POINT;

BREAK_POINT  infoBreakPoint;
char powerFailedFileName[256];
FIL fpPowerFailed;

static bool restore = false;  // print restore flag disabled by default
static bool create_ok = false;

void powerFailedSetRestore(bool allowed)
{
  restore = allowed;
}

bool powerFailedGetRestore(void)
{
  return restore;
}

void powerFailedSetDriverSource(void)
{
  sprintf(powerFailedFileName, "%s%s", getFS(), BREAK_POINT_FILE);
}

bool powerFailedInitData(void)
{
  memset(&infoBreakPoint, 0, sizeof(BREAK_POINT));

  if (!restore)  // if print restore flag is disabled, nothing more to do
    return true;

  // disable print restore flag (one shot flag) for the next print.
  // The flag must always be explicitly re-enabled (e.g by powerFailedSetRestore function)
  restore = false;

  // try to load PLR info from file in order to restore the print from the failed point

  FIL     fp;
  UINT    br;
  uint8_t model_icon;

  powerFailedSetDriverSource();

  if (f_open(&fp, powerFailedFileName, FA_OPEN_EXISTING | FA_READ) != FR_OK) return false;
  if (f_lseek(&fp, MAX_PATH_LEN)                                   != FR_OK) return false;
  if (f_read(&fp, &model_icon, 1, &br)                             != FR_OK) return false;
  if (f_read(&fp, &infoBreakPoint,  sizeof(infoBreakPoint), &br)   != FR_OK) return false;

  setPrintModelIcon(model_icon);

  mustStoreCacheCmd("%s\n", toolChange[infoBreakPoint.tool]);  // infoCacheCmd.queue[0]

  for (uint8_t i = MAX_HEATER_COUNT - 1; i >= MAX_HOTEND_COUNT; i--)  // Bed & Chamber infoCacheCmd.queue[1 - 2]
  {
    if (infoBreakPoint.target[i] != 0)
      mustStoreCacheCmd("%s S%d\n", heatWaitCmd[i], infoBreakPoint.target[i]);
  }
  for (int8_t i = infoSettings.hotend_count - 1; i >= 0; i--)  // Tool nozzle infoCacheCmd.queue[3 - 8]
  {
    if (infoBreakPoint.target[i] != 0)
      mustStoreCacheCmd("%s S%d\n", heatWaitCmd[i], infoBreakPoint.target[i]);
  }

  if (infoBreakPoint.feedrate != 0)
  {
    uint16_t z_raised = 0;

    if (infoSettings.btt_ups == 1)
      z_raised += infoSettings.plr_z_raise;

    if (infoBreakPoint.pause)
      z_raised += infoSettings.pause_z_raise;

    mustStoreCmd("G92 Z%.3f\n", infoBreakPoint.axis[Z_AXIS] + z_raised);
    mustStoreCmd("G0 Z%.3f\n", infoBreakPoint.axis[Z_AXIS] + infoSettings.plr_z_raise);
    if (infoSettings.plr_home)
    {
      mustStoreCmd("G28\n");
      mustStoreCmd("G0 Z%.3f\n", infoBreakPoint.axis[Z_AXIS] + infoSettings.plr_z_raise);
    }
    else
    {
      mustStoreCmd("G28 R0 XY\n");
    }

    mustStoreCacheCmd("M83\n");                                              // infoCacheCmd.queue[9]
    mustStoreCacheCmd("G1 E30 F300\n");                                      // infoCacheCmd.queue[10]
    mustStoreCacheCmd("G1 E-%.5f F4800\n", infoSettings.pause_retract_len);  // infoCacheCmd.queue[11]
    mustStoreCacheCmd("G0 X%.3f Y%.3f Z%.3f F3000\n",
                      infoBreakPoint.axis[X_AXIS],
                      infoBreakPoint.axis[Y_AXIS],
                      infoBreakPoint.axis[Z_AXIS]);                          // infoCacheCmd.queue[12]
    mustStoreCacheCmd("G1 E%.5f F4800\n", infoSettings.resume_purge_len);    // infoCacheCmd.queue[13]
    mustStoreCacheCmd("G92 E%.5f\n", infoBreakPoint.axis[E_AXIS]);           // infoCacheCmd.queue[14]
    mustStoreCacheCmd("G0 F%d\n", infoBreakPoint.feedrate);                  // infoCacheCmd.queue[15]

    // G90/91 sets the extruder also, so keep these two in this order
    //
    mustStoreCacheCmd(infoBreakPoint.relative == true ? "G91\n" : "G90\n");  // infoCacheCmd.queue[16]
    if (infoBreakPoint.relative_e == false) mustStoreCacheCmd("M82\n");      // infoCacheCmd.queue[17]

  }

  for (uint8_t i = 0; i < infoSettings.fan_count; i++)
  {
    if (infoBreakPoint.fan[i] != 0)
    {
      mustStoreCmd(fanCmd[i], infoBreakPoint.fan[i]);
    }
  }

  // end of cache
  // The length of the gcode stored in the cache should be less than max length (=20)
  // otherwise it will cause "Busy processing, please wait..." and TFT freeze.

  f_close(&fp);
  return true;
}

bool powerFailedExist(void)
{
  FIL fp;
  UINT br;

  powerFailedSetDriverSource();

  if (f_open(&fp, powerFailedFileName, FA_OPEN_EXISTING | FA_READ) != FR_OK) return false;
  if (f_read(&fp, infoFile.path, MAX_PATH_LEN, &br)                != FR_OK) return false;
  if (f_close(&fp)                                                 != FR_OK) return false;

  create_ok = true;
  return true;
}

void powerFailedCreate(char *path)
{
  UINT br;

  powerFailedSetDriverSource();

  create_ok = false;
  if (!infoSettings.plr) return;                    // if PLR is disabled
  if (infoFile.source >= FS_ONBOARD_MEDIA) return;  // onboard media not supported now

  if (f_open(&fpPowerFailed, powerFailedFileName, FA_OPEN_ALWAYS | FA_WRITE) != FR_OK) return;

  f_write(&fpPowerFailed, path, MAX_PATH_LEN, &br);
  uint8_t model_icon = isPrintModelIcon();
  f_write(&fpPowerFailed, &model_icon, 1, &br);
  f_write(&fpPowerFailed, &infoBreakPoint, sizeof(BREAK_POINT), &br);
  f_sync(&fpPowerFailed);

  create_ok = true;
}

void powerFailedCache(uint32_t offset)
{
  UINT br;

  if (create_ok == false) return;
  if (infoBreakPoint.axis[Z_AXIS] == coordinateGetAxisTarget(Z_AXIS)) return;  // Z axis not changed
  if (isNotEmptyCmdQueue()) return;
  if (!isPaused())
  { // not paused, update printing progress status.
    infoBreakPoint.offset = offset;
    for (AXIS i = X_AXIS; i < TOTAL_AXIS; i++)
    {
      infoBreakPoint.axis[i] = coordinateGetAxisTarget(i);
    }
    infoBreakPoint.feedrate = coordinateGetFeedRate();
    infoBreakPoint.speed = speedGetCurPercent(0);  // Move speed percent
    infoBreakPoint.flow = speedGetCurPercent(1);   // Flow percent

    for (uint8_t i = 0; i < infoSettings.hotend_count; i++)  // Tool nozzle
    {
      infoBreakPoint.target[i] = heatGetTargetTemp(i);
    }
    for (uint8_t i = MAX_HOTEND_COUNT; i < MAX_HEATER_COUNT; i++)  // Bed & Chamber
    {
      infoBreakPoint.target[i] = heatGetTargetTemp(i);
    }
    infoBreakPoint.tool = heatGetToolIndex();

    for (uint8_t i = 0; i < infoSettings.fan_count; i++)
    {
      infoBreakPoint.fan[i] = fanGetCurSpeed(i);
    }
    infoBreakPoint.relative = coorGetRelative();
    infoBreakPoint.relative_e = eGetRelative();
  }
  else if (infoBreakPoint.pause) return;  // paused and the pause state has been saved

  infoBreakPoint.pause = isPaused();

  f_lseek(&fpPowerFailed, MAX_PATH_LEN + 1);  // infoFile.path + infoPrinting.model_icon
  f_write(&fpPowerFailed, &infoBreakPoint, sizeof(BREAK_POINT), &br);
  f_sync(&fpPowerFailed);
}

void powerFailedClose(void)
{
  if (create_ok == false) return;

  f_close(&fpPowerFailed);
}

void powerFailedDelete(void)
{
  if (create_ok == false) return;

  f_unlink(powerFailedFileName);
}

bool powerFailedlSeek(FIL *fp)
{
  if (f_lseek(fp, infoBreakPoint.offset) != FR_OK) return false;

  return true;
}
