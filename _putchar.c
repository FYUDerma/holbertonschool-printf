#include "main.h"

/**
 * _putchar - writes the caracter c
 * @c: the caracter to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set to appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
