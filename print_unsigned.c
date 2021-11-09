#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned - print a char
 * @print: thing to print
 * Return: No return.
 */

void print_unsigned(va_list print)
{
	long int i = va_arg(print, long int);

	print_unsigned_number(i);
}
