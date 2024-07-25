#include "main.h"

/**
 * print_char - Prints a character.
 * @args: The list of arguments.
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_str - Prints a string.
 * @args: The list of arguments.
 * Return: The number of characters printed.
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

/**
 * print_percent - Prints a percent sign.
 * @args: The list of arguments (not used).
 * Return: The number of characters printed.
 */
int print_percent(va_list args)
{
	(void)args; /* Suppress unused parameter warning */
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: return the amount of characters
 */
int print_integer(va_list list)
{
	int num = va_arg(list, int);

	return (print_number(num));
}
