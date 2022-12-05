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
 * Turkish
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 *
 * Bu çeviri dosyasındaki sorunlar ve düzeltmeler için iletişim;
 * Contact for issues and corrections in this translation file;
 * Yücel Temel - (info@elektromanyetix.com) - https://elektromanyetix.com/
 */

#define DISPLAY_CHARSET_ISO10646_TR

namespace Language_tr {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Turkish");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" hazır.");
  PROGMEM Language_Str MSG_MARLIN                          = _UxGT("Creality");
  PROGMEM Language_Str MSG_YES                             = _UxGT("EVET");
  PROGMEM Language_Str MSG_NO                              = _UxGT("HAYIR");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Geri");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("İptal ediliyor ...");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Kart Takıldı");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Kart Çıkarıldı");
  PROGMEM Language_Str MSG_MEDIA_RELEASED                  = _UxGT("Kart Bırakıldı");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Kart bekleniyor");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Kart okuma hatası");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("USB cihazı kaldırıldı");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("USB başlatılamadı");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Limit Siviçler");
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Yazılımsal limitler");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Ana Menü");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Gelişmiş Ayarlar");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Yapılandırma");
  PROGMEM Language_Str MSG_RUN_AUTO_FILES                  = _UxGT("Oto. Başlat");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Motorları Durdur");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Hata Ayıklama ");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Durum Çubuğu Testi");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Eksen Sıfırlama");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("X Ekseni sıfıra git");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Y Ekseni sıfıra git");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Z Ekseni sıfıra git");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Oto. Z Ekseni Hizalama");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("XYZ Sıfırlanıyor");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Başlamak için tıklayın");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Sonraki Nokta");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Hizalama Tamamlandı!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Ek Katman Yüksekliği");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Ofset Ayarlama");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Ofsetler Uygulandı");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT(" Başlangıç Noktası Ayarla");
  // PROGMEM Language_Str MSG_PREHEAT_1                       = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL;
  // PROGMEM Language_Str MSG_PREHEAT_1_H                     = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL " ~";
  // PROGMEM Language_Str MSG_PREHEAT_1_END                   = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Nozul");
  // PROGMEM Language_Str MSG_PREHEAT_1_END_E                 = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Nozul ~");
  // PROGMEM Language_Str MSG_PREHEAT_1_ALL                   = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Tümü");
  // PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Tabla");
  // PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Ayarlar");
  // PROGMEM Language_Str MSG_PREHEAT_2                       = _UxGT("Ön ısıtma ") PREHEAT_2_LABEL;
  // PROGMEM Language_Str MSG_PREHEAT_2_H                     = _UxGT("Ön ısıtma ") PREHEAT_2_LABEL " ~";
  // PROGMEM Language_Str MSG_PREHEAT_2_END                   = _UxGT("Ön ısıtma ") PREHEAT_2_LABEL _UxGT(" Nozul");
  // PROGMEM Language_Str MSG_PREHEAT_2_END_E                 = _UxGT("Ön ısıtma ") PREHEAT_2_LABEL _UxGT(" Nozul ~");
  // PROGMEM Language_Str MSG_PREHEAT_2_ALL                   = _UxGT("Ön ısıtma ") PREHEAT_2_LABEL _UxGT(" Tümü");
  // PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               = _UxGT("Ön ısıtma ") PREHEAT_2_LABEL _UxGT(" Tabla");
  // PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              = _UxGT("Ön ısıtma ") PREHEAT_2_LABEL _UxGT(" Ayarlar");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL " ~";
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Nozul");
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Nozul ~");;
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Tümü");
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Tabla");;
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Ön ısıtma ") PREHEAT_1_LABEL _UxGT(" Ayarlar");

    PROGMEM Language_Str MSG_PREHEAT_M                     = _UxGT("Ön ısıtma $");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_H                   = _UxGT("Ön ısıtma $ ~");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_END                 = _UxGT("Ön ısıtma $ Nozul");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E               = _UxGT("Ön ısıtma $ Nozul ~");;
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                 = _UxGT("Ön ısıtma $ Tümü");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY             = _UxGT("Ön ısıtma $ Tabla");;
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS            = _UxGT("Ön ısıtma $ Ayarlar");
  #endif
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Özel Ön Isıtma");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Soğut");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Lazer Kontrolü");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Lazer Kapalı");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Lazer Aç");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Lazer Gücü");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Spindle Kontrolü");
  PROGMEM Language_Str MSG_SPINDLE_OFF                     = _UxGT("Spindle Kapat");
  PROGMEM Language_Str MSG_SPINDLE_ON                      = _UxGT("Spindle Aç");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   = _UxGT("Spindle Gücü");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Spindle Ters Yön");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Gücü Aç");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Gücü Kapat");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Ektrüzyon");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Geri çek");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Eksen Hareketleri");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Tabla Hizalama");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Tablayı Hizala");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Köşeleri Hizala");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Sonraki Köşe");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Mesh Düzenleyici");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Mesh Düzenle");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Mesh Düzenleme Durdu");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Prob noktası");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("X Dizini");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Y Dizini");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Z Değeri");
  PROGMEM Language_Str MSG_CUSTOM_COMMANDS                 = _UxGT("Özel Komutlar");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("M48 Prob Testi");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("M48 Noktası");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Sapma");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("IDEX Modu");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Takım Ofsetleri");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Oto. Park");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Kopyala");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Yansıtılmış Kopya");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Tam kontrol");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2. Nozul X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2. Nozul Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2. Nozul Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("G29 Çalışıyor");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("UBL Araçları");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("UBL Tabla Hizalama");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Eğim Noktası");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Elle Mesh Oluştur");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Tablayı Yerleştir ve Ölç");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Ölçü");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Tablayı Kaldır ve Ölç");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Bir sonrakine geç");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("UBL'yi etkinleştir ");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("UBL'yi devre dışı bırak");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Tabla Sıcaklığı");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Tabla Sıcaklığı");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Nozul Sıcaklığı");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Nozul Sıcaklığı");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Mesh Düzenleme");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Özel Mesh Düzenle");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Mesh İnce Ayarı");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Mesh Düzenleme Bitti");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Özel Mesh Oluştur");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Mesh Oluştur");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_UBL_BUILD_MESH_M              = _UxGT("Mesh Oluştur ($)");
    PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M           = _UxGT("Doğrulama Mesh ($)");
  #endif
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Soğuk Mesh Oluşturun");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Mesh Yüksekliğini Ayarla");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Yükseklik Miktarı");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Mesh'i Doğrula");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Mesh'i Doğrula (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Mesh'i Doğrula (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Özel Mesh'i Doğrula");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 Tabla Isıtma");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 Nozul Isıtma");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Manuel astarlama ...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Sabit Uzunlukta Astar");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Astarlama Bitti");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 İptal Edildi");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("G26'dan Çıkış");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Tabla Mesh Devam Et");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Mesh Hizalama");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("3 Noktalı Hizalama");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Izgara Mesh Hizalama");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Mesh'i Hizala");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Yan Noktalar");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Haritalama türü");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Mesh Çıkış Haritası");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Ana Cihaz Çıktısı");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("CSV çıktısı");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Kapalı Yazıcı Yedeklemesi");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("UBL Çıkış Bilgisi");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Dolgu Miktarı");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Manuel Dolgu");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Akıllı Dolgu");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Dolgu Mesh");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Tümünü Geçersiz Kıl");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("En Yakınını Geçersiz Kıl");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Tümünü İnce Ayarla");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("En Yakını İnce Ayarla");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Mesh Depolama");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Bellek Yuvası");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Tabla Mesh'i Yükle");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Tabla Mesh'i Kaydet");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 Mesh %i Yüklendi");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 Mesh %i Kaydedildi");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Depolama Alanı Yok");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Hata: UBL Kaydı");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Hata: UBL Geri Yükleme");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Z-Ofset:");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Z-Ofset Durduruldu");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("Adım Adım UBL");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1. Soğuk Mesh Oluştur");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2. Akıllı Dolgu");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3. Mesh'i Doğrula");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4. Tümünü İnce Ayarla");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5. Mesh'i Doğrula");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6. Tümünü İnce Ayarla");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7. Tabla Mesh'ini Kaydet");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("LED Kontrolü");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Ledlar");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Led Ön Ayarları");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Kırmızı");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Turuncu");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Sarı");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Yeşil");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Mavi");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("İndigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Menekşe");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Beyaz");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Varsayılan");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Özel Işıklar");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Kırmızı şiddeti");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Yeşil Şiddeti");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Mavi Şiddeti");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Beyaz Şiddeti");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Parlaklık");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Hareket Ediyor ...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Durdur XY");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("X'i Hareket ettir");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Y'yi hareket ettir");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Z'yi Hareket ettir");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Ekstrüder");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Ekstrüder *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Nozul çok soğuk");
  PROGMEM Language_Str MSG_MOVE_N_MM                       = _UxGT("%smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("0.1 mm oynat");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("1 mm oynat");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("10mm oynat");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Hız");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Tabla Z");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Nozul");
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Nozul ~");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Tabla");
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Muhafaza");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Fan hızı");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Fan Hızı =");
  PROGMEM Language_Str MSG_STORED_FAN_N                    = _UxGT("Depolanan Fan");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Ekstra Fan Hızı");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Ekstra Fan Hızı =");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Akış");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Akış ~");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Kontrol");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Maks.");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Gerçek");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Otomatik sıcaklık");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Açık");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Kapalı");
  PROGMEM Language_Str MSG_PID_AUTOTUNE                    = _UxGT("PID Otomatik Ayar");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  = _UxGT("PID Otomatik Ayar *");
  PROGMEM Language_Str MSG_PID_P                           = _UxGT("PID-P");
  PROGMEM Language_Str MSG_PID_P_E                         = _UxGT("PID-P *");
  PROGMEM Language_Str MSG_PID_I                           = _UxGT("PID-I");
  PROGMEM Language_Str MSG_PID_I_E                         = _UxGT("PID-I *");
  PROGMEM Language_Str MSG_PID_D                           = _UxGT("PID-D");
  PROGMEM Language_Str MSG_PID_D_E                         = _UxGT("PID-D *");
  PROGMEM Language_Str MSG_PID_C                           = _UxGT("PID-C");
  PROGMEM Language_Str MSG_PID_C_E                         = _UxGT("PID-C *");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Seç");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Seç *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Hızlanma");
  PROGMEM Language_Str MSG_JERK                            = _UxGT("Geri Çekme");
  PROGMEM Language_Str MSG_VA_JERK                         = _UxGT("V") LCD_STR_A _UxGT("-Geri Çekme");
  PROGMEM Language_Str MSG_VB_JERK                         = _UxGT("V") LCD_STR_B _UxGT("-Geri Çekme");
  PROGMEM Language_Str MSG_VC_JERK                         = _UxGT("V") LCD_STR_C _UxGT("-Geri Çekme");
  PROGMEM Language_Str MSG_VE_JERK                         = _UxGT("Ve-Geri Çekme");
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              = _UxGT("Bağlantı noktası sapması");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Hız");
  PROGMEM Language_Str MSG_VMAX_A                          = _UxGT("Max Hız ") LCD_STR_A;
  PROGMEM Language_Str MSG_VMAX_B                          = _UxGT("Max Hız ") LCD_STR_B;
  PROGMEM Language_Str MSG_VMAX_C                          = _UxGT("Max Hız ") LCD_STR_C;
  PROGMEM Language_Str MSG_VMAX_E                          = _UxGT("Max Hız ") LCD_STR_E;
  PROGMEM Language_Str MSG_VMAX_EN                         = _UxGT("Max Hız *");
  PROGMEM Language_Str MSG_VMIN                            = _UxGT("Min. Hız");
  PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("Min. Hareket Hızı");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Hızlanma");
  PROGMEM Language_Str MSG_AMAX_A                          = _UxGT("Amax ") LCD_STR_A;
  PROGMEM Language_Str MSG_AMAX_B                          = _UxGT("Amax ") LCD_STR_B;
  PROGMEM Language_Str MSG_AMAX_C                          = _UxGT("Amax ") LCD_STR_C;
  PROGMEM Language_Str MSG_AMAX_E                          = _UxGT("Amax ") LCD_STR_E;
  PROGMEM Language_Str MSG_AMAX_EN                         = _UxGT("Amax *");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("A-Geri Çekme");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("A-Hareket");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Adım/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT("adım/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT("adım/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT("steps/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("Eadım/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("*adım/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Sıcaklık");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Hareket");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filament");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("mm³  olarak E");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Fil. Çap.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Fil. Çap. *");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT(" mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Yükleme mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("Gelişmiş K");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("Gelişmiş K *");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("LCD kontrast");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Ayarları Sakla");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Ayarları Yükle");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Fabrika Ayarları");
  PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("EEPROM'a yükle");
  PROGMEM Language_Str MSG_ERR_EEPROM_CRC                  = _UxGT("Hata: EEPROM CRC");
  PROGMEM Language_Str MSG_ERR_EEPROM_INDEX                = _UxGT("Hata: EEPROM Indeks");
  PROGMEM Language_Str MSG_ERR_EEPROM_VERSION              = _UxGT("Hata: EEPROM Versiyonu");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("SD Güncellemesi");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("Yazıcıyı Sıfırla");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH  _UxGT("Yenile");
  PROGMEM Language_Str MSG_WATCH                           = _UxGT("Bilgi Ekranı");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Ekran");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Hazırla");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Ayarla");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Baskıyı Başlat");
  PROGMEM Language_Str MSG_BUTTON_NEXT                     = _UxGT("Sonraki");
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Başlat");
  PROGMEM Language_Str MSG_BUTTON_PAUSE                    = _UxGT("Duraklat");
  PROGMEM Language_Str MSG_BUTTON_RESUME                   = _UxGT("Devam et");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Durdur");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Yazdır");
  PROGMEM Language_Str MSG_BUTTON_RESET                    = _UxGT("Sıfırla");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("İptal");
  PROGMEM Language_Str MSG_BUTTON_DONE                     = _UxGT("Bitti");
  PROGMEM Language_Str MSG_BUTTON_BACK                     = _UxGT("Geri");
  PROGMEM Language_Str MSG_BUTTON_PROCEED                  = _UxGT("İlerle");
  PROGMEM Language_Str MSG_PAUSING                         = _UxGT("Duraklatıldı...");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Yazdırmayı Duraklat");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Yazdırmaya Devam Et");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Yazdırmayı Durdur");
  PROGMEM Language_Str MSG_PRINTING_OBJECT                 = _UxGT("Model Basılıyor");
  PROGMEM Language_Str MSG_CANCEL_OBJECT                   = _UxGT("Baskıyı İptal Et");
  PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 = _UxGT("Baskıyı İptal Et =");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Kesinti Kurtarma");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("SD'den yazdır");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("SD Kartı Bulunamadı");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Uyku...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Devam etmek için tıklayın...");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Baskı Duraklatıldı");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Basılıyor...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Baskı İptal Edildi");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Hareket yok.");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("BİTİRİLDİ.");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("DURDURULDU.");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Geri çekme mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Re.mm Değiştir");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Geri Çekme Hızı ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Atlama mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("Geri Çekme  mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("S UnRet mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("Geri Al V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("S UnRet V");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("Otomatik Geri çekme");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("G.Çekme Boyu");
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           = _UxGT("Tasfiye Uzunluğu");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Takım Değişimi");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Z Yükselt");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED        = _UxGT("Birincil Hız");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED      = _UxGT("Geri Çekme Hızı");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Nozul Beklemede");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Filamenti Değiştir *");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Filamenti Değiştir *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Filamenti Yükle");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Filamenti Yükle*");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  = _UxGT("Filamenti Çıkar");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                = _UxGT("Filamenti Çıkar *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Tümünü Çıkar");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("SD Kart Başlatılıyor");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("SD kartını değiştir");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   = _UxGT("SD kartını Çıkar");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Z Probu Tablayı Geçti");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Eğim Faktörü");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("BLTouch Test");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Sıfırla");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("Kapat");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("Aç");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("SW Modu");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("5V-Modu");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("OD Modu");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              = _UxGT("Modu-Sakla");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           = _UxGT("BLTouch'ı 5V'a ayarlayın");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           = _UxGT("BLTouch'ı OD'ye ayarlayın");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               = _UxGT("Baskı Raporu");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             = _UxGT("TEHLİKE: Kötü ayarlar hasara neden olabilir! Yine de devam edilsin mi?");
  PROGMEM Language_Str MSG_TOUCHMI_PROBE                   = _UxGT("TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_INIT                    = _UxGT("TouchMI'yi başlatıyor");
  PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   = _UxGT("Z Ofset Testi");
  PROGMEM Language_Str MSG_TOUCHMI_SAVE                    = _UxGT("Kaydet");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           = _UxGT("TouchMI'yi Aç");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Z-Probu aç");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Z-Probu Kapat");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Önce %s%s%s fırla");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Prob Ofsetleri");
  PROGMEM Language_Str MSG_ZPROBE_XOFFSET                  = _UxGT("X Prob Ofset");
  PROGMEM Language_Str MSG_ZPROBE_YOFFSET                  = _UxGT("Y Prob Ofset");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Miniadım X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Miniadım Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Miniadım  Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Toplam");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Limit Siviç iptali");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Isınma Başarısız");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_BED          = _UxGT("Tabla Isıtma Başarısız");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_CHAMBER      = _UxGT("Nozul Isıtma Başarısız");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Hata: Sıcaklık Aşımı");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("TERMAL Problem");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("TABLA TERMAL KAÇAĞI");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("HAZNE TERMAL KAÇAĞI");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("Hata: Maks. ISI");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("Hata: Min ISI");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_BED                 = _UxGT("Hata: Tabla Maks. Isı");
  PROGMEM Language_Str MSG_ERR_MINTEMP_BED                 = _UxGT("Hata: Tabla Min. Isı");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_CHAMBER             = _UxGT("Hata: Nozul Maks. Isı");
  PROGMEM Language_Str MSG_ERR_MINTEMP_CHAMBER             = _UxGT("Hata: Nozul Min. Isı");
  PROGMEM Language_Str MSG_ERR_Z_HOMING                    = _UxGT("Önce XY eksenleri sıfırla");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("YAZICI DURDU");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Lütfen Sıfırlayın");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("d");
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("h");
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("m");
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Isınıyor...");
  PROGMEM Language_Str MSG_EXTRUDERS_HEATING               = _UxGT("Isıtma Nozul Isıtılması");
  PROGMEM Language_Str MSG_EXTRUDERS_COOLING               = _UxGT("Ekstrüderler Soğuyor...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Soğuyor...");
  PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Yatağı ısıt...");
  PROGMEM Language_Str MSG_BED_COOLING                     = _UxGT("Tabla Soğuyor ...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Nozul Isınıyor ...");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 = _UxGT("Nozul Soğuyor ...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Delta Kalibrasyonu");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("X'i kalibre et");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Y'yi kalibre et");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Z'yi kalibre et");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Merkezi Kalibre Et");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Delta Ayarları");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Otomatik Kalibrasyon");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Delta Yüksekliğini Ayarla");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Prob Z-ofseti");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Diag Çubuk");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Yükseklik ");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Yarıçap");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("Yazıcı Hakkında");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Yazıcı Bilgileri");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("3 Noktalı Hizalama");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Doğrusal Hizalama");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Çift Doğrusal Hizalama");
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Birleşik Yatak Hizalama");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Mesh Hizalama");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("İstatistikler");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Kontrolcü Bilgisi");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Termistörler");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Ekstrüderler");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Baud Hızı");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protokol");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF                = _UxGT("Kaçak İzleme: KAPALI");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_ON                 = _UxGT("Kaçak İzleme: AÇIK");

  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Kasa Işığı");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Işık Parlaklığı");
  PROGMEM Language_Str MSG_EXPECTED_PRINTER                = _UxGT("YANLIŞ YAZICI");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Baskı Sayısı");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Tamamlandı");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Toplam Baskı süresi");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("En Uzun İş Süresi");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Toplam Kullanılan Filament");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Baskılar");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Tamamlandı");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Toplam");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("En uzun");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Kullanılan");
  #endif

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Min. Isı");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Maks. Isı");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("Güç Kaynağı");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Sürüş Gücü");
  PROGMEM Language_Str MSG_DAC_PERCENT                     = _UxGT("Sürücü %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Y                   = _UxGT("Y Sürücü %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Z                   = _UxGT("Z Sürücü %");
  PROGMEM Language_Str MSG_DAC_PERCENT_E                   = _UxGT("E Sürücü %");
  PROGMEM Language_Str MSG_ERROR_TMC                       = _UxGT("TMC BAĞLANTI HATASI");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("DAC EEPROM Yazma");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("FİLAMENT DEĞİŞİKLİĞİ");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("YAZDIRMA DURDURULDU");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("FİLAMENT TAKIN");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("FİLAMANTİ ÇIKARIN");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("DEVAM SEÇENEKLERİ:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Daha fazla temizleyin");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Devam et");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("   Nozul:");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Salgı Sensörü");
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              = _UxGT("Salgı Uzunluğu mm");
  PROGMEM Language_Str MSG_KILL_HOMING_FAILED              = _UxGT("Sıfırlama Başarısız");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("İnceleme Başarısız");
  PROGMEM Language_Str MSG_M600_TOO_COLD                   = _UxGT("M600: Çok Soğuk");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("FiLAMENT SEÇİN");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE              = _UxGT("MMU Yaz. Güncelle!");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU'ya Dikkat Gerektirir.");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Baskıya Devam Et");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Devam ettiriliyor ...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Filamenti Yükleyin");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Hepsini yükle");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Nozule Yükleyin");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Filamenti Çıkar");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Filamenti Çıkar ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Filamenti Çıkar");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Filament yükleniyor. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Filament Çıkarılıyor. ...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Filament Çıkarılıyor ...");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Hepsi");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Filament ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("MMU’yu sıfırla");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("MMU sıfırlanıyor ...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Kaldır, tıkla");

  PROGMEM Language_Str MSG_MIX                             = _UxGT("Karıştır");
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Bileşen =");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Karıştırıcı");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Gradyan");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Tam Gradyan");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Karışım Geçişi");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Döngü Karışımı");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Gradyan Karışımı");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Ters Gradyan");
  PROGMEM Language_Str MSG_ACTIVE_VTOOL                    = _UxGT("Aktif V-Tool");
  PROGMEM Language_Str MSG_START_VTOOL                     = _UxGT("V-tool başlat");
  PROGMEM Language_Str MSG_END_VTOOL                       = _UxGT("   V-tool sonlandır");
  PROGMEM Language_Str MSG_GRADIENT_ALIAS                  = _UxGT(" V-tool İsimlendir");
  PROGMEM Language_Str MSG_RESET_VTOOLS                    = _UxGT("V-tool sıfırla");
  PROGMEM Language_Str MSG_COMMIT_VTOOL                    = _UxGT("V-tool Karışım Yap");
  PROGMEM Language_Str MSG_VTOOLS_RESET                    = _UxGT("V-tool Resetlendi");
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Başlat Z:");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT("   Bitir Z:");

  PROGMEM Language_Str MSG_GAMES                           = _UxGT("Oyunlar");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Brickout ");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invaders ");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3 ");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Maze");

  //
  // Filament Değişim ekranları 4 satırlı ekranda 3 satıra kadar gösterilir
  //                        ...veya 3 satırlı ekranda 2 satıra kadar
  //
  #if LCD_HEIGHT >= 4

    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Yazdırmaya devam et", "Düğmesine basın"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING           = _UxGT(MSG_1_LINE("Park Ediliyor..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE(" ", "Filament değişimi", " için başlamasını bekleyin"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Filamenti yerleştirin", "ve devam etmek için", "düğmeye basın"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Nozulu ısıtmak için", "düğmeye basın"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Nozul ısıtılıyor", "Lütfen bekleyin …"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_2_LINE("Filament çıkarılması", "için bekleyin"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_2_LINE("Filament yüklemesi", "için bekleyin"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Filament temizlemesi", "için bekleyin"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Filament temizlemeyi", "bitirmek için tıklayın"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_2_LINE("Baskının devam etmesi", "için bekleyin..."));
  #else
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_1_LINE("Devam etmek için tıklayın"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING           = _UxGT(MSG_1_LINE("Park Ediliyor..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Lütfen bekleyin..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Tıkla ve Ekle"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_1_LINE("Isıtmak için tıklayın"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Isınıyor..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Çıkarılıyor ..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Yükleniyor..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Temizleniyor ..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_1_LINE("Bitirmek için tıklayın"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Devam ettiriliyor ..."));
  #endif
  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("TMC Sürücüleri");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Sürücü Akımı");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Hibrit Eşik");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("Sensörsüz Hedef Arama");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Adım Modu");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("StealthChop Etkin");
  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Sıfırla");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT("  içinde:");
  PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Ters tepki");
  PROGMEM Language_Str MSG_BACKLASH_A                      = LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B                      = LCD_STR_B;
  PROGMEM Language_Str MSG_BACKLASH_C                      = LCD_STR_C;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Düzeltme");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Ütüleme");

}

#if FAN_COUNT == 1
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED
#else
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED_N
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED_N
#endif
