#include <stdarg.h>

extern int printf (__const char *__restrict __format, ...)
{

     int ret_status = 0;
     va_list args;
     va_start(args,__format);
     ret_status = vprintf(__format, args);
     va_end(args);
     return ret_status;
 }

