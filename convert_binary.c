#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * convert_binary - convert into binary
 * @print: thing to print
 * Return: length.
 */

int convert_binary(va_list print)
{
	int length = 0;
	unsigned int b = va_arg(print, unsigned int);
	unsigned int tb = b;

	while (tb / 2)
	{
		length++;
		tb = tb / 2;
	}
	if (b != 0)
	{
		length += print_binary(b);

	}
	else if (b == 0)
	{
		_putchar('0');
		length++;
	}

	return (length);
}

/**
 * print_binary - print binary number
 * @b: unsigned int to print
 * Return: length.
 */

int print_binary(unsigned int b)
{
	if (b / 2 != 0)
	{
		print_binary(b / 2);
		_putchar(b % 2 + '0');
	}
	else
	{
		_putchar(b % 2 + '0');
	}

	return (1);
}
