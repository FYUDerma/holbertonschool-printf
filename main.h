#ifndef MAIN_H
#define MAIN_H

/* Stardart Libraries*/
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/* Function File */
int _putchar(char c);

/* Prototype */
int _printf(const char *format, ...);
int (*get_format_func(char *specifier))(va_list);


/* Format Prototype */
int print_char(va_list list);
int print_str(va_list list);
int print_percent(va_list list);
int print_integer(va_list list);
int print_int(va_list list);
int print_number(int num);

#endif
