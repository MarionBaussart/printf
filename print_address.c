#include "main.h"
#include <stdarg.h>

/**
 * print_hexas - convert an long unsigned int into hexadecimal number
 * @i: int to print
 * Return: No return.
 */

void print_hexas(unsigned int i)
{
	if (i / 16 != 0)
	{
		print_hexas(i / 16);

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

/**
 * print_address - print the address of a pointer
 * @print: thing to print
 */

int print_address(va_list print)
{
	unsigned int arg = va_arg(print, int );
	unsigned int *p = &arg;

	_putchar('0');
	_putchar('x');

	print_hexas(*p);

	return (0);
}
