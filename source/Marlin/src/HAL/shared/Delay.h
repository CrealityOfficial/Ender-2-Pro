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

#include "../../inc/MarlinConfigPre.h"

/**
 * Busy wait delay cycles routines:
 *
 *  DELAY_CYCLES(count): Delay execution in cycles
 *  DELAY_NS(count): Delay execution in nanoseconds
 *  DELAY_US(count): Delay execution in microseconds
 */

#include "../../core/millis_t.h"
#include "../../core/macros.h"

void calibrate_delay_loop();
FORCE_INLINE static void DELAY_CYCLES(uint32_t x) {
 }

// Delay in nanoseconds
#define DELAY_NS(x) DELAY_CYCLES( (x) * (F_CPU / 1000000UL) / 1000UL )

// Delay in microseconds
//#define DELAY_US(x) DELAY_US( (x) * (F_CPU / 1000000UL) )
#define DELAY_US(x) Ddl_Delay1us(x)

