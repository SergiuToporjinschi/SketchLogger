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

#  ifndef debug_h
#    define debug_h
#    include <Arduino.h>

namespace debug {
  void printDBG(const char *file, int line, const char *format, ...);
} // namespace debug

#  endif //debug_h

#endif //ARDUINO_ARCH_AVR