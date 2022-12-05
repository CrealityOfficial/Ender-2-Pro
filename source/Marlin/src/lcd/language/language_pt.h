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
 * Portuguese
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */

 #define DISPLAY_CHARSET_ISO10646_1

namespace Language_pt {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Portuguese");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" pronta.");
  PROGMEM Language_Str MSG_YES                             		= _UxGT("Sim");
  PROGMEM Language_Str MSG_NO                              		= _UxGT("Não");
  PROGMEM Language_Str MSG_MARLIN                             = _UxGT("Creality");
  PROGMEM Language_Str MSG_BACK                            		= _UxGT("Voltar");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  		= _UxGT("Cancelando");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  		= _UxGT("Cartão inserido");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   		= _UxGT("Cartão removido");
  PROGMEM Language_Str MSG_MEDIA_RELEASED                  		= _UxGT("Cartão liberado");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   		= _UxGT("Aguardando o cartão");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                		= _UxGT("Erro de leitura no cartão");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               		= _UxGT("USB removido");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                		= _UxGT("Falha de acesso USB");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    		= _UxGT("P.final");
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               		= _UxGT("P.final suave");
  PROGMEM Language_Str MSG_MAIN                            		= _UxGT("Início");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               		= _UxGT("Ajustes avançados");
  PROGMEM Language_Str MSG_CONFIGURATION                   		= _UxGT("Ajuste");
  PROGMEM Language_Str MSG_AUTOSTART                       		= _UxGT("Começo automático");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                		= _UxGT("Desativar motores");
  PROGMEM Language_Str MSG_DEBUG_MENU                      		= _UxGT("Menu de Depuração");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               		= _UxGT("Teste de barra de progresso");
  PROGMEM Language_Str MSG_AUTO_HOME                       		= _UxGT("Ponto Zero");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     		= _UxGT("Início X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     		= _UxGT("Início Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     		= _UxGT("Início Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    		= _UxGT("Auto Alinhar-Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                		= _UxGT("Aos inícios XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               		= _UxGT("Clique para começar");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            		= _UxGT("Próximo Ponto");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  		= _UxGT("Nivelamento concluído!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   		= _UxGT("Altura de dispersão");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                		= _UxGT("Ajustar Origem");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            		= _UxGT("Compensações aplicadas");
  PROGMEM Language_Str MSG_SET_ORIGIN                      		= _UxGT("Definir origem");

  // PROGMEM Language_Str MSG_PREHEAT_1                       		= _UxGT("Pré-aquecer ") PREHEAT_1_LABEL;
  // PROGMEM Language_Str MSG_PREHEAT_1_H                     		= _UxGT("Pré-aquecer ") PREHEAT_1_LABEL " ~";
  // PROGMEM Language_Str MSG_PREHEAT_1_END                   		= _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Bico");
  // PROGMEM Language_Str MSG_PREHEAT_1_END_E                 		= _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Bico ~");
  // PROGMEM Language_Str MSG_PREHEAT_1_ALL                   		= _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Ambos");
  // PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               		= _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Mesa");
  // PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              		= _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Conf");
  // PROGMEM Language_Str MSG_PREHEAT_2                       		= _UxGT("Pré-aquecer ") PREHEAT_2_LABEL;
  // PROGMEM Language_Str MSG_PREHEAT_2_H                     		= _UxGT("Pré-aquecer ") PREHEAT_2_LABEL " ~";
  // PROGMEM Language_Str MSG_PREHEAT_2_END                   		= _UxGT("Pré-aquecer ") PREHEAT_2_LABEL _UxGT(" Bico");
  // PROGMEM Language_Str MSG_PREHEAT_2_END_E                 		= _UxGT("Pré-aquecer ") PREHEAT_2_LABEL _UxGT(" Bico ~");
  // PROGMEM Language_Str MSG_PREHEAT_2_ALL                   		= _UxGT("Pré-aquecer ") PREHEAT_2_LABEL _UxGT(" Ambos");
  // PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               		= _UxGT("Pré-aquecer ") PREHEAT_2_LABEL _UxGT(" Mesa");
  // PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              		= _UxGT("Pré-aquecer ") PREHEAT_2_LABEL _UxGT(" Conf");

#if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL " ~";
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Bico");
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Bico ~");
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Ambos");
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Mesa");
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Conf");

    PROGMEM Language_Str MSG_PREHEAT_M                     = _UxGT("Pré-aquecer $");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_H                   = _UxGT("Pré-aquecer $ ~");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_END                 = _UxGT("Pré-aquecer $ Bico");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E               = _UxGT("Pré-aquecer $ Bico ~");
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                 = _UxGT("Pré-aquecer $ Ambos");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY             = _UxGT("Pré-aquecer $ Mesa");
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS            = _UxGT("Pré-aquecer $ Conf");
#endif

  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  		= _UxGT("Pré-aquecer Personalizado");
  PROGMEM Language_Str MSG_COOLDOWN                        		= _UxGT("Esfriar");
  PROGMEM Language_Str MSG_LASER_MENU                      		= _UxGT("Controle de Laser");
  PROGMEM Language_Str MSG_LASER_OFF                       		= _UxGT("Laser Desligado");
  PROGMEM Language_Str MSG_LASER_ON                        		= _UxGT("Laser Ligado");
  PROGMEM Language_Str MSG_LASER_POWER                     		= _UxGT("Potência do laser");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    		= _UxGT("Controle do Fuso");
  PROGMEM Language_Str MSG_SPINDLE_OFF                     		= _UxGT("Fuso Desligado");
  PROGMEM Language_Str MSG_SPINDLE_ON                      		= _UxGT("Fuso Ligado");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   		= _UxGT("Potência do fuso");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 		= _UxGT("Fuso reverso");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    		= _UxGT("Ligue a energia");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   		= _UxGT("Desligue a energia");
  PROGMEM Language_Str MSG_EXTRUDE                         		= _UxGT("Extrusão");
  PROGMEM Language_Str MSG_RETRACT                         		= _UxGT("Retrair");
  PROGMEM Language_Str MSG_MOVE_AXIS                       		= _UxGT("Mover Eixo");
  PROGMEM Language_Str MSG_BED_LEVELING                    		= _UxGT("Nivelamento da Mesa");
  PROGMEM Language_Str MSG_LEVEL_BED                       		= _UxGT("Nível da Mesa");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   		= _UxGT("Nível dos Cantos");
  PROGMEM Language_Str MSG_NEXT_CORNER                     		= _UxGT("Próximo canto");
  PROGMEM Language_Str MSG_MESH_EDITOR                     		= _UxGT("Editor de malha");
  PROGMEM Language_Str MSG_EDIT_MESH                       		= _UxGT("Editar malha");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 		= _UxGT("Edição de malha interrompida");
  PROGMEM Language_Str MSG_PROBING_MESH                    		= _UxGT("Ponto de Testagem");
  PROGMEM Language_Str MSG_MESH_X                          		= _UxGT("Índice X");
  PROGMEM Language_Str MSG_MESH_Y                          		= _UxGT("Índice Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     		= _UxGT("Valor Z");
  PROGMEM Language_Str MSG_USER_MENU                       		= _UxGT("Comandos Personalizados");
  PROGMEM Language_Str MSG_M48_TEST                        		= _UxGT("Teste de pontos M48");
  PROGMEM Language_Str MSG_M48_POINT                       		= _UxGT("Ponto M48");
  PROGMEM Language_Str MSG_M48_DEVIATION                   		= _UxGT("Desvio");
  PROGMEM Language_Str MSG_IDEX_MENU                       		= _UxGT("Modo IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    		= _UxGT("Ferramentas de Compensação");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              		= _UxGT("Auto-Estacionar");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             		= _UxGT("Duplicação");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         		= _UxGT("Cópia Espelhada");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             		= _UxGT("Controle total");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 		= _UxGT("2º Bico X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 		= _UxGT("2º Bico Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 		= _UxGT("2º Bico Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   		= _UxGT("Fazendo G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       		= _UxGT("Ferramentas UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   		= _UxGT("Nivelamento unificado da mesa");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                		= _UxGT("Ponto de inclinação");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 		= _UxGT("Construir malha manualmente");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   		= _UxGT("Colocar calço & Medida");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  		= _UxGT("Medida");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   		= _UxGT("Remover & Medir a Mesa");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              		= _UxGT("Indo ao próximo");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               		= _UxGT("Ativar UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             		= _UxGT("Desativar UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                		= _UxGT("Temperatura da Mesa");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             		= _UxGT("Temperatura da Mesa");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             		= _UxGT("Temp. de Extrusora");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          		= _UxGT("Temp. de Extrusora");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   		= _UxGT("Editar Malha");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            		= _UxGT("Editar Malha personalizado");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              		= _UxGT("Sintonia Fina da Malha");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           		= _UxGT("Edição da malha pronta");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           		= _UxGT("Construir Malha Personalizada");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             		= _UxGT("Construir malha");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M1               		= _UxGT("Construir malha (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               		= _UxGT("Construir malha(") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             		= _UxGT("Construir malha fria");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          		= _UxGT("Ajustar a altura da malha");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          		= _UxGT("Quantidade de altura");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          		= _UxGT("Validar malha");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            		= _UxGT("Validar malha (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            		= _UxGT("Validar malha (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        		= _UxGT("Validar malha personalizada");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 		= _UxGT("Aquecimento de Mesa G26");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              		= _UxGT("Aquecimento de Bico G26");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                		= _UxGT("Preparação manual ...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                		= _UxGT("Comprimento Fixo Prime");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  		= _UxGT("Preparação Pronta");
  PROGMEM Language_Str MSG_G26_CANCELED                    		= _UxGT("G26 cancelado");
  PROGMEM Language_Str MSG_G26_LEAVING                     		= _UxGT("Saindo do G26");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               		= _UxGT("Continuar malha da mesa");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               		= _UxGT("Nivelamento de malha");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        		= _UxGT("Nivelamento de 3 pontos");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          		= _UxGT("Nivelamento de grade");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  		= _UxGT("Nivelamento de malha");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 		= _UxGT("Pontos Laterais");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    		= _UxGT("Tipo de mapa");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  		= _UxGT("Exportar Mapa de malha");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             		= _UxGT("Exportar para host");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              		= _UxGT("Exportar para CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           		= _UxGT("Desligar  Backup da impressora");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    		= _UxGT("Exportar Informações UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               		= _UxGT("Quantidade de preenchimento");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               		= _UxGT("Preenchimento Manual");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                		= _UxGT("Preenchimento Inteligente");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 		= _UxGT("Malha de preenchimento");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              		= _UxGT("Invalidar tudo");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          		= _UxGT("Invalidar próximo");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               		= _UxGT("Ajuste fino total");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           		= _UxGT("Ajuste fino próximo");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           		= _UxGT("Armazenar malha");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                		= _UxGT("Slot de memória");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   		= _UxGT("Carregar malha da mesa");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   		= _UxGT("Salvar malha da mesa");
  PROGMEM Language_Str MSG_MESH_LOADED                     		= _UxGT("Malha M117 %i Carregada");
  PROGMEM Language_Str MSG_MESH_SAVED                      		= _UxGT("Malha M117 %i Salva");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  		= _UxGT("Nenhum armazenamento");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  		= _UxGT("Err: Salvar UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               		= _UxGT("Err: Restaurar UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    		= _UxGT("Deslocamento-Z:");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            		= _UxGT("Deslocamento-Z Parada");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           		= _UxGT("UBL passo a passo");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           		= _UxGT("1. Construir malha fria");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              		= _UxGT("2. Preenchimento inteligente");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        		= _UxGT("3. Validar malha");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             		= _UxGT("4. Ajustar tudo");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        		= _UxGT("5. Validar malha");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             		= _UxGT("6. Ajuste fino de tudo");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 		= _UxGT("7. Salvar Malha");
							
  PROGMEM Language_Str MSG_LED_CONTROL                     		= _UxGT("Controlar LED");
  PROGMEM Language_Str MSG_LEDS                            		= _UxGT("Luzes");
  PROGMEM Language_Str MSG_LED_PRESETS                     		= _UxGT("Predefinições de luz");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    		= _UxGT("Vermelho");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 		= _UxGT("laranja");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 		= _UxGT("Amarelo");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  		= _UxGT("Verde");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   		= _UxGT("Azul");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 		= _UxGT("Índigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 		= _UxGT("Violeta");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  		= _UxGT("Branco");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                		= _UxGT("Padrão");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     		= _UxGT("Luzes personalizadas");
  PROGMEM Language_Str MSG_INTENSITY_R                     		= _UxGT("Intensidade Vermelha");
  PROGMEM Language_Str MSG_INTENSITY_G                     		= _UxGT("Intensidade Verde");
  PROGMEM Language_Str MSG_INTENSITY_B                     		= _UxGT("Intensidade Azul");
  PROGMEM Language_Str MSG_INTENSITY_W                     		= _UxGT("Intensidade de Branco");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  		= _UxGT("Brilho");
							
  PROGMEM Language_Str MSG_MOVING                          		= _UxGT("Movendo...");
  PROGMEM Language_Str MSG_FREE_XY                         		= _UxGT("Liberar X-Y");
  PROGMEM Language_Str MSG_MOVE_X                          		= _UxGT("Mover X");
  PROGMEM Language_Str MSG_MOVE_Y                          		= _UxGT("Mover Y");
  PROGMEM Language_Str MSG_MOVE_Z                          		= _UxGT("Mover Z");
  PROGMEM Language_Str MSG_MOVE_E                          		= _UxGT("Extrusora");
  PROGMEM Language_Str MSG_MOVE_EN                         		= _UxGT("Extrusora *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 		= _UxGT("Extrusora Fria");
  PROGMEM Language_Str MSG_MOVE_N_MM                       = _UxGT("Mover %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       		= _UxGT("Mover 0.1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        		= _UxGT("Mover 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       		= _UxGT("Mover 10mm");
  PROGMEM Language_Str MSG_SPEED                           		= _UxGT("Velocidade");
  PROGMEM Language_Str MSG_BED_Z                           		= _UxGT("Mesa Z");
  PROGMEM Language_Str MSG_NOZZLE                          		= _UxGT("Bico");
  PROGMEM Language_Str MSG_NOZZLE_N                        		= _UxGT("Bico ~");
  PROGMEM Language_Str MSG_BED                             		= _UxGT("Mesa");
  PROGMEM Language_Str MSG_CHAMBER                         		= _UxGT("Gabinete");
  PROGMEM Language_Str MSG_FAN_SPEED                       		= _UxGT("Veloc. Fan");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     		= _UxGT("Veloc. Fan =");
  PROGMEM Language_Str MSG_STORED_FAN_N                    		= _UxGT("Fan Armazenada =");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 		= _UxGT("Veloc. Fan extra ");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               		= _UxGT("Veloc. Fan extra =");
  PROGMEM Language_Str MSG_FLOW                            		= _UxGT("Fluxo");
  PROGMEM Language_Str MSG_FLOW_N                          		= _UxGT("Fluxo ~");
  PROGMEM Language_Str MSG_CONTROL                         		= _UxGT("Controle");
  PROGMEM Language_Str MSG_MIN                             		= " " LCD_STR_THERMOMETER _UxGT(" mín.");
  PROGMEM Language_Str MSG_MAX                             		= " " LCD_STR_THERMOMETER _UxGT(" máx.");
  PROGMEM Language_Str MSG_FACTOR                          		= " " LCD_STR_THERMOMETER _UxGT(" Fato");
  PROGMEM Language_Str MSG_AUTOTEMP                        		= _UxGT("Auto-Temp.");
  PROGMEM Language_Str MSG_LCD_ON                          		= _UxGT("Ligado");
  PROGMEM Language_Str MSG_LCD_OFF                         		= _UxGT("Desligado");
  PROGMEM Language_Str MSG_PID_AUTOTUNE                    		= _UxGT("PID Auto-Ajuste");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  		= _UxGT("PID Auto-Ajuste *");
  PROGMEM Language_Str MSG_PID_P                           		= _UxGT("PID-P  ");
  PROGMEM Language_Str MSG_PID_P_E                         		= _UxGT("PID-P *  ");
  PROGMEM Language_Str MSG_PID_I                           		= _UxGT("PID-I  ");
  PROGMEM Language_Str MSG_PID_I_E                         		= _UxGT("PID-I *  ");
  PROGMEM Language_Str MSG_PID_D                           		= _UxGT("PID-D  ");
  PROGMEM Language_Str MSG_PID_D_E                         		= _UxGT("PID-D *  ");
  PROGMEM Language_Str MSG_PID_C                           		= _UxGT("PID-C  ");
  PROGMEM Language_Str MSG_PID_C_E                         		= _UxGT("PID-C *  ");
  PROGMEM Language_Str MSG_SELECT                          		= _UxGT("Selecionar");
  PROGMEM Language_Str MSG_SELECT_E                        		= _UxGT("Selecionar *");
  PROGMEM Language_Str MSG_ACC                             		= _UxGT("Aceleração");
  PROGMEM Language_Str MSG_JERK                            		= _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VA_JERK                         		= _UxGT("V") LCD_STR_A _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VB_JERK                         		= _UxGT("V") LCD_STR_B _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VC_JERK                         		= _UxGT("V") LCD_STR_C _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VE_JERK                         		= _UxGT("Vel-Empurrão");
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              		= _UxGT("Desvio de Junção");
  PROGMEM Language_Str MSG_VELOCITY                        		= _UxGT("Velocidade");
  PROGMEM Language_Str MSG_VMAX_A                          		= _UxGT("V.máx. ") LCD_STR_A;
  PROGMEM Language_Str MSG_VMAX_B                        		  = _UxGT("V.máx. ") LCD_STR_B;
  PROGMEM Language_Str MSG_VMAX_C                          		= _UxGT("V.máx. ") LCD_STR_C;
  PROGMEM Language_Str MSG_VMAX_E                          		= _UxGT("V.máx. ") LCD_STR_E;
  PROGMEM Language_Str MSG_VMAX_EN                         		= _UxGT("V.máx. *");
  PROGMEM Language_Str MSG_VMIN                            		= _UxGT("V.mín.");
  PROGMEM Language_Str MSG_VTRAV_MIN                       		= _UxGT("Vdesloc. Mín.");
  PROGMEM Language_Str MSG_ACCELERATION                    		= _UxGT("Aceleração");
  PROGMEM Language_Str MSG_AMAX_A                          		= _UxGT("A.máx. ") LCD_STR_A;
  PROGMEM Language_Str MSG_AMAX_B                          		= _UxGT("A.máx. ") LCD_STR_B;
  PROGMEM Language_Str MSG_AMAX_C                          		= _UxGT("A.máx. ") LCD_STR_C;
  PROGMEM Language_Str MSG_AMAX_E                          		= _UxGT("A.máx. ") LCD_STR_E;
  PROGMEM Language_Str MSG_AMAX_EN                         		= _UxGT("A.máx. *");
  PROGMEM Language_Str MSG_A_RETRACT                       		= _UxGT("A.Retração");
  PROGMEM Language_Str MSG_A_TRAVEL                        		= _UxGT("A.Deslocamento");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    		= _UxGT("Passos/mm");
  PROGMEM Language_Str MSG_A_STEPS                         		= LCD_STR_A _UxGT("passos/mm");
  PROGMEM Language_Str MSG_B_STEPS                         		= LCD_STR_B _UxGT("passos/mm");
  PROGMEM Language_Str MSG_C_STEPS                         		= LCD_STR_C _UxGT("passos/mm");
  PROGMEM Language_Str MSG_E_STEPS                         		= _UxGT("Epassos/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        		= _UxGT("*passos/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     		= _UxGT("Temperatura");
  PROGMEM Language_Str MSG_MOTION                          		= _UxGT("Movimento");
  PROGMEM Language_Str MSG_FILAMENT                        		= _UxGT("Filamento");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              		= _UxGT("E em mm³");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   		= _UxGT("Fil. Dia.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 		= _UxGT("Fil. Dia. *");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 		= _UxGT("Descarregar mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   		= _UxGT("Carregar mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       		= _UxGT("Avançar K");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     		= _UxGT("Avançar K *");
  PROGMEM Language_Str MSG_CONTRAST                        		= _UxGT("Contraste LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    		= _UxGT("Salvar ajustes");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     		= _UxGT("Carregar ajustes");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Rest. de emergen.");
  PROGMEM Language_Str MSG_INIT_EEPROM                     		= _UxGT("Inicializar EEPROM");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    		= _UxGT("Atualização do cartão");
  PROGMEM Language_Str MSG_RESET_PRINTER                   		= _UxGT("Reiniciar impressora");
  PROGMEM Language_Str MSG_REFRESH                         		= LCD_STR_REFRESH  _UxGT("Atualizar");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Monitorizar");
  PROGMEM Language_Str MSG_PREPARE                         		= _UxGT("Preparar");
  PROGMEM Language_Str MSG_TUNE                            		= _UxGT("Afinação");
  PROGMEM Language_Str MSG_START_PRINT                     		= _UxGT("Iniciar impressão");
  PROGMEM Language_Str MSG_BUTTON_NEXT                     		= _UxGT("Próximo");
  PROGMEM Language_Str MSG_BUTTON_INIT                     		= _UxGT("Iniciar");
  PROGMEM Language_Str MSG_BUTTON_PAUSE                    		= _UxGT("Pausar ");
  PROGMEM Language_Str MSG_BUTTON_RESUME                   		= _UxGT("Resumir");
  PROGMEM Language_Str MSG_BUTTON_STOP                     		= _UxGT("Parar");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    		= _UxGT("Imprimir");
  PROGMEM Language_Str MSG_BUTTON_RESET                    		= _UxGT("Redefinir");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   		= _UxGT("Cancelar");
  PROGMEM Language_Str MSG_BUTTON_DONE                     		= _UxGT("Feito");
  PROGMEM Language_Str MSG_BUTTON_BACK                     		= _UxGT("Voltar");
  PROGMEM Language_Str MSG_BUTTON_PROCEED                  		= _UxGT("Prosseguir");
  PROGMEM Language_Str MSG_PAUSING                            = _UxGT("Pausar...");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     		= _UxGT("Pausar impressão");
  PROGMEM Language_Str MSG_RESUME_PRINT                    		= _UxGT("Retomar impressão");
  PROGMEM Language_Str MSG_STOP_PRINT                      		= _UxGT("Parar impressão");
  PROGMEM Language_Str MSG_PRINTING_OBJECT                 		= _UxGT("Imprimindo objeto");
  PROGMEM Language_Str MSG_CANCEL_OBJECT                   		= _UxGT("Cancelar Objeto");
  PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 		= _UxGT("Cancelar Objeto =");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 		= _UxGT("Recuperar de interrupção");
  PROGMEM Language_Str MSG_MEDIA_MENU                      		= _UxGT("Imprimir do TF");
  PROGMEM Language_Str MSG_NO_MEDIA                        		= _UxGT("Sem cartão TF");
  PROGMEM Language_Str MSG_DWELL                           		= _UxGT("Dormir...");
  PROGMEM Language_Str MSG_USERWAIT                        		= _UxGT("Clique para retomar ...");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    		= _UxGT("Impressão pausada");
  PROGMEM Language_Str MSG_PRINTING                        		= _UxGT("Imprimindo...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   		= _UxGT("Impressão abortada");
  PROGMEM Language_Str MSG_NO_MOVE                         		= _UxGT("Não movimentar.");
  PROGMEM Language_Str MSG_KILLED                          		= _UxGT("FINALIZADO.");
  PROGMEM Language_Str MSG_STOPPED                         		= _UxGT("PARADO.");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 		= _UxGT("Retrair mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            		= _UxGT("Trocar Ret. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                		= _UxGT("Retrair V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            		= _UxGT("Salto mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         		= _UxGT("Desfazer Ret. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    		= _UxGT("S Desfazer Ret. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        		= _UxGT("Desfazer Ret. V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   		= _UxGT("S Desfazer Ret. V");
  PROGMEM Language_Str MSG_AUTORETRACT                     		= _UxGT("Retrair-Auto");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            		= _UxGT("Comprimento de troca");
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           		= _UxGT("Comprimento de purga");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     		= _UxGT("Ferramenta de troca");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               		= _UxGT("Elevar Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPD          		= _UxGT("Velocidade principal");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPD        		= _UxGT("Velocidade de retração");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  		= _UxGT("Bico em espera");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  		= _UxGT("Trocar Filamento");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                		= _UxGT("Trocar Filamento *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    		= _UxGT("Carregar Filamento");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  		= _UxGT("Carregar Filamento *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  		= _UxGT("Remover Filamento");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                		= _UxGT("Remover Filamento *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              		= _UxGT("Remover tudo");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Inici. cartão SD");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    		= _UxGT("Alterar cartão TF");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   		= _UxGT("Liberar cartão TF");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      		= _UxGT("Z Sensor da Mesa");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     		= _UxGT("Fator de inclinação");
  PROGMEM Language_Str MSG_BLTOUCH                         		= _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                		= _UxGT("Cmd: Auto-Teste");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   		= _UxGT("Cmd: Reiniciar");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    		= _UxGT("Cmd: Arrumar");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  		= _UxGT("Cmd: Implantar");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 		= _UxGT("Cmd: Modo SW");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 		= _UxGT("Cmd: Modo 5V");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 		= _UxGT("Cmd: Modo OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              		= _UxGT("Cmd: Modo-Loja");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           		= _UxGT("Definir BLTouch para 5V");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           		= _UxGT("Defina BLTouch para OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               		= _UxGT("Reportar Drenagem");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             		= _UxGT("PERIGO: Ajustes errados podem causar danos! Continuar?");
  PROGMEM Language_Str MSG_TOUCHMI_PROBE                   		= _UxGT("TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_INIT                    		= _UxGT("Iniciar TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   		= _UxGT("Testar Deslocamento Z");
  PROGMEM Language_Str MSG_TOUCHMI_SAVE                    		= _UxGT("Salvar");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           		= _UxGT("Implantar TouchMI");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   		= _UxGT("Implantar Sensor Z  ");
  PROGMEM Language_Str MSG_MANUAL_STOW                     		= _UxGT("Ajustar Sensor Z");
  PROGMEM Language_Str MSG_HOME_FIRST                      		= _UxGT("Início %s%s%s primeiro");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  		= _UxGT("Compensação Sensor Z");
  PROGMEM Language_Str MSG_BABYSTEP_X                      		= _UxGT("Passos iniciais X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      		= _UxGT("Passos iniciais Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      		= _UxGT("Passos iniciais Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  		= _UxGT("Total");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   		= _UxGT("Ponto final Abortar");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              		= _UxGT("Aquecimento falhou");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_BED          		= _UxGT("Aquecimento da mesa falhou");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_CHAMBER      		= _UxGT("Falha de aquecimento da câmara");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              		= _UxGT("Err: TEMP. REDUNDANTE");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 		= _UxGT("FUGA TÉRMICA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             		= _UxGT("FUGA TÉRMICA MESA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         		= _UxGT("FUGA TÉRMICA CÂMARA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     		= _UxGT("Err: TEMP. MÁX.");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     		= _UxGT("Err: TEMP. MÍN.");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_BED                 		= _UxGT("Err: TEMP. MÁX. MESA");
  PROGMEM Language_Str MSG_ERR_MINTEMP_BED                 		= _UxGT("Err: TEMP. MÍN. MESA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_CHAMBER             		= _UxGT("Err: TEMP.MÁX. CÂMARA");
  PROGMEM Language_Str MSG_ERR_MINTEMP_CHAMBER             		= _UxGT("Err: TEMP.MÍN. CÂMARA");
  PROGMEM Language_Str MSG_ERR_Z_HOMING                    		= _UxGT("Início X-Y primeiro");
  PROGMEM Language_Str MSG_HALTED                          		= _UxGT("IMPRESSORA PARADA");
  PROGMEM Language_Str MSG_PLEASE_RESET                    		= _UxGT("Reiniciar");
  PROGMEM Language_Str MSG_SHORT_DAY                       		= _UxGT("d");
  PROGMEM Language_Str MSG_SHORT_HOUR                      		= _UxGT("h");
  PROGMEM Language_Str MSG_SHORT_MINUTE                    		= _UxGT("m");
  PROGMEM Language_Str MSG_HEATING                         		= _UxGT("Aquecendo...");
  PROGMEM Language_Str MSG_EXTRUDERS_HEATING                  = _UxGT("Aquecendo Extrusoras...");
  PROGMEM Language_Str MSG_EXTRUDERS_COOLING                  = _UxGT("Resfriando Extrusoras...");
  PROGMEM Language_Str MSG_COOLING                         		= _UxGT("Resfriando...");
  PROGMEM Language_Str MSG_BED_HEATING                     		= _UxGT("Aquecendo ...");
  PROGMEM Language_Str MSG_BED_COOLING                     		= _UxGT("Resfriando mesa ...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 		= _UxGT("Aquecendo Câmara ...");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 		= _UxGT("Resfriando Câmara ...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 		= _UxGT("Calibração Delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               		= _UxGT("Calibrar X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               		= _UxGT("Calibrar Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               		= _UxGT("Calibrar Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          		= _UxGT("Calibrar centro");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  		= _UxGT("Ajustes Delta");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            		= _UxGT("Calibração Automática");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          		= _UxGT("Definir altura delta");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Fim de curso");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  		= _UxGT("Aste Diag. Delta");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    		= _UxGT("Altura");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    		= _UxGT("Raio");
  PROGMEM Language_Str MSG_INFO_MENU                       		= _UxGT("Sobre a impressora");
  PROGMEM Language_Str MSG_KILL_EXPECTED_PRINTER           = _UxGT("Impressora Incorreta");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 		= _UxGT("Nivelamento de 3 pontos");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 		= _UxGT("Nivelamento Linear");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               		= _UxGT("Nivelamento Bilinear");
  PROGMEM Language_Str MSG_UBL_LEVELING                    		= _UxGT("Nivelamento de mesa unificado");
  PROGMEM Language_Str MSG_MESH_LEVELING                   		= _UxGT("Nivelamento de malha");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 		= _UxGT("Estatísticas da impressora");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 		= _UxGT("Informações da placa");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            		= _UxGT("Termistores");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  		= _UxGT("Extrusoras");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   		= _UxGT("Transmissão");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   		= _UxGT("Protocolo");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF                		= _UxGT("Sensor de Fuga: Desligado");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_ON                 		= _UxGT("Sensor de Fuga: Ligado");
							
  PROGMEM Language_Str MSG_CASE_LIGHT                      		= _UxGT("Iluminação");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           		= _UxGT("Brilho da Luz");
  PROGMEM Language_Str MSG_EXPECTED_PRINTER                		= _UxGT("IMPRESSORA INCORRETA");
					   
  #if LCD_WIDTH >= 20  
  PROGMEM Language_Str MSG_INFO_PRINT_COUNT     			    	= _UxGT("Contagem de impressão");
  PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS			    	= _UxGT("Concluído");
  PROGMEM Language_Str MSG_INFO_PRINT_TIME      				    = _UxGT("Tempo Total de Impressão");
  PROGMEM Language_Str MSG_TOP_LEFT                        = _UxGT("Superior Esquerdo");
  PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT  				    = _UxGT("Total Extrudado");
  PROGMEM Language_Str MSG_INFO_PRINT_TIME         				= _UxGT("Total");
  PROGMEM Language_Str MSG_BOTTOM_LEFT                     = _UxGT("Inferior Esquerdo");
  PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT     				= _UxGT("Extrudado");
  #endif					   
  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   		= _UxGT("Temp. Mín.");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   		= _UxGT("Temp. Máx.");
  PROGMEM Language_Str MSG_TOP_RIGHT                       = _UxGT("Superior Direto");
  PROGMEM Language_Str MSG_BOTTOM_RIGHT                    = _UxGT("Inferior Direto");
  PROGMEM Language_Str MSG_CALIBRATION_COMPLETED           = _UxGT("Calibração Completa");
  PROGMEM Language_Str MSG_ERROR_TMC                       		= _UxGT("ERRO DE CONEXÃO TMC");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                		= _UxGT("Gravar DAC EEPROM");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          		= _UxGT("MUDANÇA DE FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    		= _UxGT("IMPRIMIR EM PAUSA");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     		= _UxGT("CARREGAR FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   		= _UxGT("REMOVER FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   		= _UxGT("RETOMAR OPÇÕES:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    		= _UxGT("Expurgue mais");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   		= _UxGT("Continuar");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          		= _UxGT("Bico: ");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   		= _UxGT("Sensor de falta");
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              		= _UxGT("Ses. de Falta dist. mm");
  PROGMEM Language_Str MSG_LCD_HOMING_FAILED               		= _UxGT("Falha ao retornar");
  PROGMEM Language_Str MSG_CALIBRATION_FAILED              = _UxGT("Calibração Falhou");
  PROGMEM Language_Str MSG_M600_TOO_COLD                   		= _UxGT("M600: Muito frio");
							
  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     		= _UxGT("ESCOLHER FILAMENTO");
  PROGMEM Language_Str MSG_MMU2_MENU                       		= _UxGT("MMU");
  PROGMEM Language_Str MSG_MMU2_WRONG_FIRMWARE             		= _UxGT("Atualize o firmware MMU!");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             		= _UxGT("MMU precisa de atenção.");
  PROGMEM Language_Str MSG_MMU2_RESUME                     		= _UxGT("Retomar impressão");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   		= _UxGT("Retomar...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              		= _UxGT("Carregar Filamento");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   		= _UxGT("Carregar tudo");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             		= _UxGT("Carregar no bico");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             		= _UxGT("Ejetar Filamento");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           		= _UxGT("Ejetar Filamento ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            		= _UxGT("Remover Filamento");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           		= _UxGT("Carregando Fil. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          		= _UxGT("Ejetando Fil...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         		= _UxGT("Removendo Fil...");
  PROGMEM Language_Str MSG_MMU2_ALL                        		= _UxGT("Todos");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 		= _UxGT("Filamento ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      		= _UxGT("Reiniciar MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  		= _UxGT("Redefinindo MMU ...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              		= _UxGT("Remover, clique");
							
  PROGMEM Language_Str MSG_MIX                             		= _UxGT("Misturar");
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 		= _UxGT("Componente =");
  PROGMEM Language_Str MSG_MIXER                           		= _UxGT("Mexer");
  PROGMEM Language_Str MSG_GRADIENT                        		= _UxGT("Gradiente");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   		= _UxGT("Gradiente Completo");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      		= _UxGT("Mistura Alternância");
  PROGMEM Language_Str MSG_CYCLE_MIX                       		= _UxGT("Mistura Ciclo");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    		= _UxGT("Mistura Gradiente");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                		= _UxGT("Gradiente reverso");
  PROGMEM Language_Str MSG_ACTIVE_VTOOL                    		= _UxGT("Ativar  Ferramenta-V");
  PROGMEM Language_Str MSG_START_VTOOL                     		= _UxGT("Iniciar Ferramenta-V");
  PROGMEM Language_Str MSG_END_VTOOL                       		= _UxGT("Fechar Ferramenta-V");
  PROGMEM Language_Str MSG_GRADIENT_ALIAS                  		= _UxGT("Apelido Ferramenta-V");
  PROGMEM Language_Str MSG_RESET_VTOOLS                    		= _UxGT("Reiniciar Ferramentas-V");
  PROGMEM Language_Str MSG_COMMIT_VTOOL                    		= _UxGT("Consignar Mix Ferramenta-V");
  PROGMEM Language_Str MSG_VTOOLS_RESET                    		= _UxGT("Ferramentas-V foram reiniciadas");
  PROGMEM Language_Str MSG_START_Z                         		= _UxGT("Iniciar Z:");
  PROGMEM Language_Str MSG_END_Z                           		= _UxGT("Finalizar Z:");
							
  PROGMEM Language_Str MSG_GAMES                           		= _UxGT("Jogos");
  PROGMEM Language_Str MSG_BRICKOUT                        		= _UxGT("Brickout");
  PROGMEM Language_Str MSG_INVADERS                        		= _UxGT("Invasores");
  PROGMEM Language_Str MSG_SNAKE                           		= _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            		= _UxGT("Labirinto");

  #define MSG_1_LINE(A)     A "\0"   "\0"
  #define MSG_2_LINE(A,B)   A "\0" B "\0"
  #define MSG_3_LINE(A,B,C) A "\0" B "\0" C				   

  #if LCD_HEIGHT >= 4
  PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING       		= _UxGT(MSG_2_LINE("Pressione para","retomar a impressão"));
  PROGMEM Language_Str MSG_PAUSE_PRINT_INIT             		= _UxGT(MSG_1_LINE("Estacionando..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT         		= _UxGT(MSG_3_LINE("Aguarde","mudança de filamento", "para começar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT       		= _UxGT(MSG_3_LINE("Insira o filamento", "e pressione o botão para","continuar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT         		= _UxGT(MSG_2_LINE("Pressione o botão para","aquecer o bico"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING      		= _UxGT(MSG_2_LINE("Aquecimento do bico", "Aguarde por gentileza..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD       		= _UxGT(MSG_2_LINE("Aguarde","remover o filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD         		= _UxGT(MSG_2_LINE("Aguarde","carga de filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE        		= _UxGT(MSG_2_LINE("Aguarde","expurgo do filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE   		= _UxGT(MSG_2_LINE("Clique para terminar","expurgo do filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME       		= _UxGT(MSG_2_LINE("Aguarde a impressão", "para retomar ..."));				   
  #else               		
  PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING       		= _UxGT(MSG_1_LINE("Clique para continuar"));
  PROGMEM Language_Str MSG_PAUSE_PRINT_INIT             		= _UxGT(MSG_1_LINE("Estacionando..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT         		= _UxGT(MSG_1_LINE("Aguarde por gentileza..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT       		= _UxGT(MSG_1_LINE("Inserir e clicar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT         		= _UxGT(MSG_1_LINE("Clique para aquecer"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING      		= _UxGT(MSG_1_LINE("Aquecendo..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD       		= _UxGT(MSG_1_LINE("Ejetando ..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD         		= _UxGT(MSG_1_LINE("Carregando..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE        		= _UxGT(MSG_1_LINE("Expurgando ..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE   		= _UxGT(MSG_1_LINE("Clique para terminar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME       		= _UxGT(MSG_1_LINE("Retomando..."));
  #endif

  PROGMEM Language_Str MSG_TMC_DRIVERS              			= _UxGT("Motores TMC");
  PROGMEM Language_Str MSG_TMC_CURRENT              			= _UxGT("Corrente do Motor");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS          			= _UxGT("Limiar Híbrido");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS          			= _UxGT("Início sem Sensor");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE        			= _UxGT("Modo Passos");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED      			= _UxGT("StealthChop Ativado");
  PROGMEM Language_Str MSG_SERVICE_RESET            			= _UxGT("Redefinir");
  PROGMEM Language_Str MSG_SERVICE_IN               			= _UxGT(" dentro:");
  PROGMEM Language_Str MSG_BACKLASH                 			= _UxGT("Folga");
  PROGMEM Language_Str MSG_BACKLASH_A               			= LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B               			= LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_C               			= LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION      			= _UxGT("Correção");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING       			= _UxGT("Alisamento");

}
