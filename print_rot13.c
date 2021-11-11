#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_rot13 - encodes a string using rot13
 * @print: thing to print
 * Return: length of the string printed.
 */

int print_rot13(va_list print)
{
	char *s = va_arg(print, char *);
	int i = 0, j = 0, length = 0;
	char letter[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char yrggre[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(ahyy)";

	while (s[i])
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			while (letter[j])
			{
				if (s[i] == letter[j])
				{
					_putchar(yrggre[j]);
					length++;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
		j = 0;
		i++;
	}

	return (length);
}
