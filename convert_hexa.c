#include "main.h"
#include <stdarg.h>

/**
 * convert_hexa - convert into hexadecimal
 * @print: thing to print
 * Return: lenght of thing printed
 */

int convert_hexa(va_list print)
{
	int length = 0;
	unsigned int h = va_arg(print, unsigned int);

	if (h != 0)
	{
		return (print_hexa(h));
	}
	else
	{
		_putchar('0');
		length++;
	}

	return (length);
}

/**
 * print_hexa - convert an int into hexadecimal number
 * @h: unsigned int to print
 * Return: lenght of thing printed
 */

int print_hexa(unsigned int h)
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
