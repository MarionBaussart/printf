#include "main.h"
#include <stdarg.h>

/**
 * convert_octal - convert into octal
 * @print: thing to print
 * Return: No return.
 */

int convert_octal(va_list print)
{
	print_octal(va_arg(print, unsigned int));

	return (0);
}

/**
 * print_octal - convert an int into octal number
 * @i: thing to print
 * Return: No return.
 */

void print_octal(unsigned int i)
{
	if (i / 8 != 0)
	{
		print_octal(i / 8);
		_putchar(i % 8 + '0');
	}
	else
	{
		_putchar(i % 8 + '0');
	}
}
