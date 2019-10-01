#include "debug_ns.h"
#include "SoftwareSerial.h"

extern Print *dbg;
namespace debug {

  void printFileAndLine(const char *file, int line) {
    char _line[100] = {0};
    snprintf(_line, sizeof(_line), "%s(%i): ", file, line);
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
