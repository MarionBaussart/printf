#include "main.h"
#include <stdarg.h>

/**
 * convert_HEXA - convert into hexadecimal (base 16) in uppercase
 * @print: thing to print
 * Return: No return.
 */

void convert_HEXA(va_list print)
{
	print_HEXA(va_arg(print, unsigned int));
}

/**
 * print_HEXA - convert an int into hexadecimal number
 * @i: unsigned int to print
 * Return: No return.
 */

void print_HEXA(unsigned int i)
{
	if (i / 16 != 0)
	{
		print_HEXA(i / 16);

		if ((i % 16) > 9)
			_putchar((i % 16) - 10 + 'A');
		else
			_putchar(i % 16 + '0');
	}
	else
	{
		if ((i % 16) > 9)
			_putchar((i % 16) - 10 + 'A');
		else
			_putchar(i % 16 + '0');
	}
}
