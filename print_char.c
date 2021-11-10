#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - print a char
 * @print: thing to print
 * Return: No return.
 */

int print_char(va_list print)
{
	char c = va_arg(print, int);

	_putchar(c);

	return (0);
}
