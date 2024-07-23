#ifndef MAIN_H
#define MAIN_H

/* Stardart Libraries*/
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdarg.h>

/* Prototype */
int _printf(const char *format, ...);

/* Format Prototype */
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);
int unsigned_integer(va_list list);

#endif
