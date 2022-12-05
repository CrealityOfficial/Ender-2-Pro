/**
 * Marlin 3D Printer Firmware
 *
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 * Copyright (c) 2016 Bob Cousins bobcousins42@googlemail.com
 * Copyright (c) 2015-2016 Nico Tonnhofer wurstnase.reprap@gmail.com
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

/**
 * HAL for stm32duino.com based on Libmaple and compatible (STM32F1)
 */

#ifdef __STM32F1__

#include "../../inc/MarlinConfig.h"
#include "HAL.h"

#if defined(SERIAL_USB) && !HAS_SD_HOST_DRIVE
  //USBSerial SerialUSB;
#endif

uint16_t HAL_adc_result;

// ------------------------
// Private Variables
// ------------------------
//STM32ADC adc(ADC1);

//uint16_t HAL_adc_results[ADC_PIN_COUNT];

// ------------------------
// Public functions
// ------------------------

//
// Leave PA11/PA12 intact if USBSerial is not used
//
#if SERIAL_USB
  namespace wirish { namespace priv {
        void board_setup_usb() {}
  }
}
#endif

void HAL_init() {
  NVIC_SetPriorityGrouping(0x3);
  #if PIN_EXISTS(LED)
    OUT_WRITE(LED_PIN, LOW);
  #endif
}

// HAL idle task
void HAL_idletask() {
}

void HAL_clear_reset_source() { }

/**
 * TODO: Check this and change or remove.
 */
uint8_t HAL_get_reset_source(){
	return 1; 
}

void _delay_ms(const int delay_ms) { delay(delay_ms); }

extern "C" {
  extern unsigned int _ebss; // end of bss section
}


// ------------------------
// ADC
// ------------------------
// Init the AD in continuous capture mode
void HAL_adc_init() {}

void HAL_adc_start_conversion(const uint8_t adc_pin) {
        if(adc_pin>BOARD_NR_GPIO_PINS)return;
        uint8_t channel = PIN_MAP[adc_pin].adc_channel;
        DDL_ASSERT(channel!=ADC_PIN_INVALID);
	HAL_adc_result = adc_read(ADC1,channel);
}

uint16_t HAL_adc_get_result() { return HAL_adc_result; }

uint16_t analogRead(pin_t pin) {
  const bool is_analog = _GET_MODE(pin) == INPUT_ANALOG;
  return is_analog ? analogRead(uint8_t(pin)) : 0;
}

// Wrapper to maple unprotected analogWrite
void analogWrite(pin_t pin, int pwm_val8) {
  if (PWM_PIN(pin))
    analogWrite(uint8_t(pin), pwm_val8);
}

void HAL_reboot() { NVIC_SystemReset(); }
void flashFirmware(const int16_t) { HAL_reboot(); }

#endif // __STM32F1__
