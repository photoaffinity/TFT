#ifndef _LANGUAGE_DE_H_
#define _LANGUAGE_DE_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATED_M600          "Emuliere M600"
    #define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
    #define STRING_EVENT_LED              "Event LED"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "UI drehen"
    #define STRING_LANGUAGE               "Deutsch"
    #define STRING_ACK_NOTIFICATION       "ACK - Stil"
    #define STRING_FILES_SORT_BY          "Sortiere Dateien nach"
    #define STRING_FILES_LIST_MODE        "Dateien als Liste"
    #define STRING_FILENAME_EXTENSION     "Show filename extension"
    #define STRING_FAN_SPEED_PERCENTAGE   "Lüft. Geschw. in Prozent"
    #define STRING_PERSISTENT_INFO        "Persistente Status Info"
    #define STRING_TERMINAL_ACK           "Zeige ACK im Terminal"
    #define STRING_SERIAL_ALWAYS_ON       "Seriell Verbind. immer an"
    #define STRING_MARLIN_FULLSCREEN      "Marlin Vollbild"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Titel anz."
    #define STRING_MARLIN_TYPE            "Marlin Modus Typ"
    #define STRING_MOVE_SPEED             "Geschwindigkeit (XYZ)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Laden/Speichern Leveling"
    #define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Stepper Auto-Justierung"
    #define STRING_PS_AUTO_SHUTDOWN       "Auto-aus (PS_ON)"
    #define STRING_FIL_RUNOUT             "Filament Sensor"
    #define STRING_PL_RECOVERY            "Weitermachen (Stromausfall)"
    #define STRING_PL_RECOVERY_HOME       "Achsen nullen (Stromausfall)"
    #define STRING_BTT_MINI_UPS           "BTT UPS Unterstützung"
    #define STRING_TOUCH_SOUND            "Eingabetöne"
    #define STRING_TOAST_SOUND            "Toasts-Töne"
    #define STRING_ALERT_SOUND            "Popups & Alarme"
    #define STRING_HEATER_SOUND           "Ton bei erreichter Temp."
    #define STRING_LCD_BRIGHTNESS         "LCD-Helligkeit"
    #define STRING_LCD_IDLE_BRIGHTNESS    "LCD-Timeout-Helligkeit"
    #define STRING_LCD_IDLE_TIME          "LCD-Timeout"
    #define STRING_LCD_LOCK_ON_IDLE       "Kein Touch im Standby"
    #define STRING_LED_ALWAYS_ON          "LED always ON"
    #define STRING_KNOB_LED_COLOR         "Drehknopf LED Farbe"
    #define STRING_KNOB_LED_IDLE          "Drehknopf LED idle Farbe"
    #define STRING_START_GCODE_ENABLED    "Gcode vor Druck"
    #define STRING_END_GCODE_ENABLED      "Gcode nach Druck"
    #define STRING_CANCEL_GCODE_ENABLED   "Gcode bei Abbruch"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Schritte pro mm"
    #define STRING_FILAMENT_SETTING       "Filament Durchmesser"
    #define STRING_MAXACCELERATION        "max. Beschleunigung"
    #define STRING_MAXFEEDRATE            "max. Feed Geschwindig."
    #define STRING_ACCELERATION           "Beschleunigung"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Nullpunkt Versatz"
    #define STRING_FWRETRACT              "FW Rückzug"
    #define STRING_FWRECOVER              "FW Rückeinschub"
    #define STRING_RETRACT_AUTO           "Auto-Rückzug (Firmware)"
    #define STRING_HOTEND_OFFSET          "Abstand 2te Düse"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Konfiguration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Einstellungen"
    #define STRING_PROBE_OFFSET           "Sensor Versatz"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Treiber Strom (mA)"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_BUMP_SENSITIVITY       "TMC Empfindlichkeit"
    #define STRING_MBL_OFFSET             "MBL Versatz"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Druck Beschl."
    #define STRING_RETRACT_ACCELERATION   "Rückzug Beschl."
    #define STRING_TRAVEL_ACCELERATION    "Fahrt Beschl."
    #define STRING_RETRACT_LENGTH         "Rückzug Länge"
    #define STRING_RETRACT_SWAP_LENGTH    "Rückzug Länge (Wechsel)"
    #define STRING_RETRACT_FEEDRATE       "Geschwindigkeit"
    #define STRING_RETRACT_Z_LIFT         "Z-Anhebung"
    #define STRING_RECOVER_LENGTH         "extra Länge"
    #define STRING_SWAP_RECOVER_LENGTH    "extra Länge (Wechsel)"
    #define STRING_RECOVER_FEEDRATE       "Geschwindigkeit"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Geschwindigkeit (Wechsel)"

    // Save / Load
    #define STRING_SAVE                   "Speichern"
    #define STRING_RESTORE                "Laden"
    #define STRING_RESET                  "zurückset."
    #define STRING_EEPROM_SAVE_INFO       "Einstellungen im EEPROM speichern?"
    #define STRING_EEPROM_RESTORE_INFO    "Einstellungen aus EEPROM laden?"
    #define STRING_EEPROM_RESET_INFO      "Standardeinstellungen des Druckers wiederherstellen?"
    #define STRING_SETTINGS_SAVE          "Einstellungen speichern"
    #define STRING_SETTINGS_RESTORE       "Einstellungen wiederherst."
    #define STRING_SETTINGS_RESET         "Einstellungen zurücksetzen"
    #define STRING_SETTINGS_RESET_INFO    "Hiermit werden alle Einstellungen zurückgesetzt!\nFortfahren?"
    #define STRING_SETTINGS_RESET_DONE    "Einstellungen wurden erfolgreich zurückgesetzt.\nBitte neustarten."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Seite hoch"
    #define STRING_PAGE_DOWN              "Seite runter"
    #define STRING_UP                     "auf"
    #define STRING_DOWN                   "ab"
    #define STRING_NEXT                   "weiter"
    #define STRING_BACK                   "zurück"

    // Value Buttons
    #define STRING_INC                    "erhöhen"
    #define STRING_DEC                    "verringern"
    #define STRING_LOAD                   "Laden"
    #define STRING_UNLOAD                 "Entladen"
    #define STRING_ON                     "an"
    #define STRING_OFF                    "aus"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "langsam"
    #define STRING_NORMAL                 "normal"
    #define STRING_FAST                   "schnell"
    #define STRING_ZERO                   "0"
    #define STRING_HALF                   "halb"
    #define STRING_FULL                   "voll"
    #define STRING_CUSTOM                 "Extras"
    #define STRING_CLEAR                  "löschen"
    #define STRING_DEFAULT                "Standard"

    // Action Buttons
    #define STRING_START                  "Start"
    #define STRING_STOP                   "Stop"
    #define STRING_PAUSE                  "Pause"
    #define STRING_RESUME                 "Wiederaufnahme"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Trennen"
    #define STRING_SHUT_DOWN              "aus"
    #define STRING_FORCE_SHUT_DOWN        "erzwinge"
    #define STRING_EMERGENCYSTOP          "NOT-AUS!"
    #define STRING_PREHEAT                "Vorheizen"
    #define STRING_PREHEAT_BOTH           "Bett+Düse"
    #define STRING_COOLDOWN               "Abkühlen"

    // Dialog Buttons
    #define STRING_CONFIRM                "OK" //Confirm Sign
    #define STRING_CANCEL                 "Abbruch" //Cancel Sign
    #define STRING_WARNING                "Warnung" //Exclamation Sign
    #define STRING_CONTINUE               "Fortsetzen"
    #define STRING_CONFIRMATION           "Sicher?"

    // Process Status
    #define STRING_STATUS                 "Status"
    #define STRING_READY                  "Bereit"
    #define STRING_BUSY                   "Bitte warten ..."
    #define STRING_LOADING                "Lade ..."
    #define STRING_UNCONNECTED            "Keine Verbindung zum Drucker!"
    #define STRING_LISTENING              "TFT in Listening Mode!"

    // Process Info
    #define STRING_INFO                   "Info" //Info Sign
    #define STRING_INVALID_VALUE          "Ungültige(r) Wert(e)!"
    #define STRING_TIMEOUT_REACHED        "Zeit überschritten!"
    #define STRING_DISCONNECT_INFO        "Verbindung getrennt!"
    #define STRING_SHUTTING_DOWN          "Fahre herunter..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Warte bis Düsentemperatur unter\n%d℃ fällt." // Wait for the temperature of hotend to be lower than 50℃
    #define STRING_POWER_FAILED           "Druck fortsetzen?" //Question Sign
    #define STRING_PROCESS_RUNNING        "Prozess läuft bereits!"
    #define STRING_PROCESS_COMPLETED      "Prozess fertiggestellt!"
    #define STRING_PROCESS_ABORTED        "Prozess abgebrochen!"

    // TFT SD, USB Disk, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "TFT SD"
    #define STRING_READ_TFTSD_ERROR       "TFT SD Lesefehler!"
    #define STRING_TFTSD_INSERTED         "SD-Karte eingesteckt!"
    #define STRING_TFTSD_REMOVED          "SD-Karte entfernt!"
    #define STRING_TFTSD_NOT_DETECTED     "No SD Card detected."
    #define STRING_USB_DISK               "USB-Stick"
    #define STRING_READ_USB_DISK_ERROR    "USB-Stick Lesefehler!"
    #define STRING_USB_DISK_INSERTED      "USB-Stick eingesteckt!"
    #define STRING_USB_DISK_REMOVED       "USB-Stick entfernt!"
    #define STRING_USB_DISK_NOT_DETECTED  "No USB Disk detected."
    #define STRING_ONBOARDSD              "Onboard SD"
    #define STRING_ONBOARDUSB             "OnboardUSB"
    #define STRING_READ_ONBOARDSD_ERROR   "Onboard media Lesefehler!"
    #define STRING_FILAMENT_RUNOUT        "Filament alle!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "alle lösen"
    #define STRING_XY_UNLOCK              "löse XY"

    #define STRING_START_PRINT            "Druck starten:\n%s?"
    #define STRING_STOP_PRINT             "Druck abbrechen?"
    #define STRING_IS_PAUSE               "während Druckvorgang nicht möglich!\nDruck pausieren?"
    #define STRING_M0_PAUSE               "Pause durch M0 Befehl"

    #define STRING_TEST                   "Sensortest"
    #define STRING_DEPLOY                 "ausfahren"
    #define STRING_STOW                   "einziehen"
    #define STRING_REPEAT                 "Präzision"

    // Printer Tools
    #define STRING_NOZZLE                 "Düse"
    #define STRING_BED                    "Heizbett"
    #define STRING_CHAMBER                "Kammer"
    #define STRING_FAN                    "Lüfter"

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

    #define STRING_5_SECONDS              "5 Sek."
    #define STRING_10_SECONDS             "10 Sek."
    #define STRING_30_SECONDS             "30 Sek."
    #define STRING_60_SECONDS             "1 Min."
    #define STRING_120_SECONDS            "2 Min."
    #define STRING_300_SECONDS            "5 Min."

    // Colors
    #define STRING_WHITE                  "weiß"
    #define STRING_BLACK                  "schwarz"
    #define STRING_BLUE                   "blau"
    #define STRING_RED                    "rot"
    #define STRING_GREEN                  "grün"
    #define STRING_CYAN                   "cyan"
    #define STRING_YELLOW                 "gelb"
    #define STRING_BROWN                  "braun"
    #define STRING_GRAY                   "grau"
    #define STRING_ORANGE                 "orange"
    #define STRING_INDIGO                 "indigo"
    #define STRING_VIOLET                 "violet"
    #define STRING_MAGENTA                "magenta"
    #define STRING_PURPLE                 "lila"
    #define STRING_LIME                   "grüngelb"
    #define STRING_DARKBLUE               "dunkelblau"
    #define STRING_DARKGREEN              "dunkelgrün"
    #define STRING_DARKGRAY               "dunkelgrau"

    // Menus
    #define STRING_HEAT                   "Heizen"
    #define STRING_MOVE                   "Verfahren"
    #define STRING_HOME                   "Grundst.fahrt"
    #define STRING_PRINT                  "Drucken"
    #define STRING_EXTRUDE                "Extruder"
    #define STRING_SETTINGS               "Parameter"
    #define STRING_SCREEN_SETTINGS        "Bildschirm"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Töne"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "Drucker"
    #define STRING_PARAMETER_SETTINGS     "Parameter"
    #define STRING_FEATURE_SETTINGS       "Andere"
    #define STRING_CONNECTION_SETTINGS    "Verbindung"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "Baudrate"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "LED Farbe"
    #define STRING_RGB_OFF                "LED aus"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "Leveln"
    #define STRING_POINT_1                "Punkt 1"
    #define STRING_POINT_2                "Punkt 2"
    #define STRING_POINT_3                "Punkt 3"
    #define STRING_POINT_4                "Punkt 4"
    #define STRING_POINT_5                "Punkt 5"
    #define STRING_BED_LEVELING           "Vermessen"
    #define STRING_BL_COMPLETE            "Bett-Vermessung ausgeführt."
    #define STRING_BL_SMART_FILL          "Fehlende Messpunkte wurden berechent.\n\nBitte speichern!"
    #define STRING_BL_ENABLE              "BL: an"
    #define STRING_BL_DISABLE             "BL: aus"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Bett Level (Raster)"
    #define STRING_ABL_SETTINGS           "Bett Level (auto)"
    #define STRING_ABL_SETTINGS_BBL       "Bett Level (bilinear)"
    #define STRING_ABL_SETTINGS_UBL       "Bett Level (Unified)"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "im Slot speichern"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "aus Slot laden"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Mesh im EEPROM speichern? (laden nach Neustart)"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_P_OFFSET               "P Versatz"
    #define STRING_H_OFFSET               "H Versatz"
    #define STRING_DISTANCE               "Abstand"
    #define STRING_LOAD_UNLOAD            "Laden/Entladen"
    #define STRING_LOAD_UNLOAD_SHORT      "(ent)laden"
    #define STRING_TOUCHSCREEN_ADJUST     "TSC kalib."
    #define STRING_MORE                   "Mehr"
    #define STRING_SCREEN_INFO            "Info"
    #define STRING_BG_COLOR               "Hintergrundfarbe"
    #define STRING_FONT_COLOR             "Schriftfarbe"
    #define STRING_PERCENTAGE             "Prozent"
    #define STRING_PERCENTAGE_SPEED       "Geschw."
    #define STRING_PERCENTAGE_FLOW        "Fluss"
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
    #define STRING_ADJUST_TITLE           "Touchscreen kalibrieren"
    #define STRING_ADJUST_INFO            "Roten Punkt antippen"
    #define STRING_ADJUST_OK              "Erfolgreich kalibriert!"
    #define STRING_ADJUST_FAILED          "Kalibrierung fehlgeschlagen!\nErneut versuchen?"
    #define STRING_UNIFIEDMOVE            "Bewegung"
    #define STRING_UNIFIEDHEAT            "Heiz.Lüft."
    #define STRING_TOUCH_TO_EXIT          "Zum Verlassen, Bildschirm berühren."
    #define STRING_MAINMENU               "Menü"
    #define STRING_LEVELING_EDGE_DISTANCE "Bettecken-Abstand"
    #define STRING_TUNING                 "Justage"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID autotune"
    #define STRING_PID_START_INFO         "PID autotune dauert einige Zeit.\nWeitermachen?"
    #define STRING_PID_START_INFO_2       "PID autotune läuft!"
    #define STRING_PID_START_INFO_3       "Berühren Sie den Bildschirm erst nach Fertigstellung (grüne LED)!"
    #define STRING_TUNE_EXTRUDER          "Schritte"
    #define STRING_TUNE_EXT_EXTRUDE_100   "100mm ext."
    #define STRING_TUNE_EXT_TEMP          "Düsentemperatur"
    #define STRING_TUNE_EXT_MARK120MM     "Filament 120 mm über Einlass markieren,\ndann '%s' drücken & nach Extrusion\nerneut messen."
    #define STRING_TUNE_EXT_HEATOFF       "Heizung abschalten?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "E-Schritte einstellen"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Neue E-Schritte gespeichert! Bitte auch im EEPROM speichern.\nNeuer Wert: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Restlänge:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "alte E-Schritte: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "neue E-Schritte: %0.2f"
    #define STRING_NOTIFICATIONS          "Benachrichtigungen"
    #define STRING_MESH_EDITOR            "Mesh edit."
    #define STRING_MESH_TUNER             "Mesh anp."
    #define STRING_CASE_LIGHT             "Bauraumbeleuchtung"
    #define STRING_LOAD_STARTED           "Lade Filament.\nBitte warten, bis der Vorgang beendet ist."
    #define STRING_UNLOAD_STARTED         "Entlade Filament.\nBitte warten, bis der Vorgang beendet ist."
    #define STRING_HEATERS_ON             "Heizung noch aktiv.\nSoll das Heizen beendet werden?"
    #define STRING_PRINT_FINISHED         "Druck beendet!"
    #define STRING_MAIN_SCREEN            "Hauptmenü"
    #define STRING_PREVIOUS_PRINT_DATA    "Info"
    #define STRING_PRINT_TIME             "Druck Zeit: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nFilament Länge: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nFilament Gewicht: %1.2fg"
    #define STRING_FILAMENT_COST          "\nFilament Kosten: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nFilament Daten nicht verfügbar."
    #define STRING_CLICK_FOR_MORE         "Klick für Statistik"
    #define STRING_EXT_TEMPLOW            "Temperatur der Düse liegt unter dem Minimum (%d℃)."
    #define STRING_HEAT_HOTEND            "Heize Düse auf %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Temperatur der Düse liegt unter\nder gewünschten Temperatur (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Bitte warten, bis Temperatur erreicht."
    #define STRING_Z_ALIGN                "Z ausr."
    #define STRING_MACROS                 "Makros"
    #define STRING_MESH_VALID             "Mesh Validierung"
    #define STRING_CONNECT_PROBE          "Bitte Sensor anschließen, bevor der Vorgang gestartet wird. Danach bitte Sensor wieder trennen."
    #define STRING_DISCONNECT_PROBE       "Bitte sicherstellen, dass vor Nutzung dieser Funktion der Sensor getrennt wurde."
    #define STRING_CALIBRATION            "Kalibrierung"

#endif
