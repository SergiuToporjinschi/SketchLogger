//=================[ DEBUG ]================
#if defined(DEBUGGER)
#  include "debug_ns.h"
#  define DBGLN(x, ...) debug::printDBG(__FILE__, __LINE__, x, ##__VA_ARGS__)
#else
#  define DBGLN(X, ...)
#endif // DEBUG
//=================[ DEBUG ]================

