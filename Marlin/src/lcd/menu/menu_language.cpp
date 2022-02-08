#include "../../inc/MarlinConfig.h"
#include "../../MarlinCore.h"
#include "../../module/configuration_store.h"

#include "menu.h"

uint8_t lang = 0;
uint8_t language_change_font;
static void set_select_font_english_to_eeprom()
{
  language_change_font = 0;
  lang = language_change_font;
  (void)settings.save();
  ui.refresh();
}
static void set_select_font_chinese_to_eeprom()
{
  language_change_font = 1;
  lang = language_change_font;
  (void)settings.save();
  ui.refresh();
}

void menu_language()
{
  START_MENU();
  BACK_ITEM(MSG_MAIN);

  MENU_ITEM(function, MSG_ENGLISH_LANGUAGE, set_select_font_english_to_eeprom);
  MENU_ITEM(function, MSG_CHINESE_LANGUAGE, set_select_font_chinese_to_eeprom);

  END_MENU();
}