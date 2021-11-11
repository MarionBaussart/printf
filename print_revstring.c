#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_revstring - print the reversed string
 * @print: thing to print
 * Return: length of the string printed.
 */

int print_revstring(va_list print)
{
	char *s = va_arg(print, char *);
	int i = 0, nbchar = 0, length = 0;

	if (s == NULL)
		s = "(null)";

/* lenght of the string */
	while (*(s + i) != '\0')
	{
		nbchar = i;
		i++;
	}

/* print reversed string */
	if (nbchar != 0)
	{
		while (nbchar >= 0)
		{
			_putchar(s[nbchar]);
			nbchar--;
			length++;
		}
	}

	return (length);
}
