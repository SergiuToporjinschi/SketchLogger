#ifndef debug_h
#define debug_h

#ifdef ARDUINO_ARCH_AVR
#  include <Arduino.h>

namespace debug {
  void printDBG(const char *file, int line, const char *format, ...);
} // namespace debug

#endif //ARDUINO_ARCH_AVR

#endif //debug_h
