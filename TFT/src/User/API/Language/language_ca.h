#ifndef _LANGUAGE_CA_H_
#define _LANGUAGE_CA_H_

    // config.ini Parameter Settings / Feature Settings
    #define STRING_STATUS_SCREEN          "Enable Status Screen"
    #define STRING_BAUDRATE               "Velocitat de transmissió"
    #define STRING_LANGUAGE               "Català"
    #define STRING_ROTATE_UI              "Rotar"
    #define STRING_TERMINAL_ACK           "Mostra ACK a la terminal"
    #define STRING_INVERT_X_AXIS          "Invertir eix X"
    #define STRING_INVERT_Y_AXIS          "Invertir eix Y"
    #define STRING_INVERT_Z_AXIS          "Invertir eix Z"
    #define STRING_PERSISTENT_INFO        "Informació d'estat persistent"
    #define STRING_FILE_LIST_MODE         "Mode de visualització de fitxers"
    #define STRING_ACK_NOTIFICATION       "ACK notification style"
    #define STRING_DEFAULT_MODE           "Default Mode"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_FULLSCREEN      "Mode Marlin a pantalla completa"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_HEATED_BED             "Heated Bed Support"
    #define STRING_HEATED_CHAMBER         "Heated Chamber Support"
    #define STRING_MOVE_SPEED             "Velocitat de moviment(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Save Load Leveling"
    #define STRING_TOUCHMI_SENSOR         "TouchMI"
    #define STRING_ONBOARD_SD_SUPPORT     "Onboard SD Card Support"
    #define STRING_M27_ALWAYS_ACTIVE      "M27 Always Active"
    #define STRING_LONG_FILENAME_SUPPORT  "Long File Names Support"
    #define STRING_FAN_SPEED_PERCENT      "Fan Speed As Percentage"
    #define STRING_XY_OFFSET_PROBING      "XY Offset Probing Support"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_ON                  "Apag. aut."
    #define STRING_PS_ON_ACTIVE_HIGH      "Power Supply Active HIGH"
    #define STRING_FIL_RUNOUT             "Sensor de filament"
    #define STRING_FIL_RUNOUT_INVERTING   "Inverted Filament Runout Logic"
    #define STRING_PL_RECOVERY_EN         "Recuperació de pèrdua d’energia"
    #define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "Touch sounds"
    #define STRING_TOAST_SOUND            "Toast Notifications"
    #define STRING_ALERT_SOUND            "Popups and Alerts"
    #define STRING_KNOB_LED_COLOR         "Perilla rotativa LED"
    #define STRING_KNOB_LED_IDLE          "Rotary Knob LED idle"
    #define STRING_LCD_BRIGHTNESS         "Lluminositat LCD"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Dim Lluminositat LCD"
    #define STRING_LCD_IDLE_DELAY         "Temporitzador inactiu LCD"
    #define STRING_START_GCODE_ENABLED    "Enviar Gcode inicial"
    #define STRING_END_GCODE_ENABLED      "Enviar Gcode final"
    #define STRING_CANCEL_GCODE_ENABLED   "Cancel · lar Gcode"

    // Machine Parameter Settings
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_PROBE_OFFSET           "Sonda Compensar"
    #define STRING_MBL_OFFSET             "MBL Offset"
    #define STRING_OFFSET_TOOL            "Offset 2nd Nozzle"
    #define STRING_STEPS_SETTING          "Passos per MM"
    #define STRING_CURRENT_SETTING        "Corrent del Driver (mA)"
    #define STRING_MAXFEEDRATE            "Max Feed Rate"
    #define STRING_MAXACCELERATION        "Max Acceleració"
    #define STRING_ACCELERATION           "Acceleració"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_BUMP_SENSITIVITY       "Sensibilitat al topall TMC"
    #define STRING_FWRETRACT              "Retracció de FW"
    #define STRING_FWRECOVER              "Recuperació de Retracció de FW"
    #define STRING_RETRACT_AUTO           "Auto Firmware Retract"
    #define STRING_LIN_ADVANCE            "Avanç Lineal"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_PRINT_ACCELERATION     "Acceleració Impressió"
    #define STRING_RETRACT_ACCELERATION   "Acceleració Retracció"
    #define STRING_TRAVEL_ACCELERATION    "Acceleració Viatge"
    #define STRING_RETRACT_LENGTH         "Longitud Retracció"
    #define STRING_RETRACT_SWAP_LENGTH    "Distància retracció intercanvi"
    #define STRING_RETRACT_FEEDRATE       "Velocitat Retracció"
    #define STRING_RETRACT_Z_LIFT         "Z aixecament a la retracció"
    #define STRING_RECOVER_LENGTH         "Distancia recuperació extra"
    #define STRING_SWAP_RECOVER_LENGTH    "Distancia recuperació intercanvi extra"
    #define STRING_RECOVER_FEEDRATE       "Velocitat recuperació"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Velocitat recuperació intercanvi"

    // Standard Parameter Values
    #define STRING_ON                     "ON"
    #define STRING_OFF                    "OFF"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW_SPEED             "Lent"
    #define STRING_NORMAL_SPEED           "Normal"
    #define STRING_FAST_SPEED             "Ràpid"

    // Save / Load
    #define STRING_SAVE                   "Gravar"
    #define STRING_RESTORE                "Restore"
    #define STRING_RESET                  "Reset"
    #define STRING_EEPROM_SAVE_INFO       "Desa la configuració de la impressora\na la EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Carregar la configuració de\nEEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Reset EEPROM to stock printer settings?"
    #define STRING_SETTINGS_SAVE          "Save settings"
    #define STRING_SETTINGS_RESTORE       "Restaura la configuració"
    #define STRING_SETTINGS_RESET         "Restableix la configuració"
    #define STRING_SETTINGS_RESET_INFO    "Restableix tota la configuració a\nvalors predeterminats?"
    #define STRING_SETTINGS_RESET_DONE    "Restableix tota la configuració\naconseguit.\nreinicieu el dispositiu."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Retrocedir"
    #define STRING_PAGE_DOWN              "Avançar"
    #define STRING_UP                     "Amunt"
    #define STRING_DOWN                   "Avall"
    #define STRING_NEXT                   "Next"
    #define STRING_BACK                   "Tornar"

    // Value Buttons
    #define STRING_INC                    "Augmentar"
    #define STRING_DEC                    "Disminur"
    #define STRING_LOAD                   "Carregar"
    #define STRING_UNLOAD                 "Descarregar"
    #define STRING_CLEAR                  "Clear"
    #define STRING_VALUE_ZERO             "Zero"
    #define STRING_DEFAULT                "Default"

    // Action Buttons
    #define STRING_START                  "Començar"
    #define STRING_STOP                   "Parar"
    #define STRING_PAUSE                  "Pausar"
    #define STRING_RESUME                 "Continuar"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Desconnectar"
    #define STRING_SHUT_DOWN              "Apagar"
    #define STRING_FORCE_SHUT_DOWN        "Forçar Apagat"
    #define STRING_EMERGENCYSTOP          "PARADA EMERGENCIA"
    #define STRING_PREHEAT                "Preescalfar"
    #define STRING_COOLDOWN               "Refredar"

    // Dialog Buttons
    #define STRING_CONFIRM                "Confirmar"
    #define STRING_CANCEL                 "Cancel · lar"
    #define STRING_WARNING                "Advertència"
    #define STRING_CONTINUE               "Continuar"
    #define STRING_CONFIRMATION           "Estàs segur?"

    // Process Status
    #define STRING_STATUS                 "Estat"
    #define STRING_READY                  "A punt!!"
    #define STRING_BUSY                   "Processament ocupat, si us plau esperi ..."
    #define STRING_LOADING                "Carregant ..."
    #define STRING_UNCONNECTED            "No hi ha comunicació amb impressora!"

    // Process Info
    #define STRING_INFO                   "Informació"
    #define STRING_INVALID_VALUE          "Invalid value(s)"
    #define STRING_TIMEOUT_REACHED        "Timeout reached!"
    #define STRING_DISCONNECT_INFO        "Ara pot controlar la impressora des del seu ordinador!"
    #define STRING_SHUTTING_DOWN          "Apagant..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Espereu que la\ntemperatura del hotend\nsigui inferior a %d℃" // Wait for the temperature of hotend to be lower than 50℃
    #define STRING_POWER_FAILED           "¿Continuar imprimint?"
    #define STRING_PROCESS_RUNNING        "Process already running!"
    #define STRING_PROCESS_COMPLETED      "Process completed!"
    #define STRING_PROCESS_ABORTED        "Process aborted!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD TFT"
    #define STRING_READ_TFTSD_ERROR       "Error a la targeta SD TFT!"
    #define STRING_TFTSD_INSERTED         "¡Targeta inserida!"
    #define STRING_TFTSD_REMOVED          "¡Targeta extreta!"
    #define STRING_U_DISK                 "Pendrive"
    #define STRING_READ_U_DISK_ERROR      "¡Error al Pendrive!"
    #define STRING_U_DISK_INSERTED        "¡Pendrive inserit!"
    #define STRING_U_DISK_REMOVED         "¡Pendrive extret!"
    #define STRING_ONBOARDSD              "SD Placa"
    #define STRING_READ_ONBOARDSD_ERROR   "Error a la targeta SD de la placa!"
    #define STRING_FILAMENT_RUNOUT        "¡Filament esgotat!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Disarm All"
    #define STRING_XY_UNLOCK              "Disarm XY"

    #define STRING_START_PRINT            "Comenceu a imprimir:\n %s?"
    #define STRING_STOP_PRINT             "Voleu aturar la impressió?"
    #define STRING_IS_PAUSE               "No es pot extruir\nal imprimir,¿\nPausar la impressió?"
    #define STRING_M0_PAUSE               "En pausa per l'ordre M0"

    #define STRING_TEST                   "Provar"
    #define STRING_DEPLOY                 "Desplegar"
    #define STRING_STOW                   "Plegar"
    #define STRING_REPEAT                 "Repetir"

    // Values
    #define STRING_NOZZLE                 "Nozzle"
    #define STRING_BED                    "Llit"
    #define STRING_CHAMBER                "Cambra"

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
    #define STRING_PERCENTAGE_SPEED       "Velocitat"
    #define STRING_PERCENTAGE_FLOW        "Flux"

    #define STRING_5_SECONDS              "5 Sec."
    #define STRING_10_SECONDS             "10 Sec."
    #define STRING_30_SECONDS             "30 Sec."
    #define STRING_60_SECONDS             "1 Min."
    #define STRING_120_SECONDS            "2 Min."
    #define STRING_300_SECONDS            "5 Min."
    #define STRING_CUSTOM_SECONDS         "Personalitzat"

    // Colors
    #define STRING_WHITE                  "Blanc"
    #define STRING_BLACK                  "Negre"
    #define STRING_BLUE                   "Blau"
    #define STRING_RED                    "Vermell"
    #define STRING_GREEN                  "Verd"
    #define STRING_CYAN                   "Cian"
    #define STRING_YELLOW                 "groc"
    #define STRING_BROWN                  "marró"
    #define STRING_GRAY                   "Gris"
    #define STRING_ORANGE                 "taronja"
    #define STRING_INDIGO                 "Índigo"
    #define STRING_VIOLET                 "violeta"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Porpra"
    #define STRING_LIME                   "Llima"
    #define STRING_DARKBLUE               "Blau fosc"
    #define STRING_DARKGREEN              "Verd fosc"
    #define STRING_DARKGRAY               "Gris fosc"

    // Menus
    #define STRING_HEAT                   "Escalfar"
    #define STRING_MOVE                   "Moure"
    #define STRING_HOME                   "Origen"
    #define STRING_PRINT                  "Imprimir"
    #define STRING_EXTRUDE                "Extruir"
    #define STRING_FAN                    "Ventilar"
    #define STRING_SETTINGS               "Configura"
    #define STRING_SCREEN_SETTINGS        "Pantalla"
    #define STRING_MACHINE_SETTINGS       "Màquina"
    #define STRING_FEATURE_SETTINGS       "Afegits"
    #define STRING_SOUND                  "Sound"
    #define STRING_RGB_SETTINGS           "Color LED"
    #define STRING_RGB_OFF                "Apagar LED"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_CUSTOM                 "Personalitzar"
    #define STRING_LEVELING               "Anivellar"
    #define STRING_POINT_1                "Punt 1"
    #define STRING_POINT_2                "Punt 2"
    #define STRING_POINT_3                "Punt 3"
    #define STRING_POINT_4                "Punt 4"
    #define STRING_POINT_5                "Punt 5"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "Nivellat del llit completat"
    #define STRING_BL_SMART_FILL          "Falten punts de prova\ns'han omplert de forma intel·ligent.\n \nNota: recordeu guardar!"
    #define STRING_BL_ENABLE              "BL: on"
    #define STRING_BL_DISABLE             "BL: off"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
    #define STRING_ABL_SETTINGS           "Auto Bed Leveling"
    #define STRING_ABL_SETTINGS_BBL       "Nivellament del llit Bilinear"
    #define STRING_ABL_SETTINGS_UBL       "Nivellament de llit unificat"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Desa a la ranura"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Carrega des de la ranura"
    #define STRING_ABL_SLOT0              "Ranura 0"
    #define STRING_ABL_SLOT1              "Ranura 1"
    #define STRING_ABL_SLOT2              "Ranura 2"
    #define STRING_ABL_SLOT3              "Ranura 3"
    #define STRING_ABL_SLOT_EEPROM        "Recordar la ranura per al proper\nreinici? (Guardar EEPROM)"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Distance"
    #define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
    #define STRING_FAN_FULL_SPEED         "Màxim"
    #define STRING_FAN_HALF_SPEED         "Meitat"
    #define STRING_TOUCHSCREEN_ADJUST     "Calibrar"
    #define STRING_MORE                   "Més"
    #define STRING_SCREEN_INFO            "Informar"
    #define STRING_SIMULATOR_BG_COLOR     "Color de fons del simulador Marlin"
    #define STRING_SIMULATOR_FONT_COLOR   "Color de lletra de simulador Marlin"
    #define STRING_PERCENTAGE             "Percentatge"
    #define STRING_BABYSTEP               "BabyStep"
    #define STRING_X_INC                  "+X"
    #define STRING_Y_INC                  "+Y"
    #define STRING_Z_INC                  "+Z"
    #define STRING_X_DEC                  "-X"
    #define STRING_Y_DEC                  "-Y"
    #define STRING_Z_DEC                  "-Z"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "¡Calibrar la pantalla tàctil"
    #define STRING_ADJUST_INFO            "Si us plau feu clic al punt vermell"
    #define STRING_ADJUST_OK              "Ajust correcte"
    #define STRING_ADJUST_FAILED          "Ajust fallit, si us plau intenteu de nou"
    #define STRING_PREHEAT_BOTH           "Tots dos"
    #define STRING_UNIFIEDMOVE            "Moviment"
    #define STRING_UNIFIEDHEAT            "Calor/Ventilador"
    #define STRING_TOUCH_TO_EXIT          "Toca qualsevol lloc per sortir"
    #define STRING_MAINMENU               "Menú"
    #define STRING_PARAMETER_SETTING      "Paràmetre"
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
    #define STRING_COLD_EXT               "Cold extrusion prevented"
    #define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_TOUCHMI                "TouchMi"

#endif
