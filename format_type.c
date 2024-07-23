#include "main.h"

/**
 * print_char - prints character
 * @list: list of arguments
 * Return: return the amount of characters
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: return the amount of characters
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: return the amount of characters
 */
int print_percent(va_list list)
{
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
	int len;

	len = print_number(list);
	return (len);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: list of arguments
 * Return: return the amount of characters
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));

	if (num < 1)
		return (-1);

	return (print_unsigned_number(num));
}
