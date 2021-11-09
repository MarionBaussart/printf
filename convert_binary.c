#include "main.h"
#include <stdarg.h>

/**
 * convert_binary - convert into binary
 * @print: thing to print
 * Return: No return.
 */

void convert_binary(va_list print)
{
	print_binary(va_arg(print, unsigned int));
}

/**
 * print_binary - print binary number
 * @i: int to print
 * Return: No return.
 */

void print_binary(unsigned int i)
{
	if (i / 2 != 0)
	{
		print_binary(i / 2);
		_putchar(i % 2 + '0');
	}
	else
		_putchar(i % 2 + '0');
}
