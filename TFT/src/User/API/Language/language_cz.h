#ifndef _LANGUAGE_CZ_H_
#define _LANGUAGE_CZ_H_

    // config.ini Parameter Settings / Feature Settings
    #define STRING_STATUS_SCREEN          "Enable Status Screen"
    #define STRING_BAUDRATE               "Serial Port"
    #define STRING_LANGUAGE               "Čeština"
    #define STRING_ROTATE_UI              "Otočit UI"
    #define STRING_TERMINAL_ACK           "zobrazit ACK Terminálu"
    #define STRING_INVERT_X_AXIS          "Otočit osu X"
    #define STRING_INVERT_Y_AXIS          "Otočit osu Y"
    #define STRING_INVERT_Z_AXIS          "Otočit osu Z"
    #define STRING_PERSISTENT_INFO        "Trvalé zobrazení stavu"
    #define STRING_FILE_LIST_MODE         "Zobrazit soub.jako seznam"
    #define STRING_ACK_NOTIFICATION       "Styl oznámení ACK"
    #define STRING_DEFAULT_MODE           "Default Mode"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_FULLSCREEN      "Celoobrazovkový režim Marlin"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_HEATED_BED             "Heated Bed Support"
    #define STRING_HEATED_CHAMBER         "Heated Chamber Support"
    #define STRING_MOVE_SPEED             "Rychlost pohybu X Y Z"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Save Load Leveling"
    #define STRING_TOUCHMI_SENSOR         "TouchMI"
    #define STRING_ONBOARD_SD_SUPPORT     "Onboard SD Card Support"
    #define STRING_M27_ALWAYS_ACTIVE      "M27 Always Active"
    #define STRING_LONG_FILENAME_SUPPORT  "Long File Names Support"
    #define STRING_FAN_SPEED_PERCENT      "Fan Speed As Percentage"
    #define STRING_XY_OFFSET_PROBING      "XY Offset Probing Support"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_ON                  "Auto.vypnutí"
    #define STRING_PS_ON_ACTIVE_HIGH      "Power Supply Active HIGH"
    #define STRING_FIL_RUNOUT             "Senzor filamentu"
    #define STRING_FIL_RUNOUT_INVERTING   "Inverted Filament Runout Logic"
    #define STRING_PL_RECOVERY_EN         "Obnova po ztrátě napájení"
    #define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "Zvuk při dotyku"
    #define STRING_TOAST_SOUND            "Zvuk vytápění"
    #define STRING_ALERT_SOUND            "Upozornění, popup okno"
    #define STRING_KNOB_LED_COLOR         "Rotační knob LED"
    #define STRING_KNOB_LED_IDLE          "Rotační knob LED idle"
    #define STRING_LCD_BRIGHTNESS         "LCD Jas"
    #define STRING_LCD_IDLE_BRIGHTNESS    "LCD snížení jasu"
    #define STRING_LCD_IDLE_DELAY         "LCD snížení jasu po"
    #define STRING_START_GCODE_ENABLED    "Spustit Gcode před tiskem"
    #define STRING_END_GCODE_ENABLED      "Spustit Gcode po tisku"
    #define STRING_CANCEL_GCODE_ENABLED   "Spustit Gcode po stornu"

    // Machine Parameter Settings
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_PROBE_OFFSET           "Offset sondy"
    #define STRING_MBL_OFFSET             "MBL Offset"
    #define STRING_STEPS_SETTING          "Kroků/mm"
    #define STRING_MAXFEEDRATE            "Max rychlost"
    #define STRING_MAXACCELERATION        "Max zrychlení"
    #define STRING_ACCELERATION           "Zrychlení"
    #define STRING_JERK                   "Jerk-trhnutí"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_FWRETRACT              "FW Zatažení"
    #define STRING_FWRECOVER              "FW Obnovení"
    #define STRING_RETRACT_AUTO           "Auto Firmware Retract"
    #define STRING_OFFSET_TOOL            "Offset 2.trysky"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Proud motorů (mA)"
    #define STRING_BUMP_SENSITIVITY       "Citlivost nárazu TMC"
    #define STRING_HYBRID_THRESHOLD       "TMC Hybridní práh"
    #define STRING_PRINT_ACCELERATION     "Zrychlení při tisku"
    #define STRING_RETRACT_ACCELERATION   "Zrychlení retrakcí"
    #define STRING_TRAVEL_ACCELERATION    "Zrychlení při přesunu"
    #define STRING_RETRACT_LENGTH         "Délka zatažení"
    #define STRING_RETRACT_SWAP_LENGTH    "Délka zatažení Swap"
    #define STRING_RETRACT_FEEDRATE       "Rychlost zatažení"
    #define STRING_RETRACT_Z_LIFT         "Z zvýšení při zatažení"
    #define STRING_RECOVER_LENGTH         "Délka obnovení"
    #define STRING_SWAP_RECOVER_LENGTH    "Délka obnovení Swap"
    #define STRING_RECOVER_FEEDRATE       "Rychlost obnovení"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Rychlost obnovení Swap"

    // Standard Parameter Values
    #define STRING_ON                     "ON"
    #define STRING_OFF                    "OFF"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW_SPEED             "Pomalu"
    #define STRING_NORMAL_SPEED           "Normál"
    #define STRING_FAST_SPEED             "Rychle"

    // Save / Load
    #define STRING_SAVE                   "Uložit"
    #define STRING_RESTORE                "Obnovit"
    #define STRING_RESET                  "Reset"
    #define STRING_EEPROM_SAVE_INFO       "Uložit nastavení tiskárny\ndo EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Obnovit nastavení\nz EEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Reset EEPROM na výchozí hodnoty?"
    #define STRING_SETTINGS_SAVE          "Uložení nastavení"
    #define STRING_SETTINGS_RESTORE       "Obnovení nastavení"
    #define STRING_SETTINGS_RESET         "Reset nastavení"
    #define STRING_SETTINGS_RESET_INFO    "Všechna nastavení budou\nobnovena na výchozí\nhodnoty. Pokračovat?"
    #define STRING_SETTINGS_RESET_DONE    "Resetování všech nastavení\nbylo úspěšně provedeno.\nRestartujte zařízení."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Další"
    #define STRING_PAGE_DOWN              "Předchozí"
    #define STRING_UP                     "Nahoru"
    #define STRING_DOWN                   "Dolů"
    #define STRING_NEXT                   "Další"
    #define STRING_BACK                   "Zpět"

    // Value Buttons
    #define STRING_INC                    "Přidat"
    #define STRING_DEC                    "Ubrat"
    #define STRING_LOAD                   "Zavést"
    #define STRING_UNLOAD                 "Vysunout"
    #define STRING_CLEAR                  "Vymaž"
    #define STRING_VALUE_ZERO             "Vynulovat"
    #define STRING_DEFAULT                "Výchozí"

    // Action Buttons
    #define STRING_START                  "Start"
    #define STRING_STOP                   "Stop"
    #define STRING_PAUSE                  "Pauza"
    #define STRING_RESUME                 "Obnovit"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Odpojit"
    #define STRING_SHUT_DOWN              "Vypnout"
    #define STRING_FORCE_SHUT_DOWN        "Vynutit"
    #define STRING_EMERGENCYSTOP          "!!STOP!!"
    #define STRING_PREHEAT                "Zahřát"
    #define STRING_COOLDOWN               "Zchladit"

    // Dialog Buttons
    #define STRING_CONFIRM                "Potvrdit"
    #define STRING_CANCEL                 "Zrušit"
    #define STRING_WARNING                "Varování"
    #define STRING_CONTINUE               "Pokračovat"
    #define STRING_CONFIRMATION           "Jste si jistý?"

    // Process Status
    #define STRING_STATUS                 "Status"
    #define STRING_READY                  "Připraven"
    #define STRING_BUSY                   "Zpracovávám, čekejte prosím..."
    #define STRING_LOADING                "Nahrávám..."
    #define STRING_UNCONNECTED            "Tiskárna není připojena!"

    // Process Info
    #define STRING_INFO                   "Info"
    #define STRING_INVALID_VALUE          "Neplatná hodnota/y!"
    #define STRING_TIMEOUT_REACHED        "Časový limit vypršel!"
    #define STRING_DISCONNECT_INFO        "Nyní můžete tiskárnu ovládat z počítače!"
    #define STRING_SHUTTING_DOWN          "Vypínám se..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Čekám na zchladnutí\nextruderu pod %d℃" // Wait for the temperature of hotend to be lower than 50℃
    #define STRING_POWER_FAILED           "Obnovit tisk?"
    #define STRING_PROCESS_RUNNING        "Probíhá proces!"
    #define STRING_PROCESS_COMPLETED      "Proces dokončen!"
    #define STRING_PROCESS_ABORTED        "Proces přerušen!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "TFT SD"
    #define STRING_READ_TFTSD_ERROR       "Chyba při čtení SD karty!"
    #define STRING_TFTSD_INSERTED         "SD karta vložena!"
    #define STRING_TFTSD_REMOVED          "SD karta vyjmuta!"
    #define STRING_U_DISK                 "USB Disk"
    #define STRING_READ_U_DISK_ERROR      "Chyba při čtení USB disku!"
    #define STRING_U_DISK_INSERTED        "USB disk  vložen!"
    #define STRING_U_DISK_REMOVED         "USB disk vyjmut!"
    #define STRING_ONBOARDSD              "Onboard SD"
    #define STRING_READ_ONBOARDSD_ERROR   "Chyba při čtení Onboard SD!"
    #define STRING_FILAMENT_RUNOUT        "Došel filament!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Motory"
    #define STRING_XY_UNLOCK              "Uvolnit XY"

    #define STRING_START_PRINT            "Spustit tisk:\n %s?"
    #define STRING_STOP_PRINT             "Zastavit tisk?"
    #define STRING_IS_PAUSE               "Během tisku nelze\nextrudovat,\nmám pozastavit tisk?"
    #define STRING_M0_PAUSE               "Pauza po příkazu M0"

    #define STRING_TEST                   "Test"
    #define STRING_DEPLOY                 "Vysunout"
    #define STRING_STOW                   "Zasunout"
    #define STRING_REPEAT                 "Přesnost"

    // Values
    #define STRING_NOZZLE                 "Tryska"
    #define STRING_BED                    "Stolek"
    #define STRING_CHAMBER                "Komora"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    #define STRING_ABL                    "Vyrovnat"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"

    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0,01mm"
    #define STRING_01_MM                  "0,1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"
    #define STRING_PERCENTAGE_SPEED       "Rychlost"
    #define STRING_PERCENTAGE_FLOW        "Průtok"

    #define STRING_5_SECONDS              "5 sec."
    #define STRING_10_SECONDS             "10 sec."
    #define STRING_30_SECONDS             "30 sec."
    #define STRING_60_SECONDS             "1 min."
    #define STRING_120_SECONDS            "2 min."
    #define STRING_300_SECONDS            "5 min."
    #define STRING_CUSTOM_SECONDS         "Vlastní"

    // Colors
    #define STRING_WHITE                  "Bílá"
    #define STRING_BLACK                  "Černá"
    #define STRING_BLUE                   "Modrá"
    #define STRING_RED                    "Červená"
    #define STRING_GREEN                  "Zelená"
    #define STRING_CYAN                   "Tyrkys"
    #define STRING_YELLOW                 "Žlutá"
    #define STRING_BROWN                  "Hnědá"
    #define STRING_GRAY                   "Šedá"
    #define STRING_ORANGE                 "Oranžová"
    #define STRING_INDIGO                 "Indigo"
    #define STRING_VIOLET                 "Fialová"
    #define STRING_MAGENTA                "Purpurová"
    #define STRING_PURPLE                 "Nachová"
    #define STRING_LIME                   "Limetková"
    #define STRING_DARKBLUE               "Tmavá Modrá"
    #define STRING_DARKGREEN              "Tmavá Červená"
    #define STRING_DARKGRAY               "Tmavá Šedá"

    // Menus
    #define STRING_HEAT                   "Teplota"
    #define STRING_MOVE                   "Posunout"
    #define STRING_HOME                   "Domů"
    #define STRING_PRINT                  "Tisknout"
    #define STRING_EXTRUDE                "Filament"
    #define STRING_FAN                    "Ofuk"
    #define STRING_SETTINGS               "Nastavení"
    #define STRING_SCREEN_SETTINGS        "Displej"
    #define STRING_MACHINE_SETTINGS       "Tiskárna"
    #define STRING_FEATURE_SETTINGS       "Vlastnosti"
    #define STRING_SOUND                  "Zvuk"
    #define STRING_RGB_SETTINGS           "Barva LED"
    #define STRING_RGB_OFF                "LED vyp."
    #define STRING_TERMINAL               "Terminál"
    #define STRING_CUSTOM                 "Vlastní"
    #define STRING_LEVELING               "Srovnat"
    #define STRING_POINT_1                "Bod 1"
    #define STRING_POINT_2                "Bod 2"
    #define STRING_POINT_3                "Bod 3"
    #define STRING_POINT_4                "Bod 4"
    #define STRING_POINT_5                "Bod 5"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "Vyrovnání kompletní"
    #define STRING_BL_SMART_FILL          "Chybějící body sondy\nbyly vyplněny inteligentně.\n \nPozn: Nezapomeň uložit!"
    #define STRING_BL_ENABLE              "BL: on"
    #define STRING_BL_DISABLE             "BL: off"
    #define STRING_MBL_SETTINGS           "Ruční vyrovnání"
    #define STRING_ABL_SETTINGS           "Auto vyrovnání"
    #define STRING_ABL_SETTINGS_BBL       "Bilineární vyrovnání"
    #define STRING_ABL_SETTINGS_UBL       "UBL vyrovnání"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Uložit do slotu"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Nahrát ze slotu"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Zapamatuj si slot\nrestart? (Uložit EEPROM)"
    #define STRING_ABL_Z                  "Z-Slábnutí"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Vzdálenost"
    #define STRING_LOAD_UNLOAD            "Vysunout/Zavést"
    #define STRING_LOAD_UNLOAD_SHORT      "Vysunout"
    #define STRING_FAN_FULL_SPEED         "Plný"
    #define STRING_FAN_HALF_SPEED         "Poloviční"
    #define STRING_TOUCHSCREEN_ADJUST     "Kalibrovat"
    #define STRING_MORE                   "Více"
    #define STRING_SCREEN_INFO            "Info"
    #define STRING_SIMULATOR_BG_COLOR     "Marlin - Barva pozadí"
    #define STRING_SIMULATOR_FONT_COLOR   "Marlin - Barva písma"
    #define STRING_PERCENTAGE             "Procenta"
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
    #define STRING_ADJUST_TITLE           "Kalibrace dotykové obrazovky"
    #define STRING_ADJUST_INFO            "Dotkněte se postupně všech bodů"
    #define STRING_ADJUST_OK              "Kalibrace úspěšná"
    #define STRING_ADJUST_FAILED          "Kalibrace selhala, zopakujte znovu"
    #define STRING_PREHEAT_BOTH           "Vše"
    #define STRING_UNIFIEDMOVE            "Pohyb"
    #define STRING_UNIFIEDHEAT            "Teplota"
    #define STRING_TOUCH_TO_EXIT          "Pro návrat se dotkněte obrazovky..."
    #define STRING_MAINMENU               "Menu"
    #define STRING_PARAMETER_SETTING      "Parametry"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_LEVELING_EDGE_DISTANCE "Vzdálenost nivelačních bodů\nstolku od okraje"
    #define STRING_TUNING                 "Kalibrace"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID autokalibrace"
    #define STRING_PID_START_INFO         "PID autokalibrace bude spuštěna.\nBude to chvíli trvat.\nPokračovat?"
    #define STRING_PID_START_INFO_2       "PID autokalibrace probíhá!"
    #define STRING_PID_START_INFO_3       "NEDOTÝKEJ se displeje dokud není dokončeno\n(Zelená LED svítí)!"
    #define STRING_TUNE_EXTRUDER          "E-Krok"
    #define STRING_TUNE_EXT_EXTRUDE_100   "100mm Vysunutí"
    #define STRING_TUNE_EXT_TEMP          "Kalibrace extruderu, ohřev"
    #define STRING_TUNE_EXT_TEMPLOW       "Požadovaná teplota je příliš nízká!\nMinimální teplota: %d C"
    #define STRING_TUNE_EXT_DESIREDVAL    "Teplota ještě není na požadované hodnotě"
    #define STRING_TUNE_EXT_MARK120MM     "Označ 120mm na filamentu\nStlač '%s' pokud jsi připraven.\nZměř zbývající délku\npo vytlačení."
    #define STRING_TUNE_EXT_HEATOFF       "Vypnout topení?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Nastavení E-Kroků"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Nové E-kroky uloženy!\nNezapmeň uložit do EEPROM.\nNová hodnota: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Zbývající délka:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Původní E-kroky: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Nový E-kroky: %0.2f"
    #define STRING_CONNECTION_SETTINGS    "Připojení"
    #define STRING_NOTIFICATIONS          "Oznámení"
    #define STRING_MESH_EDITOR            "Mesh síť"
    #define STRING_MESH_TUNER             "Mesh nastavení"
    #define STRING_CASE_LIGHT             "Osvětlení"
    #define STRING_LOAD_STARTED           "Probíhá zavádění filamentu.\nNení možná další akce,\ndokud to nebude dokončeno.\nProsím čekejte."
    #define STRING_UNLOAD_STARTED         "Probíhá vysunování filamentu.\nNení možná další akce,\ndokud to nebude dokončeno.\nProsím čekejte.."
    #define STRING_HEATERS_ON             "Topení jsou stále zapnutá.\nChcete je vypnout?"
    #define STRING_PRINT_FINISHED         "     Tisk\n   dokončen"
    #define STRING_MAIN_SCREEN            "Nabídka"
    #define STRING_PREVIOUS_PRINT_DATA    "Info.tisku"
    #define STRING_PRINT_TIME             "Čas tisku: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nDélka filamentu: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nVáha  filamentu: %1.2fg"
    #define STRING_FILAMENT_COST          "\nCena  filamentu: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nStatistika není k dispozici."
    #define STRING_CLICK_FOR_MORE         "Klikni pro více informací."
    #define STRING_EXT_TEMPLOW            "Teplota hotendu je pod\nminimální teplotou (%d℃)."
    #define STRING_COLD_EXT               "Studená extruze je zakázána"
    #define STRING_HEAT_HOTEND            "Zahřát hotend na %d℃?"
    #define STRING_Z_ALIGN                "Z Align"

#endif
