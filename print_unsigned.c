#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned - print an unsigned int
 * @print: thing to print
 * Return: lenght of thing printed
 */

int print_unsigned(va_list print)
{
	long int i = va_arg(print, long int);

	return (print_unsigned_number(i));
}
