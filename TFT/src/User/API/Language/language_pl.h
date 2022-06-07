#ifndef _LANGUAGE_PL_H_
#define _LANGUAGE_PL_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_LANGUAGE               "Polski"
    #define STRING_EMULATED_M600          "Emulowane M600"
    #define STRING_EMULATED_M109_M190     "Emulowane M109 / M190"
    #define STRING_EVENT_LED              "Event LED"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "Obrót"
    #define STRING_ACK_NOTIFICATION       "Styl powiadom. ACK"
    #define STRING_FILES_SORT_BY          "Sortuj pliki według"
    #define STRING_FILES_LIST_MODE        "Tryb listy plików"
    #define STRING_FILENAME_EXTENSION     "Show filename extension"
    #define STRING_FAN_SPEED_PERCENTAGE   "Prędk. wentyl. w procent."
    #define STRING_PERSISTENT_INFO        "Trwałe informac. o stanie"
    #define STRING_TERMINAL_ACK           "Pokaż ACK w terminalu"
    #define STRING_SERIAL_ALWAYS_ON       "Szeregowy zawsze włączony"
    #define STRING_MARLIN_FULLSCREEN      "Pełnoekranowy tryb Marlin"
    #define STRING_MARLIN_SHOW_TITLE      "Wyśw. tytułu trybu Marlin"
    #define STRING_MARLIN_TYPE            "Typ trybu Marlin"
    #define STRING_MOVE_SPEED             "Prędkość ruchu(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto zap./odcz. poziomow."
    #define STRING_PROBING_Z_OFFSET       "Sondow. z przesunięciem Z"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Autowyrównanie króków Z"
    #define STRING_PS_AUTO_SHUTDOWN       "Automatyczne wyłącz."
    #define STRING_FIL_RUNOUT             "Sensor filamentu"
    #define STRING_PL_RECOVERY            "Przywr. po utracie zasil."
    #define STRING_PL_RECOVERY_HOME       "Punkt baz. po utracie zas."
    #define STRING_BTT_MINI_UPS           "Obsługa BTT UPS"
    #define STRING_TOUCH_SOUND            "Dźwięki dotyku"
    #define STRING_TOAST_SOUND            "Powiadomienia o nagrzaniu"
    #define STRING_ALERT_SOUND            "Wyskak. okienka i alarmy"
    #define STRING_HEATER_SOUND           "Powiadomienia grzałki"
    #define STRING_LCD_BRIGHTNESS         "Jasność"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Jasn. w stanie bezcz."
    #define STRING_LCD_IDLE_TIME          "Czas przej. do bezcz."
    #define STRING_LCD_LOCK_ON_IDLE       "Blok. LCD na bezczynności"
    #define STRING_LED_ALWAYS_ON          "LED always ON"
    #define STRING_KNOB_LED_COLOR         "Kolor pokrętła LED"
    #define STRING_KNOB_LED_IDLE          "Dioda LED pokrętła w stanie bezczynności"
    #define STRING_START_GCODE_ENABLED    "Początkowy Gcode"
    #define STRING_END_GCODE_ENABLED      "Końcowy Gcode"
    #define STRING_CANCEL_GCODE_ENABLED   "Anuluj Gcode"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Kroki na mm"
    #define STRING_FILAMENT_SETTING       "Średnica filamentu"
    #define STRING_MAXACCELERATION        "Maksymalna akceleracja"
    #define STRING_MAXFEEDRATE            "Maksymalna prędkość posuwu"
    #define STRING_ACCELERATION           "Akceleracja"
    #define STRING_JERK                   "Szarpnięcie"
    #define STRING_JUNCTION_DEVIATION     "Odchylenie węzła"
    #define STRING_HOME_OFFSET            "Przes. pozycji baz."
    #define STRING_FWRETRACT              "Retrakcja FW"
    #define STRING_FWRECOVER              "Przywracanie retrakcji FW"
    #define STRING_RETRACT_AUTO           "Automatyczna retrakcja FW"
    #define STRING_HOTEND_OFFSET          "Przesunięcie 2. dyszy"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Konfiguracja delta"
    #define STRING_DELTA_TOWER_ANGLE      "Trymowanie kąta wieży"
    #define STRING_DELTA_DIAGONAL_ROD     "Diagonal Rod Trim"
    #define STRING_DELTA_ENDSTOP          "Regulacje krańców"
    #define STRING_PROBE_OFFSET           "Przesunięcie sondy"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Prąd sterownika (mA)"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_BUMP_SENSITIVITY       "Czułość TMC na uderzenie"
    #define STRING_MBL_OFFSET             "Przesunięcie MBL"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Akceleracja drukowania"
    #define STRING_RETRACT_ACCELERATION   "Akceleracja wycofania"
    #define STRING_TRAVEL_ACCELERATION    "Akceleracja podróży"
    #define STRING_RETRACT_LENGTH         "Długość wycofania"
    #define STRING_RETRACT_SWAP_LENGTH    "Długość wymiany wycofania"
    #define STRING_RETRACT_FEEDRATE       "Prędkość posuwu wycofania"
    #define STRING_RETRACT_Z_LIFT         "Podnieś Z przy wycofaniu"
    #define STRING_RECOVER_LENGTH         "Dodatkowa długość odzyskiwania"
    #define STRING_SWAP_RECOVER_LENGTH    "Dodatkowa długość wymiany odzyskiwania"
    #define STRING_RECOVER_FEEDRATE       "Prędkość posuwu odzyskiwania"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Prędkość posuwu wymiany odzyskiwania"

    // Save / Load
    #define STRING_SAVE                   "Zapisz"
    #define STRING_RESTORE                "Przywróć"
    #define STRING_RESET                  "Resetuj"
    #define STRING_EEPROM_SAVE_INFO       "Zapisać ustawienia drukarki w EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Przywrócić ustawienia z EEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Zresetować EEPROM do fabrycznych ustawień drukarki?"
    #define STRING_SETTINGS_SAVE          "Zapisz ustawienia"
    #define STRING_SETTINGS_RESTORE       "Przywróć ustawienia"
    #define STRING_SETTINGS_RESET         "Przywróć domyślne ustawienia"
    #define STRING_SETTINGS_RESET_INFO    "Zresetować wszystkie ustawienia do wartości domyślnych?"
    #define STRING_SETTINGS_RESET_DONE    "Zresetowanie wszystkich ustawień zakończone pomyślnie. Proszę zrestartować urządzenie."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Strona w górę"
    #define STRING_PAGE_DOWN              "Strona w dół"
    #define STRING_UP                     "W górę"
    #define STRING_DOWN                   "W dół"
    #define STRING_NEXT                   "Dalej"
    #define STRING_BACK                   "Wstecz"

    // Value Buttons
    #define STRING_INC                    "Zwiększ"
    #define STRING_DEC                    "Zmniejsz"
    #define STRING_LOAD                   "Wsuń"
    #define STRING_UNLOAD                 "Wysuń"
    #define STRING_ON                     "Włącz"
    #define STRING_OFF                    "Wyłącz"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Wolno"
    #define STRING_NORMAL                 "Normalna"
    #define STRING_FAST                   "Szybko"
    #define STRING_ZERO                   "Zero"
    #define STRING_HALF                   "Połowa"
    #define STRING_FULL                   "Maksimum"
    #define STRING_CUSTOM                 "Niestand."
    #define STRING_CLEAR                  "Wyczyść"
    #define STRING_DEFAULT                "Domyślne"

    // Action Buttons
    #define STRING_START                  "Zacznij"
    #define STRING_STOP                   "Zatrzymaj"
    #define STRING_PAUSE                  "Wstrzymaj"
    #define STRING_RESUME                 "Wznów"
    #define STRING_INIT                   "Inicjuj"
    #define STRING_DISCONNECT             "Odłącz"
    #define STRING_SHUT_DOWN              "Zamknij"
    #define STRING_FORCE_SHUT_DOWN        "Wymuś zamknięcie"
    #define STRING_EMERGENCYSTOP          "STOP!"
    #define STRING_PREHEAT                "Podgrzej"
    #define STRING_PREHEAT_BOTH           "Podgrz.oba"
    #define STRING_COOLDOWN               "Ostudź"

    // Dialog Buttons
    #define STRING_CONFIRM                "Potwierdź"
    #define STRING_CANCEL                 "Anuluj"
    #define STRING_WARNING                "Ostrzeżenie"
    #define STRING_CONTINUE               "Kontynuuj"
    #define STRING_CONFIRMATION           "Jesteś Pewien?"

    // Process Status
    #define STRING_STATUS                 "Status"
    #define STRING_READY                  "Gotowe"
    #define STRING_BUSY                   "Trwa przetwarzanie, proszę czekać..."
    #define STRING_LOADING                "Wczytywanie..."
    #define STRING_UNCONNECTED            "Drukarka nie podłączona!"
    #define STRING_LISTENING              "TFT w trybie pasywnym!"

    // Process Info
    #define STRING_INFO                   "Informacje"
    #define STRING_INVALID_VALUE          "Niewłaściwa wartość(i)"
    #define STRING_TIMEOUT_REACHED        "Osiągnięto limit czasu!"
    #define STRING_DISCONNECT_INFO        "Teraz możesz sterować drukarką/nza pomocą komputera!"
    #define STRING_SHUTTING_DOWN          "Zamykanie..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Poczekaj, aż temperatura głowicy będzie niższa niż %d℃"
    #define STRING_POWER_FAILED           "Kontynuować drukowanie?"
    #define STRING_PROCESS_RUNNING        "Przetwarzanie uruchomione!"
    #define STRING_PROCESS_COMPLETED      "Zakończono przetwarzanie!"
    #define STRING_PROCESS_ABORTED        "Przerwano przetwarzanie!"

    // TFT Media, Onboard Media, Filament Runout Process Commands / Status / Info
    #define STRING_TFT_SD                 "SD TFT"
    #define STRING_TFT_SD_READ_ERROR      "Błąd odczytu karty SD wyświetlacza!"
    #define STRING_TFT_SD_INSERTED        "Karta włożona!"
    #define STRING_TFT_SD_REMOVED         "Karta wyjęta!"
    #define STRING_TFT_SD_NOT_DETECTED    "No SD Card detected."
    #define STRING_TFT_USB                "USB TFT"
    #define STRING_TFT_USB_READ_ERROR     "Błąd odczytu dysku USB!"
    #define STRING_TFT_USB_INSERTED       "Dysk USB włożony!"
    #define STRING_TFT_USB_REMOVED        "Dysk USB wyjęty!"
    #define STRING_TFT_USB_NOT_DETECTED   "No USB Disk detected."
    #define STRING_ONBOARD_SD             "OnboardSD"
    #define STRING_ONBOARD_USB            "OnboardUSB"
    #define STRING_ONBOARD_SD_READ_ERROR  "Błąd odczytu karta!"
    #define STRING_FILAMENT_RUNOUT        "Skończył się filament!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Odbl.wsz."
    #define STRING_XY_UNLOCK              "Odbl. XY"

    #define STRING_START_PRINT            "Rozpocząć drukowanie:\n%s?"
    #define STRING_STOP_PRINT             "Zatrzymać drukowanie?"
    #define STRING_IS_PAUSE               "Operacja niedostępna w trakcie drukowania.\n\nWstrzymać drukowanie?"
    #define STRING_M0_PAUSE               "Zatrzymane przez komendę M0"

    #define STRING_TEST                   "Testuj"
    #define STRING_DEPLOY                 "Rozlokuj"
    #define STRING_STOW                   "Schowaj"
    #define STRING_REPEAT                 "Powtórz"
    #define STRING_HS_ON                  "HS: On"
    #define STRING_HS_OFF                 "HS: Off"

    // Printer Tools
    #define STRING_NOZZLE                 "Dysza"
    #define STRING_BED                    "Stół"
    #define STRING_CHAMBER                "Komora"
    #define STRING_FAN                    "Wentylator"

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
    #define STRING_30_SECONDS             "30 sek."
    #define STRING_60_SECONDS             "1 min."
    #define STRING_120_SECONDS            "2 min."
    #define STRING_300_SECONDS            "5 min."

    // Colors
    #define STRING_WHITE                  "Biały"
    #define STRING_BLACK                  "Czarny"
    #define STRING_BLUE                   "Niebieski"
    #define STRING_RED                    "Czerwony"
    #define STRING_GREEN                  "Zielony"
    #define STRING_CYAN                   "Turkusowy"
    #define STRING_YELLOW                 "Żółty"
    #define STRING_BROWN                  "Brązowy"
    #define STRING_GRAY                   "Szary"
    #define STRING_ORANGE                 "Pomarańczowy"
    #define STRING_INDIGO                 "Indygo"
    #define STRING_VIOLET                 "Fioletowy"
    #define STRING_MAGENTA                "Karmazynowy"
    #define STRING_PURPLE                 "Purpurowy"
    #define STRING_LIME                   "Żółto-zielony"
    #define STRING_DARKBLUE               "Ciemnoniebieski"
    #define STRING_DARKGREEN              "Ciemnozielony"
    #define STRING_DARKGRAY               "Ciemnoszary"

    // Menus
    #define STRING_HEAT                   "Grzałka"
    #define STRING_MOVE                   "Przesuw"
    #define STRING_HOME                   "Punkt baz."
    #define STRING_PRINT                  "Drukuj"
    #define STRING_EXTRUDE                "Ekstruder"
    #define STRING_SETTINGS               "Ustawienia"
    #define STRING_SCREEN_SETTINGS        "Ekran"
    #define STRING_UI_SETTINGS            "IU"
    #define STRING_SOUND                  "Dźwięk"
    #define STRING_MARLIN_MODE_SETTINGS   "Tr. Marlin"
    #define STRING_MACHINE_SETTINGS       "Drukarka"
    #define STRING_PARAMETER_SETTINGS     "Ustawienia"
    #define STRING_FEATURE_SETTINGS       "Opcje"
    #define STRING_CONNECTION_SETTINGS    "Połączenie"
    #define STRING_SERIAL_PORTS           "Porty"
    #define STRING_BAUDRATE               "Szybkość transmisji"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "LED"
    #define STRING_RGB_OFF                "Wyłącz LED"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "Poziomow."
    #define STRING_POINT_1                "Punkt 1"
    #define STRING_POINT_2                "Punkt 2"
    #define STRING_POINT_3                "Punkt 3"
    #define STRING_POINT_4                "Punkt 4"
    #define STRING_POINT_5                "Punkt 5"
    #define STRING_BED_LEVELING           "Poziomowanie stołu"
    #define STRING_BL_COMPLETE            "Poziomowanie łóżka zakończone"
    #define STRING_BL_SMART_FILL          "Brakujące punkty sondy zostały sprytnie uzupełnione.\n\nUwaga: Pamiętaj, aby zapisać!"
    #define STRING_BL_ENABLE              "BL: wł."
    #define STRING_BL_DISABLE             "BL: wył."
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Poziomowanie siatki stołu"
    #define STRING_ABL_SETTINGS           "Automatyczne poziomowanie stołu"
    #define STRING_ABL_SETTINGS_BBL       "Dwuliniowe poziomowanie stołu"
    #define STRING_ABL_SETTINGS_UBL       "Ujednolicone poziomowanie stołu"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Zapisz w wolnym miejscu"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Wczytaj z miejsca"
    #define STRING_ABL_SLOT0              "Wolne miejsce 0"
    #define STRING_ABL_SLOT1              "Wolne miejsce 1"
    #define STRING_ABL_SLOT2              "Wolne miejsce 2"
    #define STRING_ABL_SLOT3              "Wolne miejsce 3"
    #define STRING_ABL_SLOT_EEPROM        "Zapisać siatkę do EEPROM aby wczytać po restarcie?"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_LEVEL_CORNER_INFO      "Edge distance is below probe offset X/Y and some target points could be not reachable.\nDo you want to use a safe edge distance?"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Dystans"
    #define STRING_LOAD_UNLOAD            "Wsuń / Wysuń"
    #define STRING_LOAD_UNLOAD_SHORT      "(Ws/Wy)suń"
    #define STRING_TOUCHSCREEN_ADJUST     "Kalibr."
    #define STRING_MORE                   "Więcej"
    #define STRING_SCREEN_INFO            "Informacje"
    #define STRING_BG_COLOR               "Kolor tła"
    #define STRING_FONT_COLOR             "Kolor czcionki"
    #define STRING_PERCENTAGE             "Procent"
    #define STRING_PERCENTAGE_SPEED       "Prędkość"
    #define STRING_PERCENTAGE_FLOW        "Przepływ"
    #define STRING_BABYSTEP               "Mikroreg."
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Kalibracja ekranu dotykowego"
    #define STRING_ADJUST_INFO            "Proszę dotykać czerwoną kropkę"
    #define STRING_ADJUST_OK              "Kalibracja powiodła się"
    #define STRING_ADJUST_FAILED          "Kalibracja nie powiodła się, spróbuj ponownie"
    #define STRING_UNIFIEDMOVE            "Ruch"
    #define STRING_UNIFIEDHEAT            "Grz./Went."
    #define STRING_TOUCH_TO_EXIT          "Dotknij gdziekolwiek, aby wyjść"
    #define STRING_MAINMENU               "Menu"
    #define STRING_LEVELING_EDGE_DISTANCE "Odległość od krawędzi stołu"
    #define STRING_TUNING                 "Dostrajanie"
    #define STRING_MPC                    "MPC"
    #define STRING_MPC_TITLE              "Autodostrajanie MPC"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "Autodostrajanie PID"
    #define STRING_TUNE_START_INFO        "Autodostrajanie może zająć trochę czasu do zakończenia.\nKontynuować?"
    #define STRING_TUNE_START_INFO_2      "Trwa autostrojenie!"
    #define STRING_TUNE_START_INFO_3      "Nie dotykaj ekranu aż do zakończenia (zielona dioda LED WŁĄCZONA)!"
    #define STRING_TUNE_EXTRUDER          "Kroki"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Wsuń 10cm"
    #define STRING_TUNE_EXT_TEMP          "Dostrajanie wytłaczarki | Grzanie"
    #define STRING_TUNE_EXT_MARK120MM     "Zaznacz 120 mm na filamencie.\nNaciśnij '%s' gdy będziesz gotowy.\nZmierz pozostałą długość po wytłoczeniu."
    #define STRING_TUNE_EXT_HEATOFF       "Wyłączyć grzałkę?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Dostosuj kroki E"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Nowe kroki E zastosowane.\nNie zapomnij zapisać to w EEPROM.\nNowa wartość: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Pozostała długość:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Stare kroki E: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Nowe kroki E: %0.2f"
    #define STRING_NOTIFICATIONS          "Powiadomienia"
    #define STRING_MESH_EDITOR            "Edycja siatki"
    #define STRING_MESH_TUNER             "Dostrajanie siatki"
    #define STRING_CASE_LIGHT             "Oświetlenie obudowy"
    #define STRING_LOAD_STARTED           "Ładowanie filamentu.\nProszę czekać, aż proces zostanie ukończony."
    #define STRING_UNLOAD_STARTED         "Wycofywanie filamentu.\nProszę czekać, aż proces zostanie ukończony."
    #define STRING_HEATERS_ON             "Niektóre grzałki są nadal WŁĄCZONE.\nCzy chcesz je wyłączyć?"
    #define STRING_PRINT_FINISHED         "Drukowanie zakończone"
    #define STRING_MAIN_SCREEN            "Główny ekran"
    #define STRING_PREVIOUS_PRINT_DATA    "Przegląd"
    #define STRING_PRINT_TIME             "Czas drukowania: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nDługość filamentu: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nWaga filamentu: %1.2fg"
    #define STRING_FILAMENT_COST          "\nKoszt filamentu: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nBrak danych o filamencie."
    #define STRING_CLICK_FOR_MORE         "Kliknij, aby zobaczyć podsumowanie"
    #define STRING_EXT_TEMPLOW            "Temperatura głowicy jest poniżej minimalnej temperatury (%d℃)."
    #define STRING_HEAT_HOTEND            "Podgrzać głowicę do %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Temperatura głowicy jest poniżej zadanej temperatury (%d℃)"
    #define STRING_WAIT_HEAT_UP           "Poczekaj, aż się nagrzeje."
    #define STRING_Z_ALIGN                "Wyrównaj Z"
    #define STRING_MACROS                 "Makra"
    #define STRING_MESH_VALID             "Sprawdzanie siatki"
    #define STRING_CONNECT_PROBE          "Podłącz sondę przed rozpoczęciem procesu. Pamiętaj, aby później ją odłączyć."
    #define STRING_DISCONNECT_PROBE       "Upewnij się, że sonda została odłączona przed użyciem tej funkcji."
    #define STRING_CALIBRATION            "Kalibrowanie"

#endif
