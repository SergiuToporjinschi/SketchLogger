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

//=================[ DEBUG ]================
#if defined(DEBUGGER)
#  include "debug_ns.h"
#  include <Arduino.h>

extern Print *dbg;
#  ifdef DEBUGGER_SHORT_FILENAME
#    define _FILE_NAME_ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#  else
#    define _FILE_NAME_ __FILE__
#  endif //DEBUGGER_SHORT_FILENAME

#  ifdef ARDUINO_ARCH_AVR
#    define DBGLN(x, ...) debug::printDBG(_FILE_NAME_, __LINE__, x, ##__VA_ARGS__)

#  elif defined(ARDUINO_ARCH_ESP8266) || defined(ARDUINO_ARCH_ESP32)
#    define DBGLN(x, ...)                               \
      ::dbg->printf("%s(%i): ", _FILE_NAME_, __LINE__); \
      ::dbg->printf(x, ##__VA_ARGS__);                  \
      ::dbg->write('\n');
#  endif //ARDUINO_ARCH_AVR

#else
#  define DBGLN(X, ...)
#endif // DEBUG
//=================[ DEBUG ]================
