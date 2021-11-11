#include "main.h"
#include <stdarg.h>

/**
 * print_hexa_long - convert an int into hexadecimal number
 * @h: unsigned int to print
 * Return: lenght of thing printed
 */

int print_hexa_long(unsigned long int h)
{
	int length = 0;

	if (h / 16 != 0)
	{
		length = print_hexa(h / 16);
		if ((h % 16) > 9)
			_putchar((h % 16) - 10 + 'a');
		else
			_putchar(h % 16 + '0');
		length++;
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
	unsigned long int arg = va_arg(print, int);
	unsigned long int *p = &arg;
	int length = 0;

	if (p)
	{
		_putchar('0');
		_putchar('x');
		length += 2;

		print_hexa(*p);
	}

	return (length);
}
