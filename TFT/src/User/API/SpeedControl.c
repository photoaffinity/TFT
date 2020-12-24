#include "SpeedControl.h"
#include "includes.h"

#define NEXT_SPEED_WAIT 500  // 1 second is 1000

const char *const speedCmd[SPEED_NUM] = {"M220", "M221"};

static uint16_t setPercent[SPEED_NUM]     = {100, 100};  //Speed  Flow
static uint16_t lastSetPercent[SPEED_NUM] = {100, 100};  //Speed  Flow
static uint16_t curPercent[SPEED_NUM]  = {100, 100};  //Speed  Flow

static bool sendSpeed_waiting[SPEED_NUM];
static bool speedQueryWait = false;

static bool speedQueryWait = false;
static uint32_t nextSpeedTime = 0;

void speedSetCurPercent(uint8_t tool, uint16_t per)
{
  curPercent[tool] = per;
}

uint16_t speedGetCurPercent(uint8_t tool)
{
  return curPercent[tool];
}

void speedSetPercent(uint8_t tool, uint16_t per)
{
  setPercent[tool] = NOBEYOND(SPEED_MIN, per, SPEED_MAX);
}

uint16_t speedGetSetPercent(uint8_t tool)
{
  return setPercent[tool];
}

void loopSpeed(void)
{
  for (uint8_t i = 0; i < SPEED_NUM; i++)
  {
    if ((lastSetPercent[i] != setPercent[i]) && (OS_GetTimeMs() > nextSpeedTime))
    {
      if (sendSpeed_waiting[i] == false)
      {
        sendSpeed_waiting[i] = storeCmd("%s S%d D%d\n", speedCmd[i], setPercent[i], heatGetCurrentTool());
      }
      if (sendSpeed_waiting[i] == true)
        curPercent[i] = setPercent[i];
      nextSpeedTime = OS_GetTimeMs() + NEXT_SPEED_WAIT; // avoid rapid fire, clogging the queue
    }
  }
}

void speedQuerySetWait(bool wait)
{
  speedQueryWait = wait;
}

void speedQuery(void)
{
  if (infoHost.connected && !infoHost.wait && !speedQueryWait)
  {
    speedQueryWait = storeCmd("M220\nM221\n");
  }
}
