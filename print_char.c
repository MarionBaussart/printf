#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - print a char
 * @print: thing to print
 * Return: lenght.
 */

int print_char(va_list print)
{
	char c = va_arg(print, int);
	int length = 0;

	if (c)
	{
		_putchar(c);
		length++;
	}

	return (1);
}
