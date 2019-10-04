/* 

  SketchLogger

  Copyright (C) 2019 by Sergiu Toporjinschi <sergiu dot toporjinschi at gmail dot com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 3.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <https://spdx.org/licenses/GPL-3.0-only.html>.

  All rights reserved

*/

#include "SoftwareSerial.h"
#include "debug_macro.h"

#include <Arduino.h>

SoftwareSerial *dbg; // we need to define this as global to be used by debug name space
void setup() {
  pinMode(13, INPUT);
  pinMode(15, OUTPUT);
  dbg = new SoftwareSerial(13, 15); // we need to define this as global to be used by debug name space, before any DBGLN lines

  Serial.begin(74880);
  dbg->begin(74880); // we need to initialize SoftwareSerial before any DBGLN lines

  char x = 't';
  DBGLN("test: %c", x); //src\main.cpp(37): test: t
}

void loop() {
  delay(1000);
  DBGLN("debug Line on SoftwareSerial"); //src\main.cpp(42): debug Line on SoftwareSerial
}
