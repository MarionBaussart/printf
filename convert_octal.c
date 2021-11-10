#include "main.h"
#include <stdarg.h>

/**
 * convert_octal - convert into octal
 * @print: thing to print
 * Return: lenght of thing printed
 */

int convert_octal(va_list print)
{
	int length = 0;
	unsigned int o = va_arg(print, unsigned int);

	if (o != 0)
		return (print_octal(o));
	else
	{
		_putchar('0');
		length++;
	}

	return (length);
}

/**
 * print_octal - convert an int into octal number
 * @i: unsigned int to print
 * Return: lenght of thing printed
 */

int print_octal(unsigned int o)
{
	int length = 0;

	if (o / 8 != 0)
	{
		length++;
		print_octal(o / 8);
		_putchar(o % 8 + '0');
	}
	else
	{
		length++;
		_putchar(o % 8 + '0');
	}

	return (length);
}
