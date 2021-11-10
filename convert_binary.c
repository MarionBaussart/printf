#include "main.h"
#include <stdarg.h>

/**
 * convert_binary - convert into binary
 * @print: thing to print
 * Return: length.
 */

int convert_binary(va_list print)
{
	int length = 0;
	unsigned int b = va_arg(print, unsigned int);

	if (b != 0)
	{
		return (print_binary(b));
	}
	else
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
	int length = 0;

	if (b / 2 != 0)
	{
		length++;
		print_binary(b / 2);
		_putchar(b % 2 + '0');
	}
	else
	{
		length++;
		_putchar(b % 2 + '0');
	}

	return (length);
}
