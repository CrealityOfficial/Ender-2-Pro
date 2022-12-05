/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Russian
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */
#define DISPLAY_CHARSET_ISO10646_5

namespace Language_ru {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Russian");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" Готов.");
PROGMEM Language_Str CORP_WEBSITE                        = _UxGT("www.creality.com");
PROGMEM Language_Str MSG_MARLIN                          = _UxGT("Creality");
PROGMEM Language_Str MSG_YES                             = _UxGT("ДА");
PROGMEM Language_Str MSG_NO                              = _UxGT("НЕТ");
PROGMEM Language_Str MSG_BACK                            = _UxGT("Назад");
PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Сброс…");
PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Карта вставлена");
PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Карта извлечена");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Вставьте SD-карту");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_SD_INIT_FAIL                  = _UxGT("Сбой инициализации SD");
  #else
    PROGMEM Language_Str MSG_SD_INIT_FAIL                  = _UxGT("Сбой инициализ. SD");
  #endif
PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Ошибка чтения карты");
PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("USB устройство извлечено");
PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Сбой запуска USB");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_KILL_SUBCALL_OVERFLOW         = _UxGT("Переполнение вызова");
  #else
    PROGMEM Language_Str MSG_KILL_SUBCALL_OVERFLOW         = _UxGT("Переполн. вызова");
  #endif
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Прогр. эндстопы");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Эндстопы"); // Max length 8 characters
PROGMEM Language_Str MSG_MAIN                            = _UxGT("Mеню");
PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Расширенные настройки");
PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Конфигурация");
  PROGMEM Language_Str MSG_RUN_AUTO_FILES                  = _UxGT("Автостарт");
PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Отключить двигатели");
PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Дебаг меню ");
PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Тест шкалы прогресса");
PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Парковка");
PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Парковка оси X");
PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Парковка оси Y");
PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Парковка оси Z");
PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Автовыравнивание оси Z");
  PROGMEM Language_Str MSG_ITERATION                       = _UxGT("G34 Итерация: %i");
  PROGMEM Language_Str MSG_DECREASING_ACCURACY             = _UxGT("Уменьшение точности!");
  PROGMEM Language_Str MSG_ACCURACY_ACHIEVED               = _UxGT("Точность достигнута");
PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Парковка осей");
PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Нажмите, чтобы начать");
PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Следующая точка");
PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Выравнивание завершено!");
PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Максимальная высота");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Компенсация парковки");
  #else
    PROGMEM Language_Str MSG_SET_HOME_OFFSETS              = _UxGT("Установ.смещ.дома");
  #endif
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Смещения применены");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Установить ноль");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Преднагрев ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Преднагрев ") PREHEAT_1_LABEL " ~" ;
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Преднагрев ") PREHEAT_1_LABEL _UxGT(" сопла");  
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Преднагрев ") PREHEAT_1_LABEL _UxGT(" сопла ~");   
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Преднагрев ") PREHEAT_1_LABEL _UxGT(" все");  
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Преднагрев ") PREHEAT_1_LABEL _UxGT(" стола");  
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Преднагрев ") PREHEAT_1_LABEL _UxGT(" настройки");  

    PROGMEM Language_Str MSG_PREHEAT_M                     = _UxGT("Преднагрев $");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_H                   = _UxGT("Преднагрев $ ~");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_END                 = _UxGT("Преднагрев $ сопла");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E               = _UxGT("Преднагрев $ сопла ~");
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                 = _UxGT("Преднагрев $ полностью");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY             = _UxGT("Преднагрев $ стола");
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS            = _UxGT("Преднагрев $ настройки");
#endif

PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Преднагрев по умолч.");
PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Охлаждение");
  PROGMEM Language_Str MSG_CUTTER_FREQUENCY                = _UxGT("Частота");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Управление лазером");
  PROGMEM Language_Str MSG_LASER_TOGGLE                    = _UxGT("Переключить лазер");
PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Мощность лазера");
PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Меню шпинделя");
PROGMEM Language_Str MSG_SPINDLE_OFF                     = _UxGT("Шпиндель выкл.");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_SPINDLE_POWER                 = _UxGT("Мощность шпинделя");
  #else
    PROGMEM Language_Str MSG_SPINDLE_POWER                 = _UxGT("Мощн.шпинделя");
  #endif
  PROGMEM Language_Str MSG_SPINDLE_FORWARD                 = _UxGT("Шпиндель вперёд");
PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Реверс шпинделя");
PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Вкл. питание");
PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Выкл. питание");
PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Экструзия");
PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Откат");
PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Сдвиг ось");
PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Вырав. раб. стола");
PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Вырав. стола");
PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Вырав. углов");
PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Следующий угол");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Редактор сетки");
    PROGMEM Language_Str MSG_EDITING_STOPPED               = _UxGT("Правка сетки окончена");
  #else
    PROGMEM Language_Str MSG_MESH_EDITOR                   = _UxGT("Смещение Z");
    PROGMEM Language_Str MSG_EDITING_STOPPED               = _UxGT("Правка окончена");
  #endif
PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Редактировать сетку");
PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Точка зондирования");
PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Индекс X");
PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Индекс Y");
PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Значение Z");
  PROGMEM Language_Str MSG_CUSTOM_COMMANDS                 = _UxGT("Свои команды");

  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("M48 тест Z-зонда");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Отклонение");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("M48 точка");
  PROGMEM Language_Str MSG_M48_OUT_OF_BOUNDS               = _UxGT("Зонд за пределами");

PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("IDEX режим");
PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Смещения инструмента");
PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Парковка");
PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Дублирование");
PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Зеркальная копия");
PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Полное управление");
  PROGMEM Language_Str MSG_IDEX_DUPE_GAP                   = _UxGT("Дублировать X-зазор");

PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2. Сопло X");
PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2. Сопло Y");
PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2. Сопло Z");
PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Идет процесс комманды G29");
PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Инструменты UBL");
PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Унифицированное выравн. стола");
PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Точка наклона");
PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Построить сетку вручную");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_BC_INSERT                 = _UxGT("Разместить шайбу и измерить");
    PROGMEM Language_Str MSG_UBL_BC_REMOVE                 = _UxGT("Убрать и замерить стол");
  #else
    PROGMEM Language_Str MSG_UBL_BC_INSERT                 = _UxGT("Разм.шайбу,измерить");
PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Снять и измерить стол");
  #endif
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Измерение");
PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Перейти к следующему");
PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Включить UBL");
PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Отключить UBL");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Редактор сеток");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Править свою сетку");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("ТЕМП. стола");
PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("ТЕМП. стола");
PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("ТЕМП. экструдера");
PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("ТЕМП. экструдера");
    PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH         = _UxGT("Построить свою сетку");
    PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH         = _UxGT("Правка сетки завершена");
  #else
    PROGMEM Language_Str MSG_UBL_SET_TEMP_BED              = LCD_STR_THERMOMETER _UxGT(" стола, ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM           = LCD_STR_THERMOMETER _UxGT(" стола, ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND           = LCD_STR_THERMOMETER _UxGT(" сопла, ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM        = LCD_STR_THERMOMETER _UxGT(" сопла, ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH         = _UxGT("Построить свою");
    PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH         = _UxGT("Правка завершена");
  #endif
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Точная правка сетки");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Построить сетку");
  #if PREHEAT_COUNT
PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               = _UxGT("Построить сетку (") PREHEAT_2_LABEL _UxGT(")");
  #endif
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH           = _UxGT("Построить холодную сетку");
  #else
    PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH           = _UxGT("Строить холод.сетку");
  #endif
PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Настроить высоту сетки");
PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Общая высота");
PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Потвердить сетку");
  #if LCD_WIDTH > 21
    #if PREHEAT_COUNT
      PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M         = _UxGT("Проверить сетку $");
    #endif
    PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH      = _UxGT("Проверить свою сетку");
  #else
    #if PREHEAT_COUNT
      PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M         = _UxGT("Провер. сетку $");
    #endif
PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Потвердить пользов. сетку ");
  #endif
PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 Нагрев стола");
PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 Нагрев сопла");
PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Ручная грунтовка...");
PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Грунтовка фиксир. длины");
PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Грунтовка завершена");
PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("Комманда G26 отменена");
PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Сброс комманды G26");
PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Прод. построение сетки стола");
PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Выравнивание сетки");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING      = _UxGT("3-х точечное выравнивание");
  #else
    PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING      = _UxGT("3-точечное выравн.");
  #endif
PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Выравнивание сетки");
PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Выравнивание сетки");
PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Боковые точки");
PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Вид карты");
PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Карта выходной сетки");
PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Выход для хоста");
PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Выход для CSV");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Резерв. копир. выкл. принтера");
PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Инфор. о выходе UBL");
  #else
    PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP         = _UxGT("Сохранить снаружи");
    PROGMEM Language_Str MSG_UBL_INFO_UBL                  = _UxGT("Информация UBL");
  #endif
PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Заполнено итого");
PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Ручное заполнение");
PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Смарт заполнение");
PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Заполнение сетки");
PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Полностью аннулировать");
PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Аннулировать ближайший");
PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Точная настройка");
PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Точная настройка ближнего");
PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Место хранения сетки");
PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Слот памяти");
PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Загрузить сетку стола");
PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Сохранить сетку стола");
PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 Сетка% i загружена");
PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 Сетка% i сохранена");
PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Нет места");
PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Ошибка:Восстановление UBL");
PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Ошибка:Восстановление UBL");
PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Смещение Z:");
PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Смещение Z остановлено");
PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL Пошагово");
PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1. Построить холод. сетку ");
PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2.Смарт заполнение");
PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3.Потверждение сетки");
PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4.Точная настройка");
PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5.Потвреждение сетки");
PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6.Точная настройка");
PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7.Сохранить сетку стола");
														   
PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("LED управление");
PROGMEM Language_Str MSG_LEDS                            = _UxGT("Свет");
PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Пресеты света");
PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Красный");
PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Оранжевый");
PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Желтый");
PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Зеленый");
PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Синий");
PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Индиго");
PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Фиолетовый");
PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Белый");
PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("По умолчанию");
  PROGMEM Language_Str MSG_LED_CHANNEL_N                   = _UxGT("Канал =");
  PROGMEM Language_Str MSG_LEDS2                           = _UxGT("Свет #2");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_NEO2_PRESETS                  = _UxGT("Свет #2 предустановки");
  #else
    PROGMEM Language_Str MSG_NEO2_PRESETS                  = _UxGT("Свет #2 предустан.");
  #endif
  PROGMEM Language_Str MSG_NEO2_BRIGHTNESS                 = _UxGT("Яркость");
PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Пользовательский");
PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Красная интенсивность");
PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Зеленая интенсивность");
PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Голубая интенсивность");
PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Белая интенсивность");
PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Яркость");
														   
PROGMEM Language_Str MSG_MOVING                          = _UxGT("Перемещение…");
PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Сброс XY");
PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Сдвиг X");
PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Сдвиг Y");
PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Сдвиг Z");
PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Экструдер");
PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Экструдер *");
PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Сопло слишком холодное");
  PROGMEM Language_Str MSG_MOVE_N_MM                       = _UxGT("Движение %sмм");
PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Сдвиг 0.1мм");
PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Сдвиг 1мм");
PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Сдвиг 10мм");
PROGMEM Language_Str MSG_SPEED                           = _UxGT("Скорость");
PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Стол Z");
PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Сопло");
PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Сопло ~");
  PROGMEM Language_Str MSG_NOZZLE_PARKED                   = _UxGT("Сопло запарковано");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Сопло ожидает");
PROGMEM Language_Str MSG_BED                             = _UxGT("Стол");
PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Корпус");
PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Скорость кулера");
PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Скорость кулера =");
PROGMEM Language_Str MSG_STORED_FAN_N                    = _UxGT("Сохраненный кулер =");
PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Дополн. скорость кулера");
PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Дополн. скорость кулера =");
  PROGMEM Language_Str MSG_CONTROLLER_FAN                  = _UxGT("Контроллер кулера");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_IDLE_SPEED       = _UxGT("Холостые обороты");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_AUTO_ON          = _UxGT("Автовключение");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_SPEED            = _UxGT("Рабочие обороты");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_DURATION         = _UxGT("Период простоя");
PROGMEM Language_Str MSG_FLOW                            = _UxGT("Поток");
PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Поток ~");
PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Управление");
PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Мин.");
PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Макс.");
PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Факт.");
PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Autotemp");
PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Вкл.");
PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Откл.");

  PROGMEM Language_Str MSG_PID_AUTOTUNE                    = _UxGT("Автоподбор PID");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  = _UxGT("Автоподбор PID *");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_DONE               = _UxGT("Подбор PID выполнен");
  PROGMEM Language_Str MSG_PID_BAD_EXTRUDER_NUM            = _UxGT("Сбой автоподбора. Плохой экструдер.");
  PROGMEM Language_Str MSG_PID_TEMP_TOO_HIGH               = _UxGT("Сбой автоподбора. Температура повышена.");
  PROGMEM Language_Str MSG_PID_TIMEOUT                     = _UxGT("Сбой автоподбора! Завершение времени.");

PROGMEM Language_Str MSG_SELECT                          = _UxGT("Выбрать");
PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Выбрать *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Ускорение");
  PROGMEM Language_Str MSG_JERK                            = _UxGT("Рывок");
PROGMEM Language_Str MSG_VA_JERK                         = _UxGT("V") LCD_STR_A _UxGT("-Скор. вибрации оси");
PROGMEM Language_Str MSG_VB_JERK                         = _UxGT("V") LCD_STR_B _UxGT("-Скор. вибрации оси");
PROGMEM Language_Str MSG_VC_JERK                         = _UxGT("V") LCD_STR_C _UxGT("-Скор. вибрации оси");
PROGMEM Language_Str MSG_VE_JERK                         = _UxGT("Ve-Jerk  ");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_JUNCTION_DEVIATION            = _UxGT("Отклонение узла");
  #else
PROGMEM Language_Str MSG_JUNCTION_DEVIATION              = _UxGT("Junction Dev");
  #endif
PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Скорость V");
PROGMEM Language_Str MSG_VMAX_A                          = _UxGT("Vмакс. ") LCD_STR_A;
PROGMEM Language_Str MSG_VMAX_B                          = _UxGT("Vмакс. ") LCD_STR_B;
PROGMEM Language_Str MSG_VMAX_C                          = _UxGT("Vмакс. ") LCD_STR_C;
PROGMEM Language_Str MSG_VMAX_E                          = _UxGT("Vмакс. ") LCD_STR_E;
PROGMEM Language_Str MSG_VMAX_EN                         = _UxGT("Vмакс. *");
PROGMEM Language_Str MSG_VMIN                            = _UxGT("Vмин.");
PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("Vминим. скорость движения");
PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Ускорение");
PROGMEM Language_Str MSG_AMAX_A                          = _UxGT("Aмакс. ") LCD_STR_A;
PROGMEM Language_Str MSG_AMAX_B                          = _UxGT("Aмакс. ") LCD_STR_B;
PROGMEM Language_Str MSG_AMAX_C                          = _UxGT("Aмакс. ") LCD_STR_C;
PROGMEM Language_Str MSG_AMAX_E                          = _UxGT("Aмакс. ") LCD_STR_E;
PROGMEM Language_Str MSG_AMAX_EN                         = _UxGT("Aмакс. *");
PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("A-Втягивание");
PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("A-Движение");
  PROGMEM Language_Str MSG_XY_FREQUENCY_LIMIT              = _UxGT("Частота макс.");
  PROGMEM Language_Str MSG_XY_FREQUENCY_FEEDRATE           = _UxGT("Подача мин.");
PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Количество шагов/мм");
PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT("шагов/мм");
PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT("шагов/мм");
PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT("шагов/мм");
PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("Eшагов/мм");
PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("*шагов/мм");
PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("ТЕМП.");
PROGMEM Language_Str MSG_MOTION                          = _UxGT("Движение");
PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Филамент");
PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E в мм³");
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT                = _UxGT("E огран.,мм") SUPERSCRIPT_THREE;
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT_E              = _UxGT("E огран. *");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Диаметр филамента");
PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Диаметр филамента *");
  #else
    PROGMEM Language_Str MSG_FILAMENT_DIAM                 = _UxGT("Диам. филам.");
    PROGMEM Language_Str MSG_FILAMENT_DIAM_E               = _UxGT("Диам. филам. *");
  #endif
PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Выгруз. мм");
PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Загр. мм");
PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("Расширенный K");
PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("Расширенный K *");
PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Контраст LCD");
PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Настройки хранилища");
PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Настройки загрузки");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("На базовые параметры");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_INIT_EEPROM                   = _UxGT("Инициализация EEPROM");
  #else
PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("Калибровка EEPROM");
  #endif
  PROGMEM Language_Str MSG_ERR_EEPROM_CRC                  = _UxGT("Сбой EEPROM: CRC");
  PROGMEM Language_Str MSG_ERR_EEPROM_INDEX                = _UxGT("Сбой EEPROM: индекс");
  PROGMEM Language_Str MSG_ERR_EEPROM_VERSION              = _UxGT("Сбой EEPROM: версия");
  PROGMEM Language_Str MSG_SETTINGS_STORED                 = _UxGT("Параметры сохранены");
PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("Обновление карты");
PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("ПереЗагр. принтера");
PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH  _UxGT(" REFRESH");
PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Информационный экран");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Настроить");
  PROGMEM Language_Str MSG_POWER_MONITOR                   = _UxGT("Монитор питания");
  PROGMEM Language_Str MSG_CURRENT                         = _UxGT("Ток");
  PROGMEM Language_Str MSG_VOLTAGE                         = _UxGT("Напряжение");
  PROGMEM Language_Str MSG_POWER                           = _UxGT("Мощность");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Начало печати");

  PROGMEM Language_Str MSG_BUTTON_NEXT                     = _UxGT("Дальше"); //short text for buttons
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Иниц-я");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Стоп");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Печать");
PROGMEM Language_Str MSG_BUTTON_RESET                    = _UxGT("Перезапуск");
  PROGMEM Language_Str MSG_BUTTON_IGNORE                   = _UxGT("Игнорир.");
PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Отменить");
PROGMEM Language_Str MSG_BUTTON_DONE                     = _UxGT("Завершено");
PROGMEM Language_Str MSG_BUTTON_BACK                     = _UxGT("Назад");
PROGMEM Language_Str MSG_BUTTON_PROCEED                  = _UxGT("Продолжить");
  PROGMEM Language_Str MSG_BUTTON_SKIP                     = _UxGT("Пропустить");

PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Пауза");
PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Продолжить печать");
  PROGMEM Language_Str MSG_HOST_START_PRINT                = _UxGT("Старт с хоста");
PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Остановить печать");
PROGMEM Language_Str MSG_PRINTING_OBJECT                 = _UxGT("Объект печати");
PROGMEM Language_Str MSG_CANCEL_OBJECT                   = _UxGT("Отменить объект");
PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 = _UxGT("Отменить объект =");
PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Восст. остановки");
PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Печать с TF карты");
PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("Карта TF отсутствует");
PROGMEM Language_Str MSG_DWELL                           = _UxGT("Спящий режим...");
PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Нажмите для возобн…");
PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Пауза...");
PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Процесс печати…");
PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Печать прервана");
  PROGMEM Language_Str MSG_PRINT_DONE                      = _UxGT("Печать завершена");
PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Нет движения.");
PROGMEM Language_Str MSG_KILLED                          = _UxGT("НЕУДАЧА.");
PROGMEM Language_Str MSG_STOPPED                         = _UxGT("ОСТАНОВЛЕН.");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Откат мм");
PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Заменить откат.мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP  = _UxGT("Возврат смены, мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF = _UxGT("Возврат смены, V");
    PROGMEM Language_Str MSG_AUTORETRACT                   = _UxGT("Автовтягивание");
  #else
    PROGMEM Language_Str MSG_CONTROL_RETRACT               = _UxGT("Втягив., мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP          = _UxGT("Смена втяг.,мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP  = _UxGT("Возвр.смены,мм");
PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("S UnRet V  ");
PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("Авто откат");
  #endif
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Подскок, мм");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Втягивание V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("Возврат, мм");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("Возврат V");

PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("Длина замены");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_FILAMENT_SWAP_EXTRA           = _UxGT("Поменять дополнительно");
  #else
    PROGMEM Language_Str MSG_FILAMENT_SWAP_EXTRA           = _UxGT("Поменять дополнит.");
  #endif
PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           = _UxGT("Длина продувки");

PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Замена инструмента");
PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Поднять ось Z ");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED      = _UxGT("Начальная скор.");
    PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED    = _UxGT("Скорость втягив.");
  #else
    PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED      = _UxGT("Началь.скор.");
    PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED    = _UxGT("Скор.втягив.");
  #endif
  PROGMEM Language_Str MSG_FILAMENT_PARK_ENABLED           = _UxGT("Парковать голову");
  PROGMEM Language_Str MSG_SINGLENOZZLE_UNRETRACT_SPEED    = _UxGT("Вернуть скорость");
  PROGMEM Language_Str MSG_SINGLENOZZLE_FAN_SPEED          = _UxGT("Обороти кулера");
  PROGMEM Language_Str MSG_SINGLENOZZLE_FAN_TIME           = _UxGT("Время кулера");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_ON               = _UxGT("Авто Вкл.");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_OFF              = _UxGT("Авто Выкл.");
  PROGMEM Language_Str MSG_TOOL_MIGRATION                  = _UxGT("Замена инструмента");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_AUTO             = _UxGT("Авто замена");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_END              = _UxGT("Последний экструдер");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_SWAP             = _UxGT("Замена на *");
PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Заменить филамент");
PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Заменить филамент *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Загрузить филамент");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Загрузить филамент *");
    PROGMEM Language_Str MSG_FILAMENTUNLOAD_E              = _UxGT("Выгрузить филамент *");
  #else
    PROGMEM Language_Str MSG_FILAMENTLOAD_E                = _UxGT("Подать филамент *");
PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                = _UxGT("Выгруз. филамент *");
  #endif
PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Выгруз. полностью");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Установить SD карту");
PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Замена TF карты");
PROGMEM Language_Str MSG_RELEASE_MEDIA                   = _UxGT("Извлечь TF карту");
PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Z зонд. прошел стол");
PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Фактор искажения");
PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("Cmd: Самопроверка  ");
PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Cmd: Перезапуск ");
PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("Cmd: Закрыть ");
PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("Cmd: Развернуть  ");
PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("Cmd: Режим SW");
PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("Cmd: Режим 5V");
PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("Cmd: Режим OD  ");
PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              = _UxGT("Cmd: Сохранить режим");
PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           = _UxGT("Установите BLTouch на 5V");
PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           = _UxGT("Установите BLTouch на 5V");
PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               = _UxGT("Сообщение об утечке");
PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             = _UxGT("ОПАСНО:Неправильные настройки могут привести к повреждению! Продолжить в любом случае?");
PROGMEM Language_Str MSG_TOUCHMI_PROBE                   = _UxGT("TouchMI");
PROGMEM Language_Str MSG_TOUCHMI_INIT                    = _UxGT("Иниц. TouchMI");
PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   = _UxGT("Тест смещения по Z");
PROGMEM Language_Str MSG_TOUCHMI_SAVE                    = _UxGT("Сохранить");
PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           = _UxGT("Развернуть TouchMI");
PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Развернуть TouchMI");
PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Развернуть Z зонд");
PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Отправить в исход. пол. %s%s%s сначала ");
  PROGMEM Language_Str MSG_ZPROBE_OFFSETS                  = _UxGT("Смещения Z-зонда");
  PROGMEM Language_Str MSG_ZPROBE_XOFFSET                  = _UxGT("Смещение X");
  PROGMEM Language_Str MSG_ZPROBE_YOFFSET                  = _UxGT("Смещение Y");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Смещение Z");
  PROGMEM Language_Str MSG_MOVE_NOZZLE_TO_BED              = _UxGT("Двигать сопло к столу");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Микрошаг X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Микрошаг Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Микрошаг Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Сумарно");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Сработал концевик");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Разогрев не удался");
PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Ошибка: ИЗБЫТОЧНАЯ ТЕМП.");
PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("ИЗБЫТОЧНАЯ ТЕМП.");
PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("РАЗГОН ТЕПЛА СТОЛА");
PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("РАЗГОН ТЕПЛА КАМЕРЫ");
PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("Ошибка:MАКС.ТЕМП.");
PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("Ошибка:МИН.ТЕМП.");
PROGMEM Language_Str MSG_ERR_MAXTEMP_BED                 = _UxGT("Ошибка:MАКС.ТЕМП. СТОЛА");
PROGMEM Language_Str MSG_ERR_MINTEMP_BED                 = _UxGT("Ошибка:МИН.ТЕМП. СТОЛА");
PROGMEM Language_Str MSG_ERR_MAXTEMP_CHAMBER             = _UxGT("Ошибка:МАКС.ТЕМП. КАМЕРЫ");
PROGMEM Language_Str MSG_ERR_MINTEMP_CHAMBER             = _UxGT("Ошибка:МИН.ТЕМП. КАМЕРЫ");
PROGMEM Language_Str MSG_ERR_Z_HOMING                    = _UxGT("Сначала парковка XY");
PROGMEM Language_Str MSG_HALTED                          = _UxGT("ПРИНТЕР ПРИОСТАНОВЛЕН");
PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Пожалуйста, перезапустите");
PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("д");
PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("ч");
PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("м");
PROGMEM Language_Str MSG_HEATING                         = _UxGT("Нагрев…");
PROGMEM Language_Str MSG_EXTRUDERS_HEATING               = _UxGT("Нагрев сопла...");
PROGMEM Language_Str MSG_EXTRUDERS_COOLING               = _UxGT("Охлаждение сопла...");
PROGMEM Language_Str MSG_COOLING                         = _UxGT("Охлаждение…");
PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Нагрев стола...");
PROGMEM Language_Str MSG_BED_COOLING                     = _UxGT("Охлаждение стола...");
  PROGMEM Language_Str MSG_PROBE_HEATING                   = _UxGT("Нагрев зонда...");
  PROGMEM Language_Str MSG_PROBE_COOLING                   = _UxGT("Охлаждение зонда...");
PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Нагрев камеры…");
PROGMEM Language_Str MSG_CHAMBER_COOLING                 = _UxGT("Охлаждение камеры...");
PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Калибровка дельта");
PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Калибровка X");
PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Калибровка Y");
PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Калибровка Z");
PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Калибровка центра");
PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Настройка дельта");
PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Автокалибровка");
PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Установить высоту");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE      = _UxGT("Зондировать Z-смещение");
    PROGMEM Language_Str MSG_DELTA_DIAG_ROD                = _UxGT("Стержень диагонали");
  #else
PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Зонд. Z ");
PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Наклонная стойка");
  #endif
PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Высота");
PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Радиус");
PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("О принтере");
PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Информация о принтере");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("Выравнивание 3х точек");
PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Линейное выравнивание");
    PROGMEM Language_Str MSG_BILINEAR_LEVELING             = _UxGT("Билинейное выравнивание");
  #else
    PROGMEM Language_Str MSG_3POINT_LEVELING               = _UxGT("3-точ. выравнив.");
    PROGMEM Language_Str MSG_LINEAR_LEVELING               = _UxGT("Линейное выравн.");
    PROGMEM Language_Str MSG_BILINEAR_LEVELING             = _UxGT("Билин. выравнив.");
  #endif
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Управление UBL");
PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Выравнивание сетки");
PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Характеристика принтера");
PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Информация о плате");
PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Термисторы");
PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Экструдеры");
PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Бод");
PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Протокол");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF              = _UxGT("Контроль утечки Т: Выкл");
    PROGMEM Language_Str MSG_INFO_RUNAWAY_ON               = _UxGT("Контроль утечки Т: Вкл");
    PROGMEM Language_Str MSG_HOTEND_IDLE_TIMEOUT           = _UxGT("Время простоя хотенда");
  #else
PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF                = _UxGT("Откл.");
PROGMEM Language_Str MSG_INFO_RUNAWAY_ON                 = _UxGT("Вкл.");
    PROGMEM Language_Str MSG_HOTEND_IDLE_TIMEOUT           = _UxGT("Время прост.хот-а");
  #endif
PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Свет");
PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Яркость света");
  PROGMEM Language_Str MSG_KILL_EXPECTED_PRINTER           = _UxGT("Неверный принтер");

#if LCD_WIDTH >= 20
	PROGMEM Language_Str MSG_INFO_PRINT_COUNT        = _UxGT("Отсчет печати");
	PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS   = _UxGT("Завершено");
	PROGMEM Language_Str MSG_INFO_PRINT_TIME         = _UxGT("Общее время печати");
	PROGMEM Language_Str MSG_INFO_PRINT_LONGEST      = _UxGT("Самое долгое время работы");
	PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT     = _UxGT("Итого выдавлено");
#else                                              
												   
	PROGMEM Language_Str MSG_INFO_PRINT_COUNT        = _UxGT("Колич. принтов");
	PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS   = _UxGT("Завершено");
	PROGMEM Language_Str MSG_INFO_PRINT_TIME         = _UxGT("Итого");
	PROGMEM Language_Str MSG_INFO_PRINT_LONGEST      = _UxGT("Cамый длительный");
	PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT     = _UxGT("Выдавлено");
#endif


PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Миним. ТЕМП.");
PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Максим. ТЕМП.");
PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("PSU");
PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Мощность привода");
  PROGMEM Language_Str MSG_DAC_PERCENT_X                   = _UxGT("X Привод, %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Y                   = _UxGT("Y Привод, %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Z                   = _UxGT("Z Привод, %");
  PROGMEM Language_Str MSG_DAC_PERCENT_E                   = _UxGT("E Привод, %");
PROGMEM Language_Str MSG_ERROR_TMC                       = _UxGT("ОШИБКА ПОДКЛЮЧЕНИЯ TMC");
PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("DAC EEPROM");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("ЗАМЕНА ФИЛАМЕНТА");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("ПЕЧАТЬ НА ПАУЗЕ...");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("Загр. ФИЛАМЕНТА");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("Выгруз. ФИЛАМЕНТА *");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("ПАРАМЕТРЫ ВОЗОБНОВЛЕНИЯ:");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Очистить больше");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Продолжить");
PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("Сопло:");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Датчик Runout");
  #else
    PROGMEM Language_Str MSG_RUNOUT_SENSOR                 = _UxGT("Датчик оконч.филам.");
  #endif
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              = _UxGT("До конца, мм");
  PROGMEM Language_Str MSG_KILL_HOMING_FAILED              = _UxGT("Ошибка парковки");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Ошибка зондирования");

PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("ВЫБЕРИТЕ ФИЛАМЕНТ");
PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE            = _UxGT("Обновить прошивку MMU!");
  #else
    PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE            = _UxGT("Обнови прошивку MMU");
  #endif
PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU требует внимания");
PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Продолжить печать");
PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Возобнов. печати...");
PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Загрузить филамент");
PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Загрузить полностью");
PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Загр. до сопла");
PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Извлеките филамент");
PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Извлеките филамент ~");
PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Выгруз. филамент");
PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Загр. филамента...");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT        = _UxGT("Извлечение филамента...");
  #else
PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Выгруз. филамента...");
  #endif
PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Выгруз. филамента...");
PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Полностью");
PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Филамент ~");
PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Перезапустить MMU");
PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Перезапуск MMU...");
PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Извлеките, нажмите");

  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_MIX                           = _UxGT("Смешивание");
  #else
    PROGMEM Language_Str MSG_MIX                           = _UxGT("Смешив.");
  #endif
PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Компонент =");
PROGMEM Language_Str MSG_MIXER                           = _UxGT("");
PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Градиент");
PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Полный градиент");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Цикличное смешивание");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Градиент смешивания");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Сменить градиент");
  #if LCD_WIDTH > 21
PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Переключить микс");
    PROGMEM Language_Str MSG_ACTIVE_VTOOL                  = _UxGT("Активация В-инструм.");
    PROGMEM Language_Str MSG_START_VTOOL                   = _UxGT("Начало В-инструмента");
    PROGMEM Language_Str MSG_END_VTOOL                     = _UxGT("Конец В-инструмента");
    PROGMEM Language_Str MSG_GRADIENT_ALIAS                = _UxGT("Псевдоним В-инструмента");
    PROGMEM Language_Str MSG_RESET_VTOOLS                  = _UxGT("Сброс В-инструментов");
    PROGMEM Language_Str MSG_COMMIT_VTOOL                  = _UxGT("Смешать В-инструменты");
    PROGMEM Language_Str MSG_VTOOLS_RESET                  = _UxGT("В-инструменты сброшены");
  #else
    PROGMEM Language_Str MSG_TOGGLE_MIX                    = _UxGT("Перекл. смешивание");
PROGMEM Language_Str MSG_ACTIVE_VTOOL                    = _UxGT("Активный V-инструмент");
PROGMEM Language_Str MSG_START_VTOOL                     = _UxGT("Запус. V-инструмент");
PROGMEM Language_Str MSG_END_VTOOL                       = _UxGT("   Завер. V-инструмент");
PROGMEM Language_Str MSG_GRADIENT_ALIAS                  = _UxGT("Псевдоним V-инструмента");
PROGMEM Language_Str MSG_RESET_VTOOLS                    = _UxGT("Сбросить V-инструмент");
PROGMEM Language_Str MSG_COMMIT_VTOOL                    = _UxGT("Микс V-инструмента");
PROGMEM Language_Str MSG_VTOOLS_RESET                    = _UxGT(" V-инструменты сброшены");
  #endif
PROGMEM Language_Str MSG_START_Z                         = _UxGT("Начало Z:");
PROGMEM Language_Str MSG_END_Z                           = _UxGT("Конец Z:");
														   
PROGMEM Language_Str MSG_GAMES                           = _UxGT("Игры");
PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Brickout ");
PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invaders ");
PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3 ");
PROGMEM Language_Str MSG_MAZE                            = _UxGT("Maze ");

  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_BAD_PAGE                      = _UxGT("Плохой индекс страницы");
    PROGMEM Language_Str MSG_BAD_PAGE_SPEED                = _UxGT("Плохая скорость страницы");
  #else
    PROGMEM Language_Str MSG_BAD_PAGE                      = _UxGT("Плохая страница");
    PROGMEM Language_Str MSG_BAD_PAGE_SPEED                = _UxGT("Плохая скор.стран.");
  #endif

  PROGMEM Language_Str MSG_EDIT_PASSWORD                   = _UxGT("Редактировать пароль");
  PROGMEM Language_Str MSG_LOGIN_REQUIRED                  = _UxGT("Нужен логин");
  PROGMEM Language_Str MSG_PASSWORD_SETTINGS               = _UxGT("Настройки пароля");
  PROGMEM Language_Str MSG_ENTER_DIGIT                     = _UxGT("Введите цифру");
  PROGMEM Language_Str MSG_CHANGE_PASSWORD                 = _UxGT("Смените пароль");
  PROGMEM Language_Str MSG_REMOVE_PASSWORD                 = _UxGT("Удалить пароль");
  PROGMEM Language_Str MSG_PASSWORD_SET                    = _UxGT("Пароль это ");
  PROGMEM Language_Str MSG_START_OVER                      = _UxGT("Старт через");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_REMINDER_SAVE_SETTINGS        = _UxGT("Запомни для сохранения!");
  #else
    PROGMEM Language_Str MSG_REMINDER_SAVE_SETTINGS        = _UxGT("Запомни, сохрани!");
  #endif
  PROGMEM Language_Str MSG_PASSWORD_REMOVED                = _UxGT("Пароль удалён");

  PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING             = _UxGT(MSG_1_LINE("Парковка..."));
  //
  // Filament Change screens show up to 3 lines on a 4-line display
  //                        ...or up to 2 lines on a 3-line display
  //
  #if LCD_HEIGHT >= 4
	PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Нажмите","Возобновить печать"));
	PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Парковка..."));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Ждите","Замена филам","Начать"));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Вставьте фил.", "и нажмите" ,"Продолжить"));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Нажмите","Нагрев сопла"));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Нагрев сопла","Ожидайте..."));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_2_LINE("Ждите","Выгруз. филамента"));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_2_LINE("Ждите","Загр. филамента"));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Ждите","Очистка филамента"));
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Нажмите, чтобы закончить","Очистка филамента"));
															 
	PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_2_LINE("Ожидание печати","Возобновить..."));

