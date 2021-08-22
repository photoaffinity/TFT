#include "Leveling.h"
#include "includes.h"

const MENUITEMS manualLevelingItems = {
  // title
  LABEL_LEVELING,
  // icon                          label
  {
    {ICON_POINT_4,                 LABEL_POINT_4},
    {ICON_POINT_3,                 LABEL_POINT_3},
    {ICON_LEVEL_EDGE_DISTANCE,     LABEL_DISTANCE},
    {ICON_DISABLE_STEPPERS,        LABEL_XY_UNLOCK},
    {ICON_POINT_1,                 LABEL_POINT_1},
    {ICON_POINT_2,                 LABEL_POINT_2},
    {ICON_POINT_5,                 LABEL_POINT_5},
    {ICON_BACK,                    LABEL_BACK},
  }
};

void levelingGetPoints(LEVELING_POINTS points)
{
  int16_t x_left_point = infoSettings.machine_size_min[X_AXIS] + infoSettings.level_edge,
          x_right_point = infoSettings.machine_size_max[X_AXIS] - infoSettings.level_edge,
          y_lower_point = infoSettings.machine_size_min[Y_AXIS] + infoSettings.level_edge,
          y_upper_point = infoSettings.machine_size_max[Y_AXIS] - infoSettings.level_edge;

  if (infoSettings.invert_axis[X_AXIS])
  {
    int16_t temp = x_left_point;  // Swap left and right
    x_left_point = x_right_point;
    x_right_point = temp;
  }

  // The y-axis of different printer (move hotbed or move nozzle) move in different directions
  // So y-axis leveling invert can't follow up invert_axis[Y_AXIS]
  // We separate a single variable to deal with the y-axis leveling movement direction
  if (infoSettings.leveling_invert_y_axis)
  {
    int16_t temp = y_lower_point;  // Swap lower and upper
    y_lower_point = y_upper_point;
    y_upper_point = temp;
  }

  points[LEVEL_BOTTOM_LEFT][0] = x_left_point;
  points[LEVEL_BOTTOM_LEFT][1] = y_lower_point;
  points[LEVEL_BOTTOM_RIGHT][0] = x_right_point;
  points[LEVEL_BOTTOM_RIGHT][1] = y_lower_point;
  points[LEVEL_TOP_RIGHT][0] = x_right_point;
  points[LEVEL_TOP_RIGHT][1] = y_upper_point;
  points[LEVEL_TOP_LEFT][0] = x_left_point;
  points[LEVEL_TOP_LEFT][1] = y_upper_point;
  points[LEVEL_CENTER][0] = (x_left_point + x_right_point) / 2;
  points[LEVEL_CENTER][1] = (y_lower_point + y_upper_point) / 2;
}

void levelingMoveToPoint(LEVELING_POINT point)
{
  LEVELING_POINTS levelPoints;

  levelingGetPoints(levelPoints);

  if (coordinateIsKnown() == false)
    storeCmd("G28\n");

  storeCmd("G0 Z%.3f F%d\n", infoSettings.level_z_raise, infoSettings.level_feedrate[FEEDRATE_Z]);
  storeCmd("G0 X%d Y%d F%d\n", levelPoints[point][0], levelPoints[point][1], infoSettings.level_feedrate[FEEDRATE_XY]);
  storeCmd("G0 Z%.3f F%d\n", infoSettings.level_z_pos, infoSettings.level_feedrate[FEEDRATE_Z]);
}

void menuManualLeveling(void)
{
  KEY_VALUES key_num = KEY_IDLE;

  menuDrawPage(&manualLevelingItems);

  while (infoMenu.menu[infoMenu.cur] == menuManualLeveling)
  {
    key_num = menuKeyGetValue();
    switch (key_num)
    {
      case KEY_ICON_0:
        levelingMoveToPoint(LEVEL_TOP_LEFT);
        break;

      case KEY_ICON_1:
        levelingMoveToPoint(LEVEL_TOP_RIGHT);
        break;

      case KEY_ICON_2:
      {
        infoSettings.level_edge = editIntValue(LEVELING_EDGE_DISTANCE_MIN, LEVELING_EDGE_DISTANCE_MAX, LEVELING_EDGE_DISTANCE_DEFAULT, infoSettings.level_edge);

        menuDrawPage(&manualLevelingItems);
        break;
      }

      case KEY_ICON_3:
        storeCmd("M84 X Y E\n");
        break;

      case KEY_ICON_4:
        levelingMoveToPoint(LEVEL_BOTTOM_LEFT);
        break;

      case KEY_ICON_5:
        levelingMoveToPoint(LEVEL_BOTTOM_RIGHT);
        break;

      case KEY_ICON_6:
        levelingMoveToPoint(LEVEL_CENTER);
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
