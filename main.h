#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _strlen(char *s);
int handle_str(va_list args);
int handle_def(const char *format);



#endif
