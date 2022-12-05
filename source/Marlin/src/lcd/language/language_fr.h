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
 * French
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */

#define DISPLAY_CHARSET_ISO10646_1

namespace Language_fr {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Français");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" prête.");
  PROGMEM Language_Str MSG_YES                             = _UxGT("Oui");
  PROGMEM Language_Str MSG_NO                              = _UxGT("Non");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Retour");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Annulation en cours");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Carte insérée");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Carte retirée");
  PROGMEM Language_Str MSG_MEDIA_RELEASED                  = _UxGT("Carte éjectée");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("En attente de carte");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Erreur de lecture de carte");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("USB retiré");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Echec de démarrage USB");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Fin de course. (butée)");
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Fin de course logiciel");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Menu principale");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Réglages avancés");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Configuration");
  PROGMEM Language_Str MSG_RUN_AUTO_FILES                  = _UxGT("Exéc. auto.gcode");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Désactiver moteurs");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Menu débogage");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Test barre progress");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Retour au point zéro");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Point zéro X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Point zéro Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Point zéro Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Auto alignement Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Point zéro XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Cliquez pour commencer");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Point suivant");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Nivelage terminé !");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Nivelage activé sur toutes les couches");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Décalage d'origine");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Décalages appliqués");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Définir l'origine");
  PROGMEM Language_Str MSG_ASSISTED_TRAMMING               = _UxGT("Assistant Molettes");
  PROGMEM Language_Str MSG_TRAMMING_WIZARD                 = _UxGT("Assistant Molettes");
  PROGMEM Language_Str MSG_SELECT_ORIGIN                   = _UxGT("Molette du lit"); // Not a selection of the origin
  PROGMEM Language_Str MSG_LAST_VALUE_SP                   = _UxGT("Ecart origine ");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Préchauffer ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Préchauffer ") PREHEAT_1_LABEL " ~";
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Préchauffer ") PREHEAT_1_LABEL _UxGT(" Buse");
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Préchauffer ") PREHEAT_1_LABEL _UxGT(" Buse ~");
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Préchauffer ") PREHEAT_1_LABEL _UxGT(" Tout");
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Préchauffer ") PREHEAT_1_LABEL _UxGT(" Plateau");
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Préchauffer ") PREHEAT_1_LABEL _UxGT(" Réglages");

    PROGMEM Language_Str MSG_PREHEAT_M                     = _UxGT("Préchauffer $");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_H                   = _UxGT("Préchauffer $ ~");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_END                 = _UxGT("Préchauffer $ Buse");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E               = _UxGT("Préchauffer $ Buse ~");
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                 = _UxGT("Préchauffer $ Tout");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY             = _UxGT("Préchauffer $ Plateau");
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS            = _UxGT("Préchauffer $ Réglages");
 #endif
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Préchauffage personnalisé");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Refroidir");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Contrôle de laser");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Laser désactivé");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Laser activé");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Alimentation de laser");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Contrôle de la broche");
  PROGMEM Language_Str MSG_SPINDLE_OFF                     = _UxGT("Broche désactivée");
  PROGMEM Language_Str MSG_SPINDLE_ON                      = _UxGT("Broche activée");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   = _UxGT("Alimentation de la broche");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Inversion de la broche");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Mettre sous tension");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Mettre hors tension");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Extrusion");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Retrait");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Déplacement des axes");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Nivelage du plateau");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Niveler le plateau");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Niveler les coins");
  PROGMEM Language_Str MSG_LEVEL_CORNERS_RAISE             = _UxGT("Relever le coin jusqu'à la sonde");
  PROGMEM Language_Str MSG_LEVEL_CORNERS_IN_RANGE          = _UxGT("Coins dans la tolérance. Niveau lit ");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Coin suivant");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Editeur de maillage");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Editer le maillage");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Arrêt de l'édition de maillage");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Point de test");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Index X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Index Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Valeur Z");
  PROGMEM Language_Str MSG_CUSTOM_COMMANDS                 = _UxGT("Commandes perso");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("Test M48");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("Point M48");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Déviation");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Mode IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Décalage d'outil");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Stationnement automatique");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplication");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Duplication en miroir");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Contrôle total");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2em buse X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2em buse Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2em buse Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("G29 en cours");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Outils de UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Nivelage du plateau unifié");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Point d'inclinaison");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Construire manuellement un maillage");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Placer la cale et mesurer");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Mesurer");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Déplacer et mesurer le plateau");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Passer au suivant");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Activer UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Désactiver UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Température du plateau");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Température du plateau");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Température de buse");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Température de buse");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Edition de maillage");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Editer le maillage personnalisé");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Finition de Maillage");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Edition de maillage terminé");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Créer la grille");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_UBL_BUILD_MESH_M              = _UxGT("Créer grille $");
    PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M           = _UxGT("Impr. grille $");
  #endif
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Créer grille ...");
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Construire un maillage froid");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Ajuster la hauteur du maillage");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Hauteur total");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Valider le maillage");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Valider le maillage  (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Valider le maillage (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Valider le maillage personnalisé");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("Chauffage  du plateau G26");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("Chauffage  de buse G26");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Amorçage manuel ...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Amorçage de longueur fixe");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Amorçage terminé");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 annulé");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Quitter G26");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Continuer le maillage du plateau");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Nivelage du maillage");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Nivelage en 3 points");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Nivelage du maillage de la grille");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Nivelage du maillage");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Points secondaires");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Type de carte");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Sauvegarder la carte de maillage");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Sauvegarde la carte à l'hôte");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Sauvegarde la carte à CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Sauvegarder la carte à l'imprimante");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Sauvegarder les Informations UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Montant à remplir");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Remplissage manuel");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Remplissage intelligent");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Remplir le maillage");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Tout annuler");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Annuler le plus proche");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Tout régler");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Réglage fin pour le plus proche");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Stockage de maillage");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Emplacement de mémoire");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Charger le mailage du plateau");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Sauvegarder le maillage du plateau");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("Maillage a chargé i%");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("Maillage a sauvegardé i%");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Pas de stockage");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Erreur de sauvegarde UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Erreur de restauration UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Décalage Z :");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Décalage Z arrêté");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL pas à pas");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1. Construire un maillage froid");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2. Remplissage intelligent");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3. Valider le maillage");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4. Ajuster tout");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5. Valider le maillage");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6. Tout régler");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7. Enregistrer le maillage du plateau");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Contrôle de LED");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Eclairage");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Préréglages d'éclairage");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Rouge");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Orange");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Jaune");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Vert");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Bleu");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Indigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Violet");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Blanc");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Défaut");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Eclairage personnalisé");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Intensité de rouge");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Intensité de vert");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Intensité de bleu");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Intensité de blanc");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Luminosité");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Déplacement");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("XY libre");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Déplacement de X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Déplacement de Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Déplacement de Z");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Extrudeur");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Extrudeur*");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Buse trop froide");
  PROGMEM Language_Str MSG_MOVE_N_MM                       = _UxGT("Déplacer %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Déplacer 0.1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Déplacer 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Déplacer 10mm");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Vitesse");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Plateau Z");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Buse");
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Buse");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Plateau");
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Enceinte");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Vitesse de ventilateur");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Vitesse de ventilateur =");
  PROGMEM Language_Str MSG_STORED_FAN_N                    = _UxGT("Ventilateur stocké =");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Vitesse de ventilateur supplémentaire");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Vitesse de ventilateur supplémentaire =");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Flux");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Flux ~  ");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Contrôle");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Max");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Facteur");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Temp. Automatique");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Activé");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Désactivé");
  PROGMEM Language_Str MSG_PID_AUTOTUNE                    = _UxGT("Auto-calibrage de PID");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  = _UxGT("Auto-calibrage de PID");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_DONE               = _UxGT("Tuning PID terminé");
  PROGMEM Language_Str MSG_PID_BAD_EXTRUDER_NUM            = _UxGT("Echec Autotune! E incorrect");
  PROGMEM Language_Str MSG_PID_I                           = _UxGT("PID-I  ");
  PROGMEM Language_Str MSG_PID_TEMP_TOO_HIGH               = _UxGT("Echec Autotune! Temp. trop haute");
  PROGMEM Language_Str MSG_PID_D                           = _UxGT("PID-D  ");
  PROGMEM Language_Str MSG_PID_TIMEOUT                     = _UxGT("Echec Autotune! Opér. expirée");
  PROGMEM Language_Str MSG_PID_C                           = _UxGT("PID-C  ");
  PROGMEM Language_Str MSG_PID_C_E                         = _UxGT("PID-C *  ");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Sélection");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Sélection *  ");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Accélérer");
  PROGMEM Language_Str MSG_JERK                            = _UxGT("Jerk");
  PROGMEM Language_Str MSG_VA_JERK                         = _UxGT("V") LCD_STR_A _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VB_JERK                         = _UxGT("V") LCD_STR_B _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VC_JERK                         = _UxGT("V") LCD_STR_C _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VE_JERK                         = _UxGT("Ve-Jerk");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Rapidité");
  PROGMEM Language_Str MSG_VMAX_A                          = _UxGT("Vmax ") LCD_STR_A;
  PROGMEM Language_Str MSG_VMAX_B                          = _UxGT("Vmax ") LCD_STR_B;
  PROGMEM Language_Str MSG_VMAX_C                          = _UxGT("Vmax ") LCD_STR_C;
  PROGMEM Language_Str MSG_VMAX_E                          = _UxGT("Vmax ") LCD_STR_E;
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              = _UxGT("Déviat. jonct.");
  PROGMEM Language_Str MSG_VMIN                            = _UxGT("Vmin");
  PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("VTrav Min");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Accélération");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("Acc.rétraction");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("Acc.course");
  PROGMEM Language_Str MSG_XY_FREQUENCY_LIMIT              = _UxGT("Fréquence max");
  PROGMEM Language_Str MSG_XY_FREQUENCY_FEEDRATE           = _UxGT("Vitesse min");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Pas/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT("Pas/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT("Pas/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT("Pas/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("EPas/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("*Pas/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Température");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Déplacement");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filament");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E dans mm³  ");
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT                = _UxGT("Limite en mm") SUPERSCRIPT_THREE;
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT_E              = _UxGT("Limite *");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Dia. de Fil. ");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Dia. de Fil. ");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Décharger mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Charger mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("Avancer K");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("Avancer K");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Contaste LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Sauvegarder config");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Lire config");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Restaurer défauts");
  PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("Initialiser EEPROM");
  PROGMEM Language_Str MSG_SETTINGS_STORED                 = _UxGT("Config. enregistrée");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("MaJ Firmware SD");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("Réinitialiser l'imprimante");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH  _UxGT("Actualiser");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Écran");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Préparer");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Réglages");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Démarrer impression");
  PROGMEM Language_Str MSG_BUTTON_NEXT                     = _UxGT("Suivant");
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Initialiser");
  PROGMEM Language_Str MSG_BUTTON_PAUSE                    = _UxGT("Pause");
  PROGMEM Language_Str MSG_BUTTON_RESUME                   = _UxGT("Reprendre");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Arrêt");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Imprimer");
  PROGMEM Language_Str MSG_BUTTON_RESET                    = _UxGT("Réinitialiser");
  PROGMEM Language_Str MSG_BUTTON_IGNORE                   = _UxGT("Ignorer");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Annuler");
  PROGMEM Language_Str MSG_BUTTON_DONE                     = _UxGT("Terminé");
  PROGMEM Language_Str MSG_BUTTON_BACK                     = _UxGT("Retour");
  PROGMEM Language_Str MSG_BUTTON_PROCEED                  = _UxGT("Poursuivre");
  PROGMEM Language_Str MSG_BUTTON_SKIP                     = _UxGT("Passer");
  PROGMEM Language_Str MSG_PAUSING                         = _UxGT("En pause...");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pause");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Reprendre l'impression");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Arrêter l'impression");
  PROGMEM Language_Str MSG_PRINTING_OBJECT                 = _UxGT("Imprimer objet");
  PROGMEM Language_Str MSG_CANCEL_OBJECT                   = _UxGT("Annuler objet");
  PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 = _UxGT("Annuler objet =");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Reprendre après coupure");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Carte SD");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("Pas de carte SD");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Repos...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Cliquer pour reprendre");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Impression en pause");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Impression en cours");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Impression annulée");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Pas de déplacement");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("MORT");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("ARRETE");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Retrait mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Swap Re.mm  ");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Retrait V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Hop mm  ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("UnRet mm  ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("S UnRet mm  ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("UnRet V  ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("S UnRet V  ");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("AutoRetr.  ");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("Distance retrait de swap");
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           = _UxGT("Longueur de purge");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Changement d'outil");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Augmenter Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED        = _UxGT("Vitesse primaire");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED      = _UxGT("Vitesse rétract°");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Buse en veille");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Changement de filament");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Changement de filament");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Charger le filament");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Charger le filament");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  = _UxGT("Retirer le filament");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                = _UxGT("Retirer le filament");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Décharger tout");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Charger le média");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Changer la carte SD");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   = _UxGT("Libérez la carte SD");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Sonde Z hors plateau");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Facteur d'écart");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BL Touch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("Cmd: Auto-test  ");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Cmd: Réinitialiser ");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("Cmd: Chargement ");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("Cmd: Déployer");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("Cmd: Mode-SW  ");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("Cmd: Mode-5V  ");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("Cmd: Mode-OD  ");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              = _UxGT("Cmd: Sauvegarde de la mode");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           = _UxGT("Réglez BLTouch sur 5V");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           = _UxGT("Réglez BLTouch sur OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               = _UxGT("Signaler le drain");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             = _UxGT("DANGER: Des réglages incorrects peuvent causer des dommages! Continuer malgré tout?");
  PROGMEM Language_Str MSG_TOUCHMI_PROBE                   = _UxGT("TouchMI  ");
  PROGMEM Language_Str MSG_TOUCHMI_INIT                    = _UxGT("Initialiser TouchMI  ");
  PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   = _UxGT("Test de décalage Z");
  PROGMEM Language_Str MSG_TOUCHMI_SAVE                    = _UxGT("Sauvegarder");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           = _UxGT("Déployer TouchMI");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Déployer la sonde Z");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Ranger la sonde Z");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Point zero %s %s %s en premier");
  PROGMEM Language_Str MSG_ZPROBE_OFFSETS                  = _UxGT("Position sonde Z");
  PROGMEM Language_Str MSG_ZPROBE_XOFFSET                  = _UxGT("Décalage X");
  PROGMEM Language_Str MSG_ZPROBE_YOFFSET                  = _UxGT("Décalage Y");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Décalage Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Total");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Fin de course avorté");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Échec du chauffage");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_BED          = _UxGT("Échec du chauffage du lit");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_CHAMBER      = _UxGT("Échec du chauffage de la chambre");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Err: REDUNDANT TEMP");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("FUITE THERMIQUE");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("FUITE THERMIQUE DE LIT");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("FUITE THERMIQUE CHAMBRE");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("err: TEMPMAX");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("err: TEMPMIN");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_BED                 = _UxGT("err: TEMPMAX LIT");
  PROGMEM Language_Str MSG_ERR_MINTEMP_BED                 = _UxGT("err: TEMPMIN LIT");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_CHAMBER             = _UxGT("err: TEMPMAX CHAMBRE");
  PROGMEM Language_Str MSG_ERR_MINTEMP_CHAMBER             = _UxGT("err: TEMPMIN CHAMBRE");
  PROGMEM Language_Str MSG_ERR_Z_HOMING                    = _UxGT("Point zero XY en premier");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("IMPRIMANTE ARRETEE");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Veuillez réinitialiser");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("d");
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("h");
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("m");
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Chauffage ….");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Refroidissement");
  PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Lit en chauffe...");
  PROGMEM Language_Str MSG_BED_COOLING                     = _UxGT("Refroid. du lit...");
  PROGMEM Language_Str MSG_PROBE_HEATING                   = _UxGT("Probe en chauffe...");
  PROGMEM Language_Str MSG_PROBE_COOLING                   = _UxGT("Refroid. Probe...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Chauffage chambre");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 = _UxGT("Refroidissement chambre");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Étalonnage delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Etalonner X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Etalonner Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Etalonner Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Etalonner centre");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Paramètres delta");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Auto étalonnage");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Définir la hauteur delta");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Décalage de la sonde Z");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Diag Rod");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Hauteur");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Rayon");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("Infos");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Informations imprimante");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("Nivelage 3 points");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Nivelage linéaire");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Nivellement bilinéaire");
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Nivellement de lit unifié");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Nivellement du maillage");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Statistiques de l'imprimante");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Tableau de bord");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Thermistances");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Extrudeurs");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Baud");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protocol");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF                = _UxGT("Runaway Watch: OFF");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_ON                 = _UxGT("Runaway Watch: ON");
  PROGMEM Language_Str MSG_HOTEND_IDLE_TIMEOUT             = _UxGT("Hotend Idle Timeout");

  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Case Light");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Luminosité éclairage");
  PROGMEM Language_Str MSG_KILL_EXPECTED_PRINTER           = _UxGT("Imprimante incorrecte");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Compteur d'impressions");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Complété");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Temps total d'impression");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Temps de travail le plus long");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Total extrudé");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Impressions");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Completes");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Total");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("La plus longue");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Extrudé");
  #endif

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Temp mini");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Temp max");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("PSU");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Force d'entraînement");
  PROGMEM Language_Str MSG_DAC_PERCENT_X                   = _UxGT("X Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Y                   = _UxGT("Y Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Z                   = _UxGT("Z Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_E                   = _UxGT("E Driver %");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Ecriture EEPROM DAC");
  PROGMEM Language_Str MSG_ERROR_TMC                       = _UxGT("ERREUR CONNEXION TMC");

  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("CHANGEMENT FILAMENT");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("IMPRESSION EN PAUSE");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("CHARGEMENT FILAMENT");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("RETRAIT FILAMENT");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("OPTIONS DE REPRISE:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Purger plus");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Continuer");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("Buse:");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Detecteur filament");
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              = _UxGT("Detecteur filament dist mm");
  PROGMEM Language_Str MSG_KILL_HOMING_FAILED              = _UxGT("Echec origine");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Erreur sonde");
  PROGMEM Language_Str MSG_M600_TOO_COLD                   = _UxGT("M600: trop froid");
  PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE              = _UxGT("MAJ firmware MMU!!");
  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("CHOISIR FILEAMENT");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU a besoin d'attention.");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Reprendre l'impression");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Reprise ...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Charger le filament");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Tout charger");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Charger la buse");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Ejecter le filament");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Ejecter le filament");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("retirer le filament");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Chargement Fil. %...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Ejection Fil. …");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Retrait Fil….");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Tout");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Filament");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Restaurer MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Restauration MMU…");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Supprimer, cliquez ");

  PROGMEM Language_Str MSG_MIX                             = _UxGT("Mixage");
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Composant =");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Mixer");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Dégradé");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Dégradé complet");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Basculer le mixage");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Cycle de mixage");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Mixage dégradé");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Inversion dégradé");
  PROGMEM Language_Str MSG_ACTIVE_VTOOL                    = _UxGT("Activer outil V");
  PROGMEM Language_Str MSG_START_VTOOL                     = _UxGT("démarrer outil V");
  PROGMEM Language_Str MSG_END_VTOOL                       = _UxGT("  Terminer outil V");
  PROGMEM Language_Str MSG_GRADIENT_ALIAS                  = _UxGT("Alias outil V");
  PROGMEM Language_Str MSG_RESET_VTOOLS                    = _UxGT("Réinitialiser outil V");
  PROGMEM Language_Str MSG_COMMIT_VTOOL                    = _UxGT("Commit V-tool Mix");
  PROGMEM Language_Str MSG_VTOOLS_RESET                    = _UxGT("Les outils en V ont été réinitialisés");
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Démarrer Z:");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT(" Fin Z:");

  PROGMEM Language_Str MSG_GAMES                           = _UxGT("Jeux");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Brickout");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invaders");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Maze");

  PROGMEM Language_Str MSG_BAD_PAGE                        = _UxGT("Erreur index page");
  PROGMEM Language_Str MSG_BAD_PAGE_SPEED                  = _UxGT("Erreur vitesse page");

  #if 0//LCD_HEIGHT >= 4
    // Up to 3 lines allowed
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Appuyez sur le bouton", "reprendre l'impression"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING           = _UxGT(MSG_1_LINE("Parking..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Attendez", "changement de filament", "pour démarrer"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Insérez le filament", "et appuyez sur le bouton", "pour continuer"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Appuyez sur le bouton", "chauffer la buse"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Chauffage de la buse", "Veuillez patienter ..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_2_LINE("Attendez", "déchargement du filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_2_LINE("Attendez", "chargement du filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Attendez", "purge du filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Cliquez pour terminer", "purge du filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_2_LINE("Attendez l'impression", "pour reprendre ..."));
  #else
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_1_LINE("Cliquez pour continuer"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Stationnement"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Veuillez patienter…"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Insérez et cliquez"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_1_LINE("Cliquez pour chauffer"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Chauffage.."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Ejection.."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Chargement…"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Purge…"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_1_LINE("Cliquez pour terminer"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Reprendre..."));
  #endif
  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("Drivers TMC");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Drivers courant");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Seuil hybride");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("Prise de référence sans capteur");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Mode pas à pas");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("StealthChop Enabled");
  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Réinitialiser");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT(" in:");
  PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Contrecoup");
  PROGMEM Language_Str MSG_BACKLASH_A                      = LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B                      = LCD_STR_B;
  PROGMEM Language_Str MSG_BACKLASH_C                      = LCD_STR_C;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Correction");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Lissage");

  PROGMEM Language_Str MSG_LEVEL_X_AXIS                    = _UxGT("Niveau axe X");
  PROGMEM Language_Str MSG_AUTO_CALIBRATE                  = _UxGT("Etalon. auto.");
  #if ENABLED(TOUCH_UI_FTDI_EVE)
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("En protection, temp. réduite. Ok pour rechauffer et continuer.");
  #else
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("En protection");
  #endif
  PROGMEM Language_Str MSG_REHEAT                          = _UxGT("Chauffer");
  PROGMEM Language_Str MSG_REHEATING                       = _UxGT("Réchauffe...");

  PROGMEM Language_Str MSG_PROBE_WIZARD                    = _UxGT("Assistant Sonde Z");
  PROGMEM Language_Str MSG_PROBE_WIZARD_PROBING            = _UxGT("Mesure référence");
  PROGMEM Language_Str MSG_PROBE_WIZARD_MOVING             = _UxGT("Dépl. vers pos");

  PROGMEM Language_Str MSG_SOUND                           = _UxGT("Sons");

  PROGMEM Language_Str MSG_TOP_LEFT                        = _UxGT("Coin haut gauche");
  PROGMEM Language_Str MSG_BOTTOM_LEFT                     = _UxGT("Coin bas gauche");
  PROGMEM Language_Str MSG_TOP_RIGHT                       = _UxGT("Coin haut droit");
  PROGMEM Language_Str MSG_BOTTOM_RIGHT                    = _UxGT("Coin bas droit");
  PROGMEM Language_Str MSG_CALIBRATION_COMPLETED           = _UxGT("Calibration terminée");
  PROGMEM Language_Str MSG_CALIBRATION_FAILED              = _UxGT("Échec de l'étalonnage");
}
