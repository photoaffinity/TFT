#ifndef _LANGUAGE_TC_H_
#define _LANGUAGE_TC_H_

    // config.ini Parameter Settings / Feature Settings
    #define STRING_STATUS_SCREEN          "Enable Status Screen"
    #define STRING_BAUDRATE               "串列傳輸速率"
    #define STRING_LANGUAGE               "正體中文"
    #define STRING_ROTATE_UI              "顯示方向"
    #define STRING_TERMINAL_ACK           "在G-code終端顯示溫度"
    #define STRING_PERSISTENT_INFO        "頂部溫度訊息"
    #define STRING_FILE_LIST_MODE         "文件預覽列表模式"
    #define STRING_ACK_NOTIFICATION       "ACK 弹窗类型"
    #define STRING_EMULATE_M600           "Emulate M600"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_MARLIN_FULLSCREEN      "全螢幕Marlin模式"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_MOVE_SPEED             "移動速度(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Save Load Leveling"
    #define STRING_FAN_SPEED_PERCENT      "Fan Speed As Percentage"
    #define STRING_XY_OFFSET_PROBING      "XY Offset Probing Support"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_ON                  "自動關機"
    #define STRING_FIL_RUNOUT             "耗材感應器"
    #define STRING_PL_RECOVERY_EN         "断电续打"
    #define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "按鈕聲音"
    #define STRING_TOAST_SOUND            "Toast 提示聲音"
    #define STRING_ALERT_SOUND            "彈窗和提示聲音"
    #define STRING_HEATER_SOUND           "Heater notification"
    #define STRING_KNOB_LED_COLOR         "旋鈕LED顏色"
    #define STRING_KNOB_LED_IDLE          "旋鈕LED自動睡眠"
    #define STRING_LCD_BRIGHTNESS         "螢幕亮度"
    #define STRING_LCD_IDLE_BRIGHTNESS    "睡眠狀態螢幕亮度"
    #define STRING_LCD_IDLE_DELAY         "螢幕進入睡眠時間"
    #define STRING_START_GCODE_ENABLED    "執行起始G-code"
    #define STRING_END_GCODE_ENABLED      "執行結尾G-code"
    #define STRING_CANCEL_GCODE_ENABLED   "中斷執行G-code"

    // Machine Parameter Settings
    #define STRING_STEPS_SETTING          "電機每毫米步數Steps/mm"
    #define STRING_MAXFEEDRATE            "最大移動速度"
    #define STRING_MAXACCELERATION        "最大加速度"
    #define STRING_ACCELERATION           "加速度"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_FWRETRACT              "FW Retraction"
    #define STRING_FWRECOVER              "FW Retraction Recover"
    #define STRING_RETRACT_AUTO           "FW自动回抽"
    #define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
    #define STRING_PROBE_OFFSET           "探針偏移"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_CURRENT_SETTING        "驅動晶片電流設定 (mA)"
    #define STRING_BUMP_SENSITIVITY       "堵料檢測靈敏度"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_PRINT_ACCELERATION     "列印加速度"
    #define STRING_RETRACT_ACCELERATION   "回抽加速度"
    #define STRING_TRAVEL_ACCELERATION    "空跑加速度"
    #define STRING_RETRACT_LENGTH         "FW回抽长度"
    #define STRING_RETRACT_SWAP_LENGTH    "换料时回抽的长度"
    #define STRING_RETRACT_FEEDRATE       "FW回抽速度"
    #define STRING_RETRACT_Z_LIFT         "回抽时Z轴抬升的高度"
    #define STRING_RECOVER_LENGTH         "额外挤出的长度"
    #define STRING_SWAP_RECOVER_LENGTH    "换料时额外挤出的长度"
    #define STRING_RECOVER_FEEDRATE       "FW挤出速度"
    #define STRING_SWAP_RECOVER_FEEDRATE  "换料时挤出的速度"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Save / Load
    #define STRING_SAVE                   "儲存設定"
    #define STRING_RESTORE                "恢復"
    #define STRING_RESET                  "重設"
    #define STRING_EEPROM_SAVE_INFO       "是否保存打印机设置到EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "是否从EEPROM加载设置?"
    #define STRING_EEPROM_RESET_INFO      "重置EEPROM到出厂设置?"
    #define STRING_SETTINGS_SAVE          "保存设置"
    #define STRING_SETTINGS_RESTORE       "保存设置"
    #define STRING_SETTINGS_RESET         "重置设置"
    #define STRING_SETTINGS_RESET_INFO    "所有設定都會恢復預設值，確定嗎?"
    #define STRING_SETTINGS_RESET_DONE    "重設成功，請重新開機"

    // Navigation Buttons
    #define STRING_PAGE_UP                "上一頁"
    #define STRING_PAGE_DOWN              "下一頁"
    #define STRING_UP                     "抬升"
    #define STRING_DOWN                   "降低"
    #define STRING_NEXT                   "下一個"
    #define STRING_BACK                   "返回"

    // Value Buttons
    #define STRING_INC                    "增加"
    #define STRING_DEC                    "減少"
    #define STRING_LOAD                   "進料"
    #define STRING_UNLOAD                 "退料"
    #define STRING_ON                     "開啟"
    #define STRING_OFF                    "關閉"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "自動"
    #define STRING_SLOW                   "慢速"
    #define STRING_NORMAL                 "常速"
    #define STRING_FAST                   "快速"
    #define STRING_ZERO                   "歸零"
    #define STRING_HALF                   "半速"
    #define STRING_FULL                   "全速"
    #define STRING_CUSTOM                 "自定義"
    #define STRING_CLEAR                  "Clear"
    #define STRING_DEFAULT                "默認"

    // Action Buttons
    #define STRING_START                  "開始"
    #define STRING_STOP                   "停止"
    #define STRING_PAUSE                  "暫停"
    #define STRING_RESUME                 "繼續"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "中斷連線"
    #define STRING_SHUT_DOWN              "關閉電源"
    #define STRING_FORCE_SHUT_DOWN        "強制關機"
    #define STRING_EMERGENCYSTOP          "立刻停止"
    #define STRING_PREHEAT                "預熱"
    #define STRING_PREHEAT_BOTH           "全部"
    #define STRING_COOLDOWN               "冷卻"

    // Dialog Buttons
    #define STRING_CONFIRM                "確定" //Confirm Sign
    #define STRING_CANCEL                 "取消" //Cancel Sign
    #define STRING_WARNING                "警告" //Exclamation Sign
    #define STRING_CONTINUE               "繼續"
    #define STRING_CONFIRMATION           "Are you sure?"

    // Process Status
    #define STRING_STATUS                 "狀態"
    #define STRING_READY                  "已準備好"
    #define STRING_BUSY                   "系統繁忙請稍等"
    #define STRING_LOADING                "讀取中"
    #define STRING_UNCONNECTED            "尚未連線到主機板"

    // Process Info
    #define STRING_INFO                   "提示" //Info Sign
    #define STRING_INVALID_VALUE          "沒有有效的條件!"
    #define STRING_TIMEOUT_REACHED        "已超時!"
    #define STRING_DISCONNECT_INFO        "電腦控制模式"
    #define STRING_SHUTTING_DOWN          "關機中"
    #define STRING_WAIT_TEMP_SHUT_DOWN    "噴頭降溫中，直到%d ℃時自動關機" // The length of the info line is 24 characters, so the "temperatureof" will automatically be divided into "temperature of..."
    #define STRING_POWER_FAILED           "要繼續列印嗎？" //Question Sign
    #define STRING_PROCESS_RUNNING        "正在運行,請稍後"
    #define STRING_PROCESS_COMPLETED      "處理已完成!"
    #define STRING_PROCESS_ABORTED        "處理已被中斷!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD卡"
    #define STRING_READ_TFTSD_ERROR       "SD卡讀取失敗"
    #define STRING_TFTSD_INSERTED         "偵測到SD卡"
    #define STRING_TFTSD_REMOVED          "SD卡已拔出"
    #define STRING_U_DISK                 "隨身碟"
    #define STRING_READ_U_DISK_ERROR      "隨身碟讀取失敗"
    #define STRING_U_DISK_INSERTED        "偵測到隨身碟"
    #define STRING_U_DISK_REMOVED         "隨身碟已拔出"
    #define STRING_ONBOARDSD              "主機板插槽的SD卡"
    #define STRING_READ_ONBOARDSD_ERROR   "主機板插槽的SD卡讀取失敗"
    #define STRING_FILAMENT_RUNOUT        "沒偵測到耗材"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "解鎖電機"
    #define STRING_XY_UNLOCK              "解锁XY"

    #define STRING_START_PRINT            "是否开始打印:\n %s?"
    #define STRING_STOP_PRINT             "要停止列印嗎？"
    #define STRING_IS_PAUSE               "列印時無法擠出耗材，要暫停列印嗎？"
    #define STRING_M0_PAUSE               "M0暫停"

    #define STRING_TEST                   "BLTouch檢測"
    #define STRING_DEPLOY                 "探針彈出"
    #define STRING_STOW                   "探針收回"
    #define STRING_REPEAT                 "精度測試"

    // Printer Tools
    #define STRING_NOZZLE                 "噴頭"
    #define STRING_BED                    "熱床"
    #define STRING_CHAMBER                "機殼"
    #define STRING_FAN                    "風扇"

    #define STRING_BLTOUCH                "BLTouch "
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5秒."
    #define STRING_10_SECONDS             "10秒."
    #define STRING_30_SECONDS             "30秒."
    #define STRING_60_SECONDS             "1分鐘"
    #define STRING_120_SECONDS            "2分鐘"
    #define STRING_300_SECONDS            "5分鐘"

    // Colors
    #define STRING_WHITE                  "白"
    #define STRING_BLACK                  "黑"
    #define STRING_BLUE                   "藍"
    #define STRING_RED                    "紅"
    #define STRING_GREEN                  "綠"
    #define STRING_CYAN                   "青"
    #define STRING_YELLOW                 "黃"
    #define STRING_BROWN                  "棕"
    #define STRING_GRAY                   "灰"
    #define STRING_ORANGE                 "橘"
    #define STRING_INDIGO                 "靛藍"
    #define STRING_VIOLET                 "藍紫"
    #define STRING_MAGENTA                "桃紅"
    #define STRING_PURPLE                 "紫"
    #define STRING_LIME                   "萊姆"
    #define STRING_DARKBLUE               "暗藍"
    #define STRING_DARKGREEN              "暗綠"
    #define STRING_DARKGRAY               "深灰"

    // Menus
    #define STRING_HEAT                   "加熱"
    #define STRING_MOVE                   "移動"
    #define STRING_HOME                   "回原點"
    #define STRING_PRINT                  "列印"
    #define STRING_EXTRUDE                "擠出"
    #define STRING_SETTINGS               "設定"
    #define STRING_SCREEN_SETTINGS        "螢幕設定"
    #define STRING_MACHINE_SETTINGS       "機器設定"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_FEATURE_SETTINGS       "功能設定"
    #define STRING_SOUND                  "聲音"
    #define STRING_RGB_SETTINGS           "燈光顏色"
    #define STRING_RGB_OFF                "關閉燈光"
    #define STRING_TERMINAL               "終端"
    #define STRING_LEVELING               "調平"
    #define STRING_POINT_1                "第一點"
    #define STRING_POINT_2                "第二點"
    #define STRING_POINT_3                "第三點"
    #define STRING_POINT_4                "第四點"
    #define STRING_POINT_5                "第五點"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "平臺調平完成!"
    #define STRING_BL_SMART_FILL          "部分點未探測，已被自動填充，需要手動保存!"
    #define STRING_BL_ENABLE              "BL:已開啟"
    #define STRING_BL_DISABLE             "BL:已關閉"
    #define STRING_ABL                    "自動調平"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
    #define STRING_ABL_SETTINGS           "Auto Bed Leveling"
    #define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Save to slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Load from slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Remember slot for next\nreboot? (Save EEPROM)"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVELCORNER            "Level corner"
    #define STRING_P_OFFSET               "P軸偏移"
    #define STRING_H_OFFSET               "H軸偏移"
    #define STRING_DISTANCE               "距離"
    #define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
    #define STRING_TOUCHSCREEN_ADJUST     "觸控校正"
    #define STRING_MORE                   "更多"
    #define STRING_SCREEN_INFO            "關於"
    #define STRING_BG_COLOR               "背景顏色"
    #define STRING_FONT_COLOR             "字體顏色"
    #define STRING_PERCENTAGE             "百分比"
    #define STRING_PERCENTAGE_SPEED       "速度百分比"
    #define STRING_PERCENTAGE_FLOW        "流量百分比"
    #define STRING_BABYSTEP               "Z軸微調"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "觸控校正"
    #define STRING_ADJUST_INFO            "點擊紅點"
    #define STRING_ADJUST_OK              "校正成功"
    #define STRING_ADJUST_FAILED          "校正失敗"
    #define STRING_UNIFIEDMOVE            "運動"
    #define STRING_UNIFIEDHEAT            "溫度"
    #define STRING_TOUCH_TO_EXIT          "觸控任意位置退出頁面"
    #define STRING_MAINMENU               "選單"
    #define STRING_PARAMETER_SETTING      "參數設定"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_LEVELING_EDGE_DISTANCE "手动调平边沿距离"
    #define STRING_TUNING                 "调整"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID自动整定"
    #define STRING_PID_START_INFO         "开始PID自动整定,需要几分钟来完成,是否继续?"
    #define STRING_PID_START_INFO_2       "PID 正在自动整定中!"
    #define STRING_PID_START_INFO_3       "不要操作触控屏直到整定完成!"
    #define STRING_TUNE_EXTRUDER          "Tune steps"
    #define STRING_TUNE_EXT_EXTRUDE_100   "挤出100mm"
    #define STRING_TUNE_EXT_TEMP          "Extruder tuning | Heat"
    #define STRING_TUNE_EXT_TEMPLOW       "Desired temperature too low!\nMinimum temperature: %d C"
    #define STRING_TUNE_EXT_DESIREDVAL    "Temperature is not yet at the desired value"
    #define STRING_TUNE_EXT_MARK120MM     "Mark 120 mm on your fillament\nPress '%s' when ready\nMeasure remaining length\nafter extruding"
    #define STRING_TUNE_EXT_HEATOFF       "Turn the heater off?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "New E-steps saved!\nDon't forget to\nsave it in EEPROM\nNew value: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Length remaining:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
    #define STRING_CONNECTION_SETTINGS    "连接"
    #define STRING_NOTIFICATIONS          "Notifications"
    #define STRING_MESH_EDITOR            "Mesh edit"
    #define STRING_MESH_TUNER             "Mesh tuner"
    #define STRING_CASE_LIGHT             "Case light"
    #define STRING_LOAD_STARTED           "Loading filament.\nPlease wait for the process\nto complete."  // translation needed
    #define STRING_UNLOAD_STARTED         "Unloading filament.\nPlease wait for the process\nto complete."  // translation needed
    #define STRING_HEATERS_ON             "Some heaters are still ON.\nDo you want to stop them?"  // translation needed
    #define STRING_PRINT_FINISHED         "   Print\n   finished"
    #define STRING_MAIN_SCREEN            "Main"
    #define STRING_PREVIOUS_PRINT_DATA    "Brief"
    #define STRING_PRINT_TIME             "Print Time: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nFilament length: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nFilament weight: %1.2fg"
    #define STRING_FILAMENT_COST          "\nFilament cost: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nFilament data not available."
    #define STRING_CLICK_FOR_MORE         "Click for summary"
    #define STRING_EXT_TEMPLOW            "Hotend temperature is below\nminimum temperature (%d℃)."
    #define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_MACROS                 "Macros"

#endif
