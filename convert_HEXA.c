#include "main.h"
#include <stdarg.h>

/**
 * convert_HEXA - convert into hexadecimal (base 16) in uppercase
 * @print: thing to print
 * Return: lenght of thing printed
 */

int convert_HEXA(va_list print)
{
	unsigned int H = va_arg(print, unsigned int);

	if (H != 0)
	{
		return (print_HEXA(H));
	}
	else
	{
		_putchar('0');
	}

	return (1);
}

/**
 * print_HEXA - convert an int into hexadecimal number
 * @H: unsigned int to print
 * Return: lenght of thing printed
 */

int print_HEXA(unsigned int H)
{
	int length = 0;

	if (H / 16 != 0)
	{
		length = print_HEXA(H / 16);

		if ((H % 16) > 9)
			_putchar((H % 16) - 10 + 'A');
		else
			_putchar(H % 16 + '0');

		length++;
	}
	else
	{
		length++;
		if ((H % 16) > 9)
			_putchar((H % 16) - 10 + 'A');
		else
			_putchar(H % 16 + '0');
	}

	return (length);
}
