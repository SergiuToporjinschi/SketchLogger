//=================[ DEBUG ]================
#if defined(DEBUGGER)
#  ifdef ARDUINO_ARCH_AVR
#    include "debug_ns.h"
#    define DBGLN(x, ...) debug::printDBG(__FILE__, __LINE__, x, ##__VA_ARGS__)
#  else
#    define DBGLN(x, ...) ::dbg->printf(x, ##__VA_ARGS__);
#  endif
#else
#  define DBGLN(X, ...)
#endif // DEBUG
//=================[ DEBUG ]================
