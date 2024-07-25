#include "main.h"

/**
 * _printf - function to print a string depend on the format
 * @format: format of the string
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;
	int (*print_func)(va_list);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			print_func = get_format_func((char *)&format[i]);
			if (print_func != NULL)
			{
				count += print_func(args);
			}
			else
			{
				_putchar('%');
				count++;
				while (format[i] != ' ' && format[i] != '\0')
				{
					_putchar(format[i]);
					count++;
					i++;
				}
				i--;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
