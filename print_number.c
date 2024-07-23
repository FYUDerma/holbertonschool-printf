#include "main.h"

/**
 * print_number - prints a number in the parameter
 * @args: list of arguments
 * Return: The arguments is returned
 */

int print_number(va_list args)
{
	int n, div, len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		_putchar('-');
		len++;
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / div > 9)
		div *= 10;

	while (div != 0)
		_putchar('0' + (num / div));
		len++;
		num %= div;
		div /= 10;

	return (len);
}

/**
 * print_unsigned_number - prints a unsigned number in the parameter
 * @n: unsigned to print
 * Return: The arguments is returned
 */

int print_unsigned_number(unsigned int n)
{
	int len = 0;
	unsigned int div = 1;

	if (n == 0)
		_putchar('0');
		return (1);

	while (n / div > 9)
		div *= 10;

	while (div != 0)
		_putchar('0' + (n / div));
		len++;
		n %= div;
		div /= 10;

	return (len);
}
