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

#ifdef ARDUINO_ARCH_AVR

#  include "debug_ns.h"
#  include "SoftwareSerial.h"

extern Print *dbg;
namespace debug {

  void printFileAndLine(const char *file, int line) {
    char _line[100] = {0};
    snprintf(_line, 99, "%s(%i): ", file, line);
    ::dbg->write(_line);
    ::dbg->flush();
  }

  void printDBG(const char *file, int line, const char *format, ...) {
    printFileAndLine(file, line);
    char temp[150] = {0};
    va_list arg;
    va_start(arg, format);
    vsprintf(temp, format, arg);
    va_end(arg);
    ::dbg->write(temp);
    ::dbg->write('\n');
    ::dbg->flush();
  }
} // namespace debug

#endif //ARDUINO_ARCH_AVR