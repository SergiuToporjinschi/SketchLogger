/*

  SketchLogger

  Copyright (C) 2019 by Sergiu Toporjinschi <sergiu dot toporjinschi at gmail dot com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "debug_macro.h"

#include <Arduino.h>

Print *dbg; // we need to define this as global to be used by debug name space
void setup() {
  Serial.begin(74880);
  dbg = &Serial;

  char x = 't';
  DBGLN("test: %c", x); //src\main.cpp(32): test: t
}

void loop() {
  delay(1000);
  DBGLN("debug Line"); //src\main.cpp(37): debug Line
}
