#include "main.h"

/**
 * print_int - Prints an integer
 * @list: list of arguments
 * Return: return the amount of characters
 */
int print_int(va_list list)
{
	int num = va_arg(list, int);
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		len++;
		num = -num;
	}

	len += print_number(num);
	return (len);
}

/**
 * print_number - Prints a number
 * @num: The number to print
 * Return: The number of characters printed
 */
int print_number(int num)
{
	int len = 0;
	int div = 1;

	if (num < 0)
	{
		_putchar('-');
		len++;
		num = -num;
	}

	while (num / div >= 10)
		div *= 10;

	while (div != 0)
	{
		_putchar('0' + num / div);
		len++;
		num %= div;
		div /= 10;
	}

	return (len);
}
