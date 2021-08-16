#ifndef _LANGUAGE_HU_H_
#define _LANGUAGE_HU_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_BAUDRATE               "Kapcsolat"
    #define STRING_EMULATE_M600           "Emulált M600"
    #define STRING_ROTATE_UI              "Forgatás"
    #define STRING_LANGUAGE               "Magyar"
    #define STRING_ACK_NOTIFICATION       "ACK Értesítési stílus"
    #define STRING_FILE_SORT_BY           "Fájlok rendezése"
    #define STRING_FILE_LIST_MODE         "Fájlnéző listamód"
    #define STRING_FAN_SPEED_PERCENT      "Ventilátor sebesség %-ban"
    #define STRING_PERSISTENT_INFO        "Állandó állapotinfó"
    #define STRING_TERMINAL_ACK           "ACK Megjelenítése"
    #define STRING_SERIAL_ALWAYS_ON       "Soros port folytonos"
    #define STRING_MARLIN_FULLSCREEN      "Nagyképernyős Marlin mód"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin mód cím támogatás"
    #define STRING_MARLIN_TYPE            "Marlin mód típusa"
    #define STRING_MOVE_SPEED             "Mozgás seb. (X-Y-Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Szint. auto-mentés/töltés"
    #define STRING_XY_OFFSET_PROBING      "X-Y Végpont tapintás tám."
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Motorok automata igazí."
    #define STRING_PS_ON                  "Automata kikapcsolás"
    #define STRING_FIL_RUNOUT             "Szál érzékelő"
    #define STRING_PL_RECOVERY_EN         "Energiavesztés helyreáll."
    #define STRING_PL_RECOVERY_HOME       "Áramkimaradás helyreáll."
    #define STRING_BTT_MINI_UPS           "BTT UPS Támogatás"
    #define STRING_TOUCH_SOUND            "Érintés hang"
    #define STRING_TOAST_SOUND            "Értesítés hang"
    #define STRING_ALERT_SOUND            "Riasztás hang"
    #define STRING_HEATER_SOUND           "Fűtés hang"
    #define STRING_LCD_BRIGHTNESS         "Fényerősség"
    #define STRING_LCD_IDLE_BRIGHTNESS    "LCD Halványítás"
    #define STRING_LCD_IDLE_TIME          "LCD Halványítási idő"
    #define STRING_BLOCK_TOUCH_ON_IDLE    "Érintés tiltás alapjáraton"
    #define STRING_KNOB_LED_COLOR         "Forgatógomb LED"
    #define STRING_KNOB_LED_IDLE          "Forgatógomb tétlen"
    #define STRING_START_GCODE_ENABLED    "Kezdő G-Kód"
    #define STRING_END_GCODE_ENABLED      "Befejező G-Kód"
    #define STRING_CANCEL_GCODE_ENABLED   "Leállító G-Kód"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Lépés beállítás"
    #define STRING_FILAMENT_SETTING       "Filament átmérő"
    #define STRING_MAXACCELERATION        "Max gyorsulás"
    #define STRING_MAXFEEDRATE            "Max előtolási sebesség"
    #define STRING_ACCELERATION           "Gyorsulás"
    #define STRING_JERK                   "Rántás"
    #define STRING_JUNCTION_DEVIATION     "Keresztezés eltérés"
    #define STRING_HOME_OFFSET            "Kezdőpont eltolás"
    #define STRING_FWRETRACT              "FW Visszahúzás"
    #define STRING_FWRECOVER              "FW Visszanyomás"
    #define STRING_RETRACT_AUTO           "Automata visszahúz."
    #define STRING_HOTEND_OFFSET          "Második fej eltolása"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "Szonda eltolás"
    #define STRING_LIN_ADVANCE            "Lineáris haladás"
    #define STRING_CURRENT_SETTING        "Motoráramok beállítása"
    #define STRING_HYBRID_THRESHOLD       "TMC Hibrid küszöbérték"
    #define STRING_BUMP_SENSITIVITY       "TMC Ütközés érzékenység"
    #define STRING_MBL_OFFSET             "MBL Eltolás"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Nyomtatás gyorsulás"
    #define STRING_RETRACT_ACCELERATION   "Visszahúzás gyorsulás"
    #define STRING_TRAVEL_ACCELERATION    "Utazási gyorsulás"
    #define STRING_RETRACT_LENGTH         "Visszahúzás hossz"
    #define STRING_RETRACT_SWAP_LENGTH    "Csere hossz vissza."
    #define STRING_RETRACT_FEEDRATE       "Visszahúzás előtol."
    #define STRING_RETRACT_Z_LIFT         "Z Emelése visszahú."
    #define STRING_RECOVER_LENGTH         "Hossz javítás"
    #define STRING_SWAP_RECOVER_LENGTH    "Cserehossz javítás"
    #define STRING_RECOVER_FEEDRATE       "Előtolás javítás"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Csere előtolás jav."

    // Mentés / Betöltés
    #define STRING_SAVE                   "Mentés"
    #define STRING_RESTORE                "Visszaállítás"
    #define STRING_RESET                  "Alapállítás"
    #define STRING_EEPROM_SAVE_INFO       "Mented a megváltozott beállításokat az EEPROM-ba?"
    #define STRING_EEPROM_RESTORE_INFO    "Betöltöd a beállításokat az EEPROM-ból?"
    #define STRING_EEPROM_RESET_INFO      "Visszaállítod az EEPROM-ot a gyári beállításokra?"
    #define STRING_SETTINGS_SAVE          "Beállítások mentése"
    #define STRING_SETTINGS_RESTORE       "Beállítások újratöltése"
    #define STRING_SETTINGS_RESET         "Beállítások visszaáll."
    #define STRING_SETTINGS_RESET_INFO    "Minden beállítás vissza fog állni alapértelmezett értékre. Folytatod?"
    #define STRING_SETTINGS_RESET_DONE    "A beállítások visszaállítása sikeresen megtörtént.\nAz aktiváláshoz indítsd újra az eszközt."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Oldal fel"
    #define STRING_PAGE_DOWN              "Oldal le"
    #define STRING_UP                     "Fel"
    #define STRING_DOWN                   "Le"
    #define STRING_NEXT                   "Tovább"
    #define STRING_BACK                   "Vissza"

    // Érték gombok
    #define STRING_INC                    "Növel"
    #define STRING_DEC                    "Csökkent"
    #define STRING_LOAD                   "Betöltés"
    #define STRING_UNLOAD                 "Kiadás"
    #define STRING_ON                     "BE"
    #define STRING_OFF                    "KI"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "OKOS"
    #define STRING_SLOW                   "Lassú"
    #define STRING_NORMAL                 "Normál"
    #define STRING_FAST                   "Gyors"
    #define STRING_ZERO                   "Nulla"
    #define STRING_HALF                   "Fél"
    #define STRING_FULL                   "Teljes"
    #define STRING_CUSTOM                 "Egyedi"
    #define STRING_CLEAR                  "Törlés"
    #define STRING_DEFAULT                "Alapért."

    // Művelet gombok
    #define STRING_START                  "Kezdés"
    #define STRING_STOP                   "Állj"
    #define STRING_PAUSE                  "Szünet"
    #define STRING_RESUME                 "Folytatás"
    #define STRING_INIT                   "Kezdet"
    #define STRING_DISCONNECT             "Leválaszt"
    #define STRING_SHUT_DOWN              "Leállítás"
    #define STRING_FORCE_SHUT_DOWN        "Kényszerít"
    #define STRING_EMERGENCYSTOP          "Vész-STOP"
    #define STRING_PREHEAT                "Előfűtés"
    #define STRING_PREHEAT_BOTH           "Mindkettő"
    #define STRING_COOLDOWN               "Hűtés"

    // Párbeszédgombok
    #define STRING_CONFIRM                "\u088E Oké"
    #define STRING_CANCEL                 "\u088F Mégse"
    #define STRING_WARNING                "Figyelem!"
    #define STRING_CONTINUE               "Folytatás"
    #define STRING_CONFIRMATION           "Biztos vagy benne?"

    // Folyamat állapota
    #define STRING_STATUS                 "Státusz"
    #define STRING_READY                  "Kész"
    #define STRING_BUSY                   "Feldolgozás alatt, kérlek várj..."
    #define STRING_LOADING                "Betöltés..."
    #define STRING_UNCONNECTED            "Nincs nyomtató csatlakoztatva!"

    // Folyamat infó
    #define STRING_INFO                   "Infó"
    #define STRING_INVALID_VALUE          "Nincs érvényes érték megadva"
    #define STRING_TIMEOUT_REACHED        "Időkorlát elérve!"
    #define STRING_DISCONNECT_INFO        "Most a számítógépről vezérelheted a nyomtatót!"
    #define STRING_SHUTTING_DOWN          "Leállítás..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Várd meg a fej visszahűlését.%d℃"
    #define STRING_POWER_FAILED           "Folytatod a nyomtatást?"
    #define STRING_PROCESS_RUNNING        "Folyamat fut!"
    #define STRING_PROCESS_COMPLETED      "Folyamat befejezve!"
    #define STRING_PROCESS_ABORTED        "Folyamat megszakítva!"

    // TFT SD, U_DISK, Alaplap SD, Szál Kifutás Folyamatparancsok / Státusz / Infó
    #define STRING_TFTSD                  "TFT-SD"
    #define STRING_READ_TFTSD_ERROR       "TFT-SD olvasási hiba!"
    #define STRING_TFTSD_INSERTED         "SD-Kártya behelyezve!"
    #define STRING_TFTSD_REMOVED          "SD-Kártya eltávolítva!"
    #define STRING_U_DISK                 "USB Tár"
    #define STRING_READ_U_DISK_ERROR      "USB olvasási hiba!"
    #define STRING_U_DISK_INSERTED        "USB behelyezve!"
    #define STRING_U_DISK_REMOVED         "USB eltávolítva!"
    #define STRING_ONBOARDSD              "Lap-SD"
    #define STRING_READ_ONBOARDSD_ERROR   "Alaplap-SD olvasási hiba!"
    #define STRING_FILAMENT_RUNOUT        "Szál kifutás!"

    // Léptetők, Nyomtatás, Szonda folyamat parancsai / Státusz / Infó
    #define STRING_DISABLE_STEPPERS       "Mot.tilt"
    #define STRING_XY_UNLOCK              "X-Y Felold"

    #define STRING_START_PRINT            "%s\nfájl kiválasztva.\nElindítod a nyomtatását?"
    #define STRING_STOP_PRINT             "Megállítod a nyomtatást?"
    #define STRING_IS_PAUSE               "A művelet tiltva van a nyomtatás alatt.\nSzünetelteted a nyomtatást?"
    #define STRING_M0_PAUSE               "Szünetelés M0 parancsal"

    #define STRING_TEST                   "Teszt"
    #define STRING_DEPLOY                 "Bevetés"
    #define STRING_STOW                   "Elhelyezés"
    #define STRING_REPEAT                 "Ismétlés"

    // Nyomtatóeszközök
    #define STRING_NOZZLE                 "Fej"
    #define STRING_BED                    "Ágy"
    #define STRING_CHAMBER                "Kamra"
    #define STRING_FAN                    "Ventilátor"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Értékek
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

    #define STRING_5_SECONDS              "5 Mp."
    #define STRING_10_SECONDS             "10 Mp."
    #define STRING_30_SECONDS             "30 Mp."
    #define STRING_60_SECONDS             "1 Perc."
    #define STRING_120_SECONDS            "2 Perc."
    #define STRING_300_SECONDS            "5 Perc."

    // Színek
    #define STRING_WHITE                  "Fehér"
    #define STRING_BLACK                  "Fekete"
    #define STRING_BLUE                   "Kék"
    #define STRING_RED                    "Piros"
    #define STRING_GREEN                  "Zöld"
    #define STRING_CYAN                   "Cián"
    #define STRING_YELLOW                 "Sárga"
    #define STRING_BROWN                  "Barna"
    #define STRING_GRAY                   "Szürke"
    #define STRING_ORANGE                 "Narancs"
    #define STRING_INDIGO                 "Indigó"
    #define STRING_VIOLET                 "Viola"
    #define STRING_MAGENTA                "Bíborvörös"
    #define STRING_PURPLE                 "Lila"
    #define STRING_LIME                   "Mész"
    #define STRING_DARKBLUE               "Sötétkék"
    #define STRING_DARKGREEN              "Sötétzöld"
    #define STRING_DARKGRAY               "Sötétszürke"

    // Menük
    #define STRING_HEAT                   "Fűtés"
    #define STRING_MOVE                   "Mozgás"
    #define STRING_HOME                   "Végállás"
    #define STRING_PRINT                  "Nyomtatás"
    #define STRING_EXTRUDE                "Adagolás"
    #define STRING_SETTINGS               "Opciók"
    #define STRING_SCREEN_SETTINGS        "Kijelző"
    #define STRING_MACHINE_SETTINGS       "Gép"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_MARLIN_MODE_SETTINGS   "Marlin mód"
    #define STRING_FEATURE_SETTINGS       "Funkciók"
    #define STRING_SOUND                  "Hangok"
    #define STRING_RGB_SETTINGS           "LED Szín"
    #define STRING_RGB_OFF                "LED Ki"
    #define STRING_TERMINAL               "Terminál"
    #define STRING_LEVELING               "Szintezés"
    #define STRING_POINT_1                "1. pont"
    #define STRING_POINT_2                "2. pont"
    #define STRING_POINT_3                "3. pont"
    #define STRING_POINT_4                "4. pont"
    #define STRING_POINT_5                "5. pont"
    #define STRING_BED_LEVELING           "Ágyszint"
    #define STRING_BL_COMPLETE            "Ágy szintezése sikeres."
    #define STRING_BL_SMART_FILL          "A hiányzó szonda pontok kitöltésre kerültek.\nMegjegyzés: Mentsd el!"
    #define STRING_BL_ENABLE              "BL: be"
    #define STRING_BL_DISABLE             "BL: ki"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Kézi rács szintezés"
    #define STRING_ABL_SETTINGS           "Automata szintezés"
    #define STRING_ABL_SETTINGS_BBL       "Bilineáris szintezés"
    #define STRING_ABL_SETTINGS_UBL       "Egységes szintezés"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Mentés szlotba"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Betöltés szlotból"
    #define STRING_ABL_SLOT0              "Szlot 0"
    #define STRING_ABL_SLOT1              "Szlot 1"
    #define STRING_ABL_SLOT2              "Szlot 2"
    #define STRING_ABL_SLOT3              "Szlot 3"
    #define STRING_ABL_SLOT_EEPROM        "Emlékezzen a következő újraindításnál? (EEPROM Mentése)"
    #define STRING_ABL_Z                  "Z Áttűnés"
    #define STRING_LEVEL_CORNER           "Sarok szint"
    #define STRING_P_OFFSET               "P Eltolás"
    #define STRING_H_OFFSET               "H Eltolás"
    #define STRING_DISTANCE               "Távolság"
    #define STRING_LOAD_UNLOAD            "Betöltés/Kiadás"
    #define STRING_LOAD_UNLOAD_SHORT      "Be/Ki"
    #define STRING_TOUCHSCREEN_ADJUST     "Igazítás"
    #define STRING_MORE                   "Több"
    #define STRING_SCREEN_INFO            "Infó"
    #define STRING_BG_COLOR               "Háttérszín"
    #define STRING_FONT_COLOR             "Betűszín"
    #define STRING_PERCENTAGE             "Százalék"
    #define STRING_PERCENTAGE_SPEED       "Sebesség"
    #define STRING_PERCENTAGE_FLOW        "Hozam"
    #define STRING_BABYSTEP               "Mikrolépés"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Érintőképernyő kalibrálása."
    #define STRING_ADJUST_INFO            "Kattints a piros pontra."
    #define STRING_ADJUST_OK              "Kalibrálás sikeres."
    #define STRING_ADJUST_FAILED          "A kalibrálás sikertelen, próbáld újra."
    #define STRING_UNIFIEDMOVE            "Mozgás"
    #define STRING_UNIFIEDHEAT            "Fűt/Hűt"
    #define STRING_TOUCH_TO_EXIT          "Érintsd meg a kilépéshez."
    #define STRING_MAINMENU               "Főmenü"
    #define STRING_PARAMETER_SETTING      "Tényezők"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_LEVELING_EDGE_DISTANCE "Ágyszél távolság"
    #define STRING_TUNING                 "Hangolás"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID Automatikus hangolás"
    #define STRING_PID_START_INFO         "A PID önhangolása elindul. Percekig is eltarthat.\nFolytatod?"
    #define STRING_PID_START_INFO_2       "PID Automatikus hangolása zajlik!"
    #define STRING_PID_START_INFO_3       "NE ÉRINTSD meg a kijelzőt míg nincs kész! (Zöld LED jelzi!)"
    #define STRING_TUNE_EXTRUDER          "Lépés hangolás"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Kiad 100mm"
    #define STRING_TUNE_EXT_TEMP          "Adagoló hangolás | Fűt"
    #define STRING_TUNE_EXT_MARK120MM     "A 120mm-t jelöld be a szálon\nNyomd '%s' ha kész\nMérd meg a hátralévő hosszt adagolás után."
    #define STRING_TUNE_EXT_HEATOFF       "Kikapcsolod a fűtést?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "E-lépés állítás"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Új E-lépés mentve!\nNe felejtsd el menteni EEPROM-ba.\nÚj érték: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Hátramaradt hossz:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Régi e-lépés: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Új e-lépés: %0.2f"
    #define STRING_CONNECTION_SETTINGS    "Kapcsolat"
    #define STRING_NOTIFICATIONS          "Értesítések"
    #define STRING_MESH_EDITOR            "Háló szerkesztő"
    #define STRING_MESH_TUNER             "Háló hangoló"
    #define STRING_CASE_LIGHT             "Gépház világítás"
    #define STRING_LOAD_STARTED           "A szál betöltése folyamatban van,\nnem lehetséges további művelet, míg véget nem ér.\nKérlek várj!"
    #define STRING_UNLOAD_STARTED         "A szál kiadása folyamatban van,\nnem lehetséges további művelet, míg véget nem ér.\nKérlek várj!"
    #define STRING_HEATERS_ON             "Néhány fűtőelem még üzemel.\nKikapcsolod a fűtőelemeket?"
    #define STRING_PRINT_FINISHED         "   Nyomtatás\n   elkészült!"
    #define STRING_MAIN_SCREEN            "Főoldal"
    #define STRING_PREVIOUS_PRINT_DATA    "Összegzés"
    #define STRING_PRINT_TIME             "Nyomtatási idő: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nSzál hossza: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nSzál súlya: %1.2fg"
    #define STRING_FILAMENT_COST          "\nSzál költség: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nNincs szál statisztika."
    #define STRING_CLICK_FOR_MORE         "Kattints az összegzésért."
    #define STRING_EXT_TEMPLOW            "Fejhőfok alacsonyabb, mint a minimális hőfok (%d℃)."
    #define STRING_HEAT_HOTEND            "Fűtöd a fejet %d℃-ra?"
    #define STRING_DESIRED_TEMPLOW        "Fejhőfok alacsonyabb, mint a\nkívánt hőfok (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Várj, míg felmelegszik."
    #define STRING_Z_ALIGN                "Z Igazítás"
    #define STRING_MACROS                 "Makrók"
    #define STRING_MESH_VALID             "Háló ellenőrzése"
    #define STRING_CONNECT_PROBE          "A folyamat megkezdése előtt\ncsatlakoztassa a szondát.\nGyőződjön meg róla,\nhogy utána lekapcsolja."
    #define STRING_DISCONNECT_PROBE       "A funkció használata előtt\ngyőződjön meg arról, hogy\nleválasztotta a szondát."
    #define STRING_CALIBRATION            "Kalibráció"

#endif
