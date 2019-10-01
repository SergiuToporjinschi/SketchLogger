#ifndef debug_h
#define debug_h
#include <Arduino.h>

namespace debug {
  void printDBG(const char *file, int line, const char *format, ...);
} // namespace debug

#endif //debug_h
