#include "main.h"
#include <stdarg.h>

/**
 * convert_octal - convert into octal
 * @print: thing to print
 * Return: lenght of thing printed
 */

int convert_octal(va_list print)
{
	unsigned int o = va_arg(print, unsigned int);

	if (o != 0)
	{
		return (print_octal(o));
	}
	else
	{
		_putchar('0');
	}

	return (1);
}

/**
 * print_octal - convert an int into octal number
 * @o: unsigned int to print
 * Return: lenght of thing printed
 */

int print_octal(unsigned int o)
{
	int length = 0;

	if (o / 8 != 0)
	{
		length = print_octal(o / 8);
		_putchar(o % 8 + '0');
		length++;
	}
	else
	{
		length++;
		_putchar(o % 8 + '0');
	}

	return (length);
}
