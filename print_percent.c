#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_percent - print a percent
 * @print: thing to print
 * Return: No return.
 */

int print_percent(va_list print)
{
	(void) print;
	_putchar('%');
	return (0);
}
