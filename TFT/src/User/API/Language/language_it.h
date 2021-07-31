#ifndef _LANGUAGE_IT_H_
#define _LANGUAGE_IT_H_

    // config.ini Parameter Settings / Feature Settings
    #define STRING_BAUDRATE               "Baudrate"
    #define STRING_LANGUAGE               "Italiano"
    #define STRING_ROTATE_UI              "Ruota"
    #define STRING_TERMINAL_ACK           "Mostra ACK in console"
    #define STRING_PERSISTENT_INFO        "Mostra barra di stato"
    #define STRING_FAN_SPEED_PERCENT      "Ventola in percentuale"
    #define STRING_FILE_LIST_MODE         "File in modalità lista"
    #define STRING_FILE_SORT_BY           "Ordina file per"
    #define STRING_ACK_NOTIFICATION       "Tipo di popup"
    #define STRING_EMULATE_M600           "Emula M600"
    #define STRING_SERIAL_ALWAYS_ON       "Seriale sempre accesa"
    #define STRING_MARLIN_FULLSCREEN      "Marlin a schermo intero"
    #define STRING_MARLIN_SHOW_TITLE      "Mostra titolo in Marlin"
    #define STRING_MARLIN_TYPE            "Modalità Marlin"
    #define STRING_MOVE_SPEED             "Vel. movimenti(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto salva/carica liv."
    #define STRING_XY_OFFSET_PROBING      "Supp. probing offset XY"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Auto allineamento asse Z"
    #define STRING_PS_ON                  "Auto spegnimento"
    #define STRING_FIL_RUNOUT             "Sensore filamento"
    #define STRING_PL_RECOVERY_EN         "Power loss recovery"
    #define STRING_PL_RECOVERY_HOME       "Power loss rec. homing"
    #define STRING_BTT_MINI_UPS           "Supporto a BTT UPS"
    #define STRING_TOUCH_SOUND            "Suono al tocco"
    #define STRING_TOAST_SOUND            "Notifiche toast"
    #define STRING_ALERT_SOUND            "Popup e avvisi"
    #define STRING_HEATER_SOUND           "Notifica temperatura"
    #define STRING_KNOB_LED_COLOR         "LED manopola "
    #define STRING_KNOB_LED_IDLE          "LED manopola spento"
    #define STRING_LCD_BRIGHTNESS         "Luminosità"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Luminosità in idle"
    #define STRING_LCD_IDLE_DELAY         "Timer luminosità"
    #define STRING_BLOCK_TOUCH_ON_IDLE    "Block touch on idle"
    #define STRING_START_GCODE_ENABLED    "Inserisci start gcode"
    #define STRING_END_GCODE_ENABLED      "Inserisci end gcode"
    #define STRING_CANCEL_GCODE_ENABLED   "Script canc. stampa"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Step per mm"
    #define STRING_FILAMENT_SETTING       "Diametro filamento"
    #define STRING_MAXACCELERATION        "Accelerazione massima"
    #define STRING_MAXFEEDRATE            "Feedrate massimo"
    #define STRING_ACCELERATION           "Accelerazione"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction deviation"
    #define STRING_HOME_OFFSET            "Home offset"
    #define STRING_FWRETRACT              "Retrazione firmware"
    #define STRING_FWRECOVER              "Retrazione firmware rec."
    #define STRING_RETRACT_AUTO           "Retrazione firmware"
    #define STRING_HOTEND_OFFSET          "Offset secondo hotend"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "Probe offset"
    #define STRING_LIN_ADVANCE            "Linear advance"
    #define STRING_CURRENT_SETTING        "Corrente driver (mA)"
    #define STRING_HYBRID_THRESHOLD       "Hybrid threshold"
    #define STRING_BUMP_SENSITIVITY       "Sens.sensorless homing"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Acc. in stampa"
    #define STRING_RETRACT_ACCELERATION   "Acc. retrazione"
    #define STRING_TRAVEL_ACCELERATION    "Acc. spostamenti"
    #define STRING_RETRACT_LENGTH         "Lunghezza retrazione"
    #define STRING_RETRACT_SWAP_LENGTH    "Lunghezza retr. scambio"
    #define STRING_RETRACT_FEEDRATE       "Feedrate retrazione"
    #define STRING_RETRACT_Z_LIFT         "Alza Z in retrazione"
    #define STRING_RECOVER_LENGTH         "Lung. di recupero extra"
    #define STRING_SWAP_RECOVER_LENGTH    "Lung. di recupero scambio extra"
    #define STRING_RECOVER_FEEDRATE       "Feedrate recupero"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Rec.feedrate di scambio"

    // Save / Load
    #define STRING_SAVE                   "Salva"
    #define STRING_RESTORE                "Ripristina"
    #define STRING_RESET                  "Reset"
    #define STRING_EEPROM_SAVE_INFO       "Salvo le impostazioni nella EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Ricarico le impostazioni dalla EEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Resetto la EEPROM ai valori di fabbrica?"
    #define STRING_SETTINGS_SAVE          "Salva impostazioni"
    #define STRING_SETTINGS_RESTORE       "Ripristina impostazioni"
    #define STRING_SETTINGS_RESET         "Resetta impostazioni"
    #define STRING_SETTINGS_RESET_INFO    "Resettare tutte le impostazioni ai valori di default?"
    #define STRING_SETTINGS_RESET_DONE    "Reset delle impostazioni avvenuto con successo.\nRiavviare la stampante prego."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Pagina sù"
    #define STRING_PAGE_DOWN              "Pagina giù"
    #define STRING_UP                     "Sù"
    #define STRING_DOWN                   "Giù"
    #define STRING_NEXT                   "Prossimo"
    #define STRING_BACK                   "Indietro"

    // Value Buttons
    #define STRING_INC                    "Incrementa"
    #define STRING_DEC                    "Decrementa"
    #define STRING_LOAD                   "Carica"
    #define STRING_UNLOAD                 "Scarica"
    #define STRING_ON                     "Acceso"
    #define STRING_OFF                    "Spento"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Lento"
    #define STRING_NORMAL                 "Normale"
    #define STRING_FAST                   "Veloce"
    #define STRING_ZERO                   "Zero"
    #define STRING_HALF                   "50%"
    #define STRING_FULL                   "100%"
    #define STRING_CUSTOM                 "Macro"
    #define STRING_CLEAR                  "Canc."
    #define STRING_DEFAULT                "Predefinito"

    // Action Buttons
    #define STRING_START                  "Inizia"
    #define STRING_STOP                   "Stop"
    #define STRING_PAUSE                  "Pausa"
    #define STRING_RESUME                 "Riprendi"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Scollega"
    #define STRING_SHUT_DOWN              "Spegni"
    #define STRING_FORCE_SHUT_DOWN        "Forza spegnimento"
    #define STRING_EMERGENCYSTOP          "Emergenza"
    #define STRING_PREHEAT                "Preriscalda"
    #define STRING_PREHEAT_BOTH           "Entrambi"
    #define STRING_COOLDOWN               "Raffredda"

    // Dialog Buttons
    #define STRING_CONFIRM                "Conferma"
    #define STRING_CANCEL                 "Annulla"
    #define STRING_WARNING                "Attenzione"
    #define STRING_CONTINUE               "Continua"
    #define STRING_CONFIRMATION           "Sei sicuro?"

    // Process Status
    #define STRING_STATUS                 "Stato"
    #define STRING_READY                  "Pronta"
    #define STRING_BUSY                   "Stampante occupata, attendere..."
    #define STRING_LOADING                "Caricamento..."
    #define STRING_UNCONNECTED            "Stampante non connessa"

    // Process Info
    #define STRING_INFO                   "Info"
    #define STRING_INVALID_VALUE          "Valori forniti non validi!"
    #define STRING_TIMEOUT_REACHED        "Timeout raggiunto!"
    #define STRING_DISCONNECT_INFO        "Puoi controllare la stampante dal PC!"
    #define STRING_SHUTTING_DOWN          "Spegnimento..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Attendere che la temperatura dell'hotend sia inferiore a %d℃" // Wait for the temperature of hotend to be lower than 48℃
    #define STRING_POWER_FAILED           "Vuoi continuare la stampa?"
    #define STRING_PROCESS_RUNNING        "Processo in corso! Attendere il completamento"
    #define STRING_PROCESS_COMPLETED      "Processo completato!"
    #define STRING_PROCESS_ABORTED        "Processo annullato!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD schermo"
    #define STRING_READ_TFTSD_ERROR       "Errore lettura SD!"
    #define STRING_TFTSD_INSERTED         "SD inserita"
    #define STRING_TFTSD_REMOVED          "SD rimossa"
    #define STRING_U_DISK                 "Pen drive"
    #define STRING_READ_U_DISK_ERROR      "Errore lettura pen drive"
    #define STRING_U_DISK_INSERTED        "Pen drive inserita!"
    #define STRING_U_DISK_REMOVED         "Pen drive rimossa!"
    #define STRING_ONBOARDSD              "SD su SKR"
    #define STRING_READ_ONBOARDSD_ERROR   "Errore lettura SD su SKR!"
    #define STRING_FILAMENT_RUNOUT        "Filamento finito!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Motori"
    #define STRING_XY_UNLOCK              "Sblocca XY"

    #define STRING_START_PRINT            "Inizio a stampare:\n%s?"
    #define STRING_STOP_PRINT             "Vuoi fermare la stampa?"
    #define STRING_IS_PAUSE               "Impossibile estrudere durante la stampa,\nvuoi interrompere?"
    #define STRING_M0_PAUSE               "Messa in pausa da comando M0"

    #define STRING_TEST                   "Test"
    #define STRING_DEPLOY                 "Estrai"
    #define STRING_STOW                   "Ritrai"
    #define STRING_REPEAT                 "Ripeti"

    // Printer Tools
    #define STRING_NOZZLE                 "Hotend"
    #define STRING_BED                    "Piatto ris."
    #define STRING_CHAMBER                "Camera"
    #define STRING_FAN                    "Ventola"

    #define STRING_BLTOUCH                "BLtouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1°"
    #define STRING_5_DEGREE               "5°"
    #define STRING_10_DEGREE              "10°"

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

    #define STRING_5_SECONDS              "5 sec."
    #define STRING_10_SECONDS             "10 sec."
    #define STRING_30_SECONDS             "30 sec."
    #define STRING_60_SECONDS             "1 min."
    #define STRING_120_SECONDS            "2 min."
    #define STRING_300_SECONDS            "5 min."

    // Colors
    #define STRING_WHITE                  "Bianco"
    #define STRING_BLACK                  "Nero"
    #define STRING_BLUE                   "Blu"
    #define STRING_RED                    "Rosso"
    #define STRING_GREEN                  "Verde"
    #define STRING_CYAN                   "Ciano"
    #define STRING_YELLOW                 "Giallo"
    #define STRING_BROWN                  "Marrone"
    #define STRING_GRAY                   "Grigio"
    #define STRING_ORANGE                 "Arancione"
    #define STRING_INDIGO                 "Indaco"
    #define STRING_VIOLET                 "Viola"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Viola"
    #define STRING_LIME                   "Lime"
    #define STRING_DARKBLUE               "Blu Scuro"
    #define STRING_DARKGREEN              "Verde Scuro"
    #define STRING_DARKGRAY               "Grigio Scuro"

    // Menus
    #define STRING_HEAT                   "Riscalda"
    #define STRING_MOVE                   "Muovi"
    #define STRING_HOME                   "Home"
    #define STRING_PRINT                  "Stampa"
    #define STRING_EXTRUDE                "Estrudi"
    #define STRING_SETTINGS               "Opzioni"
    #define STRING_SCREEN_SETTINGS        "Schermo"
    #define STRING_MACHINE_SETTINGS       "Stampante"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_FEATURE_SETTINGS       "Configura"
    #define STRING_SOUND                  "Suono"
    #define STRING_RGB_SETTINGS           "LED RGB"
    #define STRING_RGB_OFF                "Spegni"
    #define STRING_TERMINAL               "Console"
    #define STRING_LEVELING               "Calibra"
    #define STRING_POINT_1                "Punto 1"
    #define STRING_POINT_2                "Punto 2"
    #define STRING_POINT_3                "Punto 3"
    #define STRING_POINT_4                "Punto 4"
    #define STRING_POINT_5                "Punto 5"
    #define STRING_BED_LEVELING           "ABL"
    #define STRING_BL_COMPLETE            "Auto livellamento completato"
    #define STRING_BL_SMART_FILL          "Punti di rilevazione mancanti mesh ricostruita con funzione smart.\n\nNota: ricordati di salvare!"
    #define STRING_BL_ENABLE              "ABL: on"
    #define STRING_BL_DISABLE             "ABL: off"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh bed leveling"
    #define STRING_ABL_SETTINGS           "Auto bed leveling"
    #define STRING_ABL_SETTINGS_BBL       "ABL bilineare"
    #define STRING_ABL_SETTINGS_UBL       "ABL unificato"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Salva nello slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Carica lo slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Ricordo lo slot per il prossimo riavvio? (Salva in EEPROM)"
    #define STRING_ABL_Z                  "Z fade"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_P_OFFSET               "P offset"
    #define STRING_H_OFFSET               "H offset"
    #define STRING_DISTANCE               "Distanza"
    #define STRING_LOAD_UNLOAD            "Carica/scarica"
    #define STRING_LOAD_UNLOAD_SHORT      "Scarica"
    #define STRING_TOUCHSCREEN_ADJUST     "Calibra"
    #define STRING_MORE                   "Altro"
    #define STRING_SCREEN_INFO            "Info"
    #define STRING_BG_COLOR               "Colore sfondo"
    #define STRING_FONT_COLOR             "Colore font"
    #define STRING_PERCENTAGE             "Percentuale"
    #define STRING_PERCENTAGE_SPEED       "Velocità"
    #define STRING_PERCENTAGE_FLOW        "Flusso"
    #define STRING_BABYSTEP               "Babystep"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Calibrazione touch screen"
    #define STRING_ADJUST_INFO            "Premi sui punti rossi"
    #define STRING_ADJUST_OK              "Regolazione completata!"
    #define STRING_ADJUST_FAILED          "Regolazione fallita. Riprova!"
    #define STRING_UNIFIEDMOVE            "Movimento"
    #define STRING_UNIFIEDHEAT            "Risc/vent"
    #define STRING_TOUCH_TO_EXIT          "Tocca ovunque per uscire"
    #define STRING_MAINMENU               "Menù"
    #define STRING_PARAMETER_SETTING      "Parametri"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_LEVELING_EDGE_DISTANCE "Distanza dal bordo"
    #define STRING_TUNING                 "Regola"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "Autoregolazione PID"
    #define STRING_PID_START_INFO         "Partirà l'autoregolazione del PID. Può richiedere diversi minuti.\nContinuare?"
    #define STRING_PID_START_INFO_2       "Autoregolazione PID in corso!"
    #define STRING_PID_START_INFO_3       "NON TOCCARE lo schermo fino al completamento!"
    #define STRING_TUNE_EXTRUDER          "Step/mm E"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Estr. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Regolazione estr. | Scalda"
    #define STRING_TUNE_EXT_MARK120MM     "Fai un segno a 120mm sul filamento\nPremi '%s' quando sei pronto\nMisura la lunghezza mancante dopo l'estrusione"
    #define STRING_TUNE_EXT_HEATOFF       "Spegnere l'hotend?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Regola step/mm E"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Nuovi step/mm di E impostati!\nNon dimenticare di salvarli nellaEEPROM\nNuovo valore: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Lunghezza mancante:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Vecchi step/mm E: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Nuovi step/mm E: %0.2f"
    #define STRING_CONNECTION_SETTINGS    "Connessioni"
    #define STRING_NOTIFICATIONS          "Notifiche"
    #define STRING_MESH_EDITOR            "Mesh"
    #define STRING_MESH_TUNER             "Correggi mesh"
    #define STRING_CASE_LIGHT             "Luce"
    #define STRING_LOAD_STARTED           "Carico filamento in corso...\nNon sono possibili altre azioni fino al termine. Attendere prego."
    #define STRING_UNLOAD_STARTED         "Scarico filamento in corso...\nNon sono possibili altre azioni fino al termine. Attendere prego."
    #define STRING_HEATERS_ON             "Alcuni riscaldatori sono ancora accesi\nVuoi spegnerli?"
    #define STRING_PRINT_FINISHED         "   Stampa\n   ultimata."
    #define STRING_MAIN_SCREEN            "Principale"
    #define STRING_PREVIOUS_PRINT_DATA    "Ultimo lav."
    #define STRING_PRINT_TIME             "Durata stampa: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nLunghezza filamento: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nPeso filamento: %1.2fg"
    #define STRING_FILAMENT_COST          "\nCosto filamento: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nNessuna statistica del filamento."
    #define STRING_CLICK_FOR_MORE         "Clicca per riepilogo"
    #define STRING_EXT_TEMPLOW            "La temperatura dell'hotend è al di sotto della temperatura minima (%d℃)."
    #define STRING_HEAT_HOTEND            "Scaldo l'hotend a %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Hotend temperature is below\ndesired temperature (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Wait for it to heat up."
    #define STRING_Z_ALIGN                "Allinea Z"
    #define STRING_MACROS                 "Macro"
    #define STRING_MESH_VALID             "Validazione mesh"
    #define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
    #define STRING_CALIBRATION            "Calibration"

#endif
