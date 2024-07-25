#include "main.h"

/**
 * get_format_func - Returns the printing function for a format specifier.
 * @specifier: The format specifier.
 * Return: A pointer to the printing function or NULL if not found.
 */
int (*get_format_func(char *specifier))(va_list)
{
	if (*specifier == 'c')
		return (print_char);
	if (*specifier == 's')
		return (print_str);
	if (*specifier == '%')
		return (print_percent);
	if (*specifier == 'd' || *specifier == 'i')
		return (print_integer);
	return (NULL);
}
