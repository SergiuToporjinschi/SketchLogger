//=================[ DEBUG ]================
#if defined(DEBUGGER)
#  include "MemoryFree.h"

#  ifdef ARDUINO_ARCH_AVR
#    include "debug_ns.h"
// #  define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
// #  define DBGLN(x, ...) debug::printDBG(__FILENAME__, __LINE__, x, ##__VA_ARGS__)

#    define DBGLN(x, ...) debug::printDBG(__FILE__, __LINE__, x, ##__VA_ARGS__)
#  else  //ARDUINO_ARCH_AVR
#  endif //ARDUINO_ARCH_AVR

#else
#  define DBGLN(X, ...)
#endif // DEBUG
//=================[ DEBUG ]================
