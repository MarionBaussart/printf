#include "main.h"
#include <stdarg.h>

/**
 * unprintable_char - print a string. Non printable characters
 * (0 < ASCII value < 32 or >= 127) are printed this way: \x,
 * followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @print: thing to print
 * Return: length of the string printed
 */

int unprintable_char(va_list print)
{
	char *s = va_arg(print, char *);
	unsigned int i = 0;
	int length = 0;

	while (s[i])
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length += 2;
			if (s[i] < 16)
			{
				_putchar('0');
				length++;
				print_HEXA(s[i]);
				length++;
			}
			else
			{
				print_HEXA(s[i]);
				length += 2;
			}
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
		i++;
	}
	return (length);
}
