#include "main.h"
#include <stdarg.h>

/**
 * print_string - print a string
 * @print: thing to print
 * Return: length.
 */

int print_string(va_list print)
{
	char *s = va_arg(print, char *);
	int i = 0, length = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
		length++;
	}
	return (length);
}
