/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (c) 2017 Victor Perez
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
 * Fast I/O interfaces for STM32F1
 * These use GPIO functions instead of Direct Port Manipulation, as on AVR.
 */
#include "../cores/io.h"
#include "../board/startup.h"

#define READ(IO)                (PORT_GetBitMapp(IO) ? HIGH : LOW)
#define WRITE(IO,V)             (V>0? PORT_SetBitsMapp(IO) : PORT_ResetBitsMapp(IO))
#define TOGGLE(IO)              (PORT_ToggleMapp(IO))

#define _GET_MODE(IO)              gpio_get_mode(IO)
#define _SET_MODE(IO,M)        gpio_set_mode(IO,M)
#define _SET_OUTPUT(IO)         _SET_MODE(IO, OUTPUT)

#define OUT_WRITE(IO,V)         do{ _SET_OUTPUT(IO); WRITE(IO,V); }while(0)

#define SET_INPUT(IO)           _SET_MODE(IO, INPUT)
#define SET_INPUT_PULLUP(IO)    _SET_MODE(IO, INPUT_PULLUP)
#define SET_OUTPUT(IO)          OUT_WRITE(IO, LOW)

#define PWM_PIN(IO)             0//(PIN_MAP[IO].timer_device != nullptr)

// digitalRead/Write wrappers
#define extDigitalRead(IO)      digitalRead(IO)
#define extDigitalWrite(IO,V)   digitalWrite(IO,V)

