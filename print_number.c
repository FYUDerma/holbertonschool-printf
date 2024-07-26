#include "main.h"

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
