#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
**_printf - produces output according to a format.
*@format:it the argument
*description: produces output according to a format.
*Return:  always 0
*/
int _printf(const char *format, ...)
{
va_list arg;
int done;
va_start(arg, format);
done = vfprintf(stdout, format, arg);
va_end(arg);
return (done);
}
