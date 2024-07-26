#include "main.h"
#include <limits.h>

/**
 * print_number - Prints a number
 * @num: The number to print
 * Return: The number of characters printed
 */
int print_number(int num)
{
	int len = 0;
	int div = 1;
	int temp_num = num;

	if (num < 0)
	{
		_putchar('-');
		len++;
		if (num == INT_MIN)
		{
			num = -(num / 10);
			len += print_number(num);
			_putchar('8');
			return (len + 1);
		}
		num = -num;
	}

	while (temp_num / div >= 10 || temp_num / div <= -10)
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