#else
PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_1_LINE("Продолжить"));
PROGMEM Language_Str MSG_PAUSE_PRINT_INIT             = _UxGT(MSG_1_LINE("Пароковка…"));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_1_LINE("Ожидайте..."));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_1_LINE("Вставьте и нажмите"));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_1_LINE("Нажмите для нагр."));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_1_LINE("Процесс нагрева…"));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_1_LINE("Извлечение…"));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_1_LINE("Загрузка…"));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_1_LINE("Очистка…"));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_1_LINE("Нажмите для заверш."));
PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_1_LINE("Продолжение..."));
#endif
PROGMEM Language_Str MSG_TMC_DRIVERS              = _UxGT("TMC драйверы");
PROGMEM Language_Str MSG_TMC_CURRENT              = _UxGT("Текущий драйвер");
PROGMEM Language_Str MSG_TMC_HYBRID_THRS          = _UxGT("Порог гибрида");
PROGMEM Language_Str MSG_TMC_HOMING_THRS          = _UxGT("Бессенсор. калибровка");
PROGMEM Language_Str MSG_TMC_STEPPING_MODE        = _UxGT("Пошаг. режим");
PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED      = _UxGT("StealthChop вкл.");
PROGMEM Language_Str MSG_SERVICE_RESET            = _UxGT("Перезапуск");
PROGMEM Language_Str MSG_SERVICE_IN               = _UxGT(" in:");
PROGMEM Language_Str MSG_BACKLASH                 = _UxGT("Откат");
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Исправление");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Сглаживание");
PROGMEM Language_Str MSG_BACKLASH_A               = LCD_STR_A;
  PROGMEM Language_Str MSG_LEVEL_X_AXIS                    = _UxGT("Уровень оси X");
  PROGMEM Language_Str MSG_AUTO_CALIBRATE                  = _UxGT("Авто калибровка");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("Время нагревателя вышло");
  #else
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("Время нагрев. вышло");
  #endif
  PROGMEM Language_Str MSG_REHEAT                          = _UxGT("Возобновить нагрев");
  PROGMEM Language_Str MSG_REHEATING                       = _UxGT("Нагрев...");
PROGMEM Language_Str MSG_BACKLASH_B               = LCD_STR_B;
  PROGMEM Language_Str MSG_PROBE_WIZARD                    = _UxGT("Мастер Z-зонда");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_PROBE_WIZARD_PROBING          = _UxGT("Зондиров. контрольной точки Z");
    PROGMEM Language_Str MSG_PROBE_WIZARD_MOVING           = _UxGT("Движение к точке зондирования");
  #else
    PROGMEM Language_Str MSG_PROBE_WIZARD_PROBING          = _UxGT("Зондир.контр.точки Z");
    PROGMEM Language_Str MSG_PROBE_WIZARD_MOVING           = _UxGT("Движ. к точке зондир.");
  #endif
PROGMEM Language_Str MSG_BACKLASH_C               = LCD_STR_C;
  PROGMEM Language_Str MSG_SOUND                           = _UxGT("Звук");

  PROGMEM Language_Str MSG_TOP_LEFT                        = _UxGT("Верхний левый");
  PROGMEM Language_Str MSG_BOTTOM_LEFT                     = _UxGT("Нижний левый");
  PROGMEM Language_Str MSG_TOP_RIGHT                       = _UxGT("Верхний правый");
  PROGMEM Language_Str MSG_BOTTOM_RIGHT                    = _UxGT("Нижний правый");
  PROGMEM Language_Str MSG_CALIBRATION_COMPLETED           = _UxGT("Калибровка успешна");
  PROGMEM Language_Str MSG_CALIBRATION_FAILED              = _UxGT("Ошибка калибровки");
}

#if FAN_COUNT == 1
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED
#else
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED_N
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED_N
#endif
