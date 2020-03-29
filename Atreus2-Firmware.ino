/* -*- mode: c++ -*-
 * Atreus -- A very basic Kaleidoscope example for the Atreus2
 * Copyright (C) 2018  Keyboard.io, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "Kaleidoscope.h"
#include "Kaleidoscope-EEPROM-Settings.h"
#include "Kaleidoscope-EEPROM-Keymap.h"
#include "Kaleidoscope-FocusSerial.h"
#include "Kaleidoscope-Macros.h"
#include "Kaleidoscope-Qukeys.h"

#include "./keymaps/dvorak-default.h"

KALEIDOSCOPE_INIT_PLUGINS(
  EEPROMSettings,
  EEPROMKeymap,
  Focus,
  FocusEEPROMCommand,
  FocusSettingsCommand,
  Macros,
  Qukeys
);

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  // switch (macroIndex) {
  // case RESET:
  //   Kaleidoscope.rebootBootloader();
  //   break;
  // default:
  //   break;
  // }

  return MACRO_NONE;
}

void setup() {
  Qukeys.setHoldTimeout(300);
  Kaleidoscope.setup();
  SpaceCadet.disable();
  EEPROMKeymap.setup(5);
}

void loop() {
  Kaleidoscope.loop();
}
