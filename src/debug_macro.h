//=================[ DEBUG ]================
#if defined(DEBUGGER)
#  include "debug_ns.h"
#  ifdef DEBUGGER_SHORT_FILENAME
#    define DBGLN(x, ...) debug::printDBG((strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__), __LINE__, x, ##__VA_ARGS__)
#  else
#    define DBGLN(x, ...) debug::printDBG(__FILE__, __LINE__, x, ##__VA_ARGS__)
#  endif //DEBUGGER_SHORT_FILENAME
#else
#  define DBGLN(X, ...)
#endif // DEBUG
//=================[ DEBUG ]================
