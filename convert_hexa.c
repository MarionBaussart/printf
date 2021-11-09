#include "main.h"
#include <stdarg.h>

/**
 * convert_hexa - convert into hexadecimal
 * @print: thing to print
 * Return: No return.
 */

void convert_hexa(va_list print)
{
	print_hexa(va_arg(print, unsigned int));
}

/**
 * print_hexa - convert an int into hexadecimal number
 * @i: int to print
 * Return: No return.
 */

void print_hexa(unsigned int i)
{
	if (i / 16 != 0)
	{
		print_hexa(i / 16);

		if ((i % 16) > 9)
			_putchar((i % 16) - 10 + 'a');
		else
			_putchar(i % 16 + '0');
	}
	else
	{
		if ((i % 16) > 9)
			_putchar((i % 16) - 10 + 'a');
		else
			_putchar(i % 16 + '0');
	}
}
