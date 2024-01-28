#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

int c_printfchar(va_list args);
int s_printfstr(va_list args);
int %_printfper(va_list_attribute_((unused)) args);
int _putchar(char c);
int i_printfint(va_list args);
int d_printfdint(va_list args);

#endif

