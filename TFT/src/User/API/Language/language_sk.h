#ifndef _LANGUAGE_SK_H_
#define _LANGUAGE_SK_H_

    // config.ini Parameter Settings / Feature Settings
    #define STRING_STATUS_SCREEN          "Enable Status Screen"
    #define STRING_BAUDRATE               "BaudRate"
    #define STRING_LANGUAGE               "Slovensky"
    #define STRING_ROTATE_UI              "Otočiť"
    #define STRING_TERMINAL_ACK           "Show ACK in Terminal"
    #define STRING_PERSISTENT_INFO        "Trvalé info o stave"
    #define STRING_FILE_LIST_MODE         "Zobraziť súbory ako zoznam"
    #define STRING_ACK_NOTIFICATION       "ACK notification style"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_FULLSCREEN      "Marlin mode in fullscreen"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_MOVE_SPEED             "Rýchlosť pohybu XYZ"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Save Load Leveling"
    #define STRING_FAN_SPEED_PERCENT      "Fan Speed As Percentage"
    #define STRING_XY_OFFSET_PROBING      "XY Offset Probing Support"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_ON                  "Auto vyp."
    #define STRING_FIL_RUNOUT             "Filament senzor"
    #define STRING_PL_RECOVERY_EN         "Power loss recovery"
    #define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "Touch sounds"
    #define STRING_TOAST_SOUND            "Toast Notifications"
    #define STRING_ALERT_SOUND            "Popups and Alerts"
    #define STRING_HEATER_SOUND           "Heater notification"
    #define STRING_KNOB_LED_COLOR         "LED otočného tlačidla"
    #define STRING_KNOB_LED_IDLE          "Rotary Knob LED idle"
    #define STRING_LCD_BRIGHTNESS         "Jas LCD"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Zníženie jasu LCD"
    #define STRING_LCD_IDLE_DELAY         "Zníženie jasu LCD po"
    #define STRING_START_GCODE_ENABLED    "Začiatočný Gcode"
    #define STRING_END_GCODE_ENABLED      "Koncový Gcode"
    #define STRING_CANCEL_GCODE_ENABLED   "Cancel Gcode"

    // Machine Parameter Settings
    #define STRING_STEPS_SETTING          "Počet krokov na MM"
    #define STRING_MAXFEEDRATE            "Max Feed Rate"
    #define STRING_MAXACCELERATION        "Maximálna akcelerácia"
    #define STRING_ACCELERATION           "Akcelerácia"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_FWRETRACT              "FW Retraction"
    #define STRING_FWRECOVER              "FW Retraction Recover"
    #define STRING_RETRACT_AUTO           "Auto Firmware Retract"
    #define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
    #define STRING_PROBE_OFFSET           "Probe Offset"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_CURRENT_SETTING        "Prúd ovládača (mA)"
    #define STRING_BUMP_SENSITIVITY       "TMC bump citlivosť"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_PRINT_ACCELERATION     "Akcelerácia pri tlači"
    #define STRING_RETRACT_ACCELERATION   "Akcelerácia retrakcie"
    #define STRING_TRAVEL_ACCELERATION    "Akcelerácia presunu"
    #define STRING_RETRACT_LENGTH         "Retract length"
    #define STRING_RETRACT_SWAP_LENGTH    "Retract swap length"
    #define STRING_RETRACT_FEEDRATE       "Retract feedrate"
    #define STRING_RETRACT_Z_LIFT         "Z lift on retraction"
    #define STRING_RECOVER_LENGTH         "Extra recover length"
    #define STRING_SWAP_RECOVER_LENGTH    "Extra recover swap length"
    #define STRING_RECOVER_FEEDRATE       "Recover feedrate"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Swap recover feedrate"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Save / Load
    #define STRING_SAVE                   "Uložiť"
    #define STRING_RESTORE                "Restore"
    #define STRING_RESET                  "Reset"
    #define STRING_EEPROM_SAVE_INFO       "Save printer settings\nto EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Reload settings from\nEEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Reset EEPROM to stock printer settings?"
    #define STRING_SETTINGS_SAVE          "Save settings"
    #define STRING_SETTINGS_RESTORE       "Restore settings"
    #define STRING_SETTINGS_RESET         "Reset default settings"
    #define STRING_SETTINGS_RESET_INFO    "Resetovať všetky nastavenia."
    #define STRING_SETTINGS_RESET_DONE    "Reset všetkých nastavení\nvykonaný. Pre správne\nfungovanie, prosím,\nreštartovať zariadenie."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Ďalej"
    #define STRING_PAGE_DOWN              "Naspäť"
    #define STRING_UP                     "Up"
    #define STRING_DOWN                   "Down"
    #define STRING_NEXT                   "Next"
    #define STRING_BACK                   "Naspäť"

    // Value Buttons
    #define STRING_INC                    "Pridať"
    #define STRING_DEC                    "Ubrať"
    #define STRING_LOAD                   "Zaviesť"
    #define STRING_UNLOAD                 "Vysunúť"
    #define STRING_ON                     "ZAP"
    #define STRING_OFF                    "VYP"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Pomaly"
    #define STRING_NORMAL                 "Normálne"
    #define STRING_FAST                   "Rýchlo"
    #define STRING_ZERO                   "Vypnúť"
    #define STRING_HALF                   "Polovičná"
    #define STRING_FULL                   "Naplno"
    #define STRING_CUSTOM                 "Vlastné"
    #define STRING_CLEAR                  "Clear"
    #define STRING_DEFAULT                "Default"

    // Action Buttons
    #define STRING_START                  "Start"
    #define STRING_STOP                   "Stop"
    #define STRING_PAUSE                  "Pauza"
    #define STRING_RESUME                 "Pokračovať"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Odpojiť"
    #define STRING_SHUT_DOWN              "Vypnúť"
    #define STRING_FORCE_SHUT_DOWN        "Vynútené vypnutie"
    #define STRING_EMERGENCYSTOP          "STOP"
    #define STRING_PREHEAT                "Nahriať"
    #define STRING_PREHEAT_BOTH           "Tryska/Podložka"
    #define STRING_COOLDOWN               "Ochladiť"

    // Dialog Buttons
    #define STRING_CONFIRM                "Potvrdiť"
    #define STRING_CANCEL                 "Zrušiť"
    #define STRING_WARNING                "Varovanie"
    #define STRING_CONTINUE               "Pokračovať"
    #define STRING_CONFIRMATION           "Are you sure?"

    // Process Status
    #define STRING_STATUS                 "Status"
    #define STRING_READY                  "Pripravená"
    #define STRING_BUSY                   "Počkajte prosím..."
    #define STRING_LOADING                "Načítavam..."
    #define STRING_UNCONNECTED            "Tlačiareň odpojená!"

    // Process Info
    #define STRING_INFO                   "Info"
    #define STRING_INVALID_VALUE          "Invalid value(s)"
    #define STRING_TIMEOUT_REACHED        "Timeout reached!"
    #define STRING_DISCONNECT_INFO        "Teraz môžete tlačiareň ovládať z počítača!"
    #define STRING_SHUTTING_DOWN          "Vypínanie..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Počkať na teplotu\ntrysky menej ako %d℃" // Počkať na teplotu hotendu menej ako 50℃
    #define STRING_POWER_FAILED           "Pokračovať v tlači?"
    #define STRING_PROCESS_RUNNING        "Process already running!"
    #define STRING_PROCESS_COMPLETED      "Process completed!"
    #define STRING_PROCESS_ABORTED        "Process aborted!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "TFT SD"
    #define STRING_READ_TFTSD_ERROR       "Chyba pri načítaní SD karty!"
    #define STRING_TFTSD_INSERTED         "SD karta vložená!"
    #define STRING_TFTSD_REMOVED          "SD karta odstránená!"
    #define STRING_U_DISK                 "USB kľúč"
    #define STRING_READ_U_DISK_ERROR      "Chyba pri načítaní USB kľúča!"
    #define STRING_U_DISK_INSERTED        "USB kľúč vložený!"
    #define STRING_U_DISK_REMOVED         "USB disk odstránený!"
    #define STRING_ONBOARDSD              "SD karta na doske"
    #define STRING_READ_ONBOARDSD_ERROR   "Chyba pri načítaní SD karty na doske!"
    #define STRING_FILAMENT_RUNOUT        "Chýba filament!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Disarm All"
    #define STRING_XY_UNLOCK              "Odomknite XY"

    #define STRING_START_PRINT            "Start Printing:\n %s?"
    #define STRING_STOP_PRINT             "Zastaviť tlač?"
    #define STRING_IS_PAUSE               "Nemožno extrudovať\npočas tlače,\npozastaviť tlač?"
    #define STRING_M0_PAUSE               "Pauza príkazom M0"

    #define STRING_TEST                   "Test"
    #define STRING_DEPLOY                 "Vystrčiť"
    #define STRING_STOW                   "Stiahnuť"
    #define STRING_REPEAT                 "Opakovať"

    // Printer Tools
    #define STRING_NOZZLE                 "Tryska"
    #define STRING_BED                    "Podložka"
    #define STRING_CHAMBER                "Chamber"
    #define STRING_FAN                    "Ofuk"

    #define STRING_BLTOUCH                "BLTouch"
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

    #define STRING_5_SECONDS              "5 sek."
    #define STRING_10_SECONDS             "10 sek."
    #define STRING_30_SECONDS             "30 Sec."
    #define STRING_60_SECONDS             "1 Min."
    #define STRING_120_SECONDS            "2 Min."
    #define STRING_300_SECONDS            "5 Min."

    // Colors
    #define STRING_WHITE                  "Biela"
    #define STRING_BLACK                  "Čierna"
    #define STRING_BLUE                   "Modrá"
    #define STRING_RED                    "Červená"
    #define STRING_GREEN                  "Zelená"
    #define STRING_CYAN                   "Tyrkysová"
    #define STRING_YELLOW                 "Žltá"
    #define STRING_BROWN                  "Hnedá"
    #define STRING_GRAY                   "Šedá"
    #define STRING_ORANGE                 "Oranžová"
    #define STRING_INDIGO                 "Indigo"
    #define STRING_VIOLET                 "Fialová"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Purple"
    #define STRING_LIME                   "Lime"
    #define STRING_DARKBLUE               "DarkBlue"
    #define STRING_DARKGREEN              "DarkGreen"
    #define STRING_DARKGRAY               "DarkGray"

    // Menus
    #define STRING_HEAT                   "Teplota"
    #define STRING_MOVE                   "Posunúť"
    #define STRING_HOME                   "Domov"
    #define STRING_PRINT                  "Tlačiť"
    #define STRING_EXTRUDE                "Extrúder"
    #define STRING_SETTINGS               "Nastavenia"
    #define STRING_SCREEN_SETTINGS        "Obrazovka"
    #define STRING_MACHINE_SETTINGS       "Tlačiareň"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_FEATURE_SETTINGS       "Funkcie"
    #define STRING_SOUND                  "Sound"
    #define STRING_RGB_SETTINGS           "Farba LED"
    #define STRING_RGB_OFF                "Vypnúť LED"
    #define STRING_TERMINAL               "Terminál"
    #define STRING_LEVELING               "Vyrovnanie"
    #define STRING_POINT_1                "Bod 1"
    #define STRING_POINT_2                "Bod 2"
    #define STRING_POINT_3                "Bod 3"
    #define STRING_POINT_4                "Bod 4"
    #define STRING_POINT_5                "Bod 5"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "Bed Leveling Complete"
    #define STRING_BL_SMART_FILL          "Missing probe points\nhave been smart filled.\n \nNote: remember to save!"
    #define STRING_BL_ENABLE              "BL: on"
    #define STRING_BL_DISABLE             "BL: off"
    #define STRING_ABL                    "ABL"
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
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Distance"
    #define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
    #define STRING_TOUCHSCREEN_ADJUST     "Kalibrácia"
    #define STRING_MORE                   "Viacej"
    #define STRING_SCREEN_INFO            "Info"
    #define STRING_BG_COLOR               "Background color"
    #define STRING_FONT_COLOR             "Font color"
    #define STRING_PERCENTAGE             "Percentá"
    #define STRING_PERCENTAGE_SPEED       "Rýchlosť"
    #define STRING_PERCENTAGE_FLOW        "Prietok"
    #define STRING_BABYSTEP               "BabyStep"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Kalibrácia"
    #define STRING_ADJUST_INFO            "Dotknite sa postupne všetkých bodov"
    #define STRING_ADJUST_OK              "Kalibrácia úspešná"
    #define STRING_ADJUST_FAILED          "Kalibrácia zlyhala, opakovať"
    #define STRING_UNIFIEDMOVE            "Pohyb"
    #define STRING_UNIFIEDHEAT            "Nahriať"
    #define STRING_TOUCH_TO_EXIT          "Dotknite sa obrazovky pre ukončenie"
    #define STRING_MAINMENU               "Menu"
    #define STRING_PARAMETER_SETTING      "Parametre"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_LEVELING_EDGE_DISTANCE "Bed edge distance"
    #define STRING_TUNING                 "Tuning"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID autotune"
    #define STRING_PID_START_INFO         "PID autotune may take\nsome time to complete.\nContinue?"
    #define STRING_PID_START_INFO_2       "PID autotune in progress!"
    #define STRING_PID_START_INFO_3       "Do not touch the screen until completed (green LED ON)!"
    #define STRING_TUNE_EXTRUDER          "Tune steps"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
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
    #define STRING_CONNECTION_SETTINGS    "Connection"
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
    #define STRING_TEST_LEVEL_VALID       "Mesh Validation"
    #define STRING_TEST_LEVEL_PLA         "Valid pla"
    #define STRING_TEST_LEVEL_ABS         "Valid abs"
    #define STRING_TEST_LEVEL_PTEG        "Valid pteg"
    #define STRING_TEST_LEVEL_ASA         "Valid asa"
    #define STRING_MACROS                 "Macros"

#endif
