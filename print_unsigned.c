#include "main.h"
#include <stdarg.h>

/**
 * print_decimal - print a char
 * @print: thing to print
 * Return: No return.
 */

void print_unsigned(va_list print)
{
	unsigned int i = va_arg(print, unsigned int);

	print_number(i);
}
