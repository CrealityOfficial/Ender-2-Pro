//
// Language Selection Menu
//

#include "../../inc/MarlinConfig.h"

#if HAS_MULTI_LANGUAGE && HAS_MARLINUI_U8GLIB

#include "menu_item.h"
#include "../../MarlinCore.h"
#include "../../module/settings.h"

//#if NUM_LANGUAGES > 1
  #include "../../lcd/dogm/fontdata/langdata_en.h"
  #include "../../lcd/dogm/fontdata/langdata_ru.h"
  #include "../../lcd/dogm/fontdata/langdata_zh_CN.h"
//#endif

static void set_lcd_language(const uint8_t inlang) {
  ui.set_language(inlang);
  TERN_(LCD_LANGUAGE_AUTO_SAVE, (void)settings.save());
  #if NUM_LANGUAGES > 1
    if (ui.language == 0)
    {
      uxg_SetUtf8Fonts(zh_CN_g_fontinfo, COUNT(zh_CN_g_fontinfo));
    }
    else if (ui.language == 7)
    {
      uxg_SetUtf8Fonts(ru_g_fontinfo, COUNT(ru_g_fontinfo));
    }
    else
    {
      uxg_SetUtf8Fonts(g_fontinfo, COUNT(g_fontinfo));
    }
    
  #else
    uxg_SetUtf8Fonts(g_fontinfo, COUNT(g_fontinfo));
  #endif
  ui.set_status_P(GET_TEXT(WELCOME_MSG));
  ui.refresh();
  
}

void menu_language() {
  START_MENU();
  BACK_ITEM(MSG_MAIN);

  MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE  )::LANGUAGE, []{ set_lcd_language(0); });
  MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_2)::LANGUAGE, []{ set_lcd_language(1); });
  #if NUM_LANGUAGES > 2
    MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_3)::LANGUAGE, []{ set_lcd_language(2); });
    #if NUM_LANGUAGES > 3
      MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_4)::LANGUAGE, []{ set_lcd_language(3); });
      #if NUM_LANGUAGES > 4
        MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_5)::LANGUAGE, []{ set_lcd_language(4); });
        #if NUM_LANGUAGES > 5
          MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_6)::LANGUAGE, []{ set_lcd_language(5); });
          #if NUM_LANGUAGES > 6
            MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_7)::LANGUAGE, []{ set_lcd_language(6); });
            #if NUM_LANGUAGES > 7
              MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_8)::LANGUAGE, []{ set_lcd_language(7); });
              #if NUM_LANGUAGES > 8
                MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_9)::LANGUAGE, []{ set_lcd_language(8); });
                #if NUM_LANGUAGES > 9
                  MENU_ITEM_P(function, GET_LANG(LCD_LANGUAGE_10)::LANGUAGE, []{ set_lcd_language(9); });
                #endif
              #endif
            #endif
          #endif
        #endif
      #endif
    #endif
  #endif

  END_MENU();
  LCD_MESSAGEPGM(WELCOME_MSG);
  //ui.return_to_status();
}

#endif // HAS_MULTI_LANGUAGE
