#include "main.h"
#include <stdarg.h>

/**
 * print_hexas - convert an long unsigned int into hexadecimal number
 * @i: int to print
 * Return: lenght of thing printed
 */

int print_hexas(long unsigned int h)
{
	int length = 0;

	if (h / 16 != 0)
	{
		length++;
		print_hexa(h / 16);

		if ((h % 16) > 9)
			_putchar((h % 16) - 10 + 'a');
		else
			_putchar(h % 16 + '0');
	}
	else
	{
		length++;
		if ((h % 16) > 9)
			_putchar((h % 16) - 10 + 'a');
		else
			_putchar(h % 16 + '0');
	}

	return (length);
}

/**
 * print_address - print the address of a pointer
 * @print: thing to print
 * Return: lenght of thing printed
 */

int print_address(va_list print)
{
	long unsigned int arg = va_arg(print, int );
	long unsigned int *p = &arg;
	int length = 0;

	if (p)
	{
		_putchar('0');
		_putchar('x');
		length += 2;

		print_hexas(*p);
	}

	return (length);
}
