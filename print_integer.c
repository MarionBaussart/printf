#include "main.h"
#include <stdarg.h>

/**
 * print_integer - print an int
 * @print: thing to print
 * Return: No return.
 */

void print_integer(va_list print)
{
	int i = va_arg(print, int);

	print_number(i);
}
