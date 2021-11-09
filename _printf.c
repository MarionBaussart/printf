#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _strlen - returns the length of a string
 * @string: string of character
 * Return: i, number of character
 */

int _strlen(const char *string)
{
	int i = 0;

	while (*(string + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _printf - print the string and these possibles arguments
 * @format: string to print
 * Return: number of character
 */
int _printf(const char *format, ...)
{
	format_t list_format[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"u", print_unsigned},
		{"b", convert_binary},
		{"x", convert_hexa},
		{"X", convert_HEXA},
		{"o", convert_octal},
		{NULL, NULL}
	};
	int i = 0, j = 0, k = 0, length = _strlen(format);
/* pointer of the list named print */
	va_list print;

/* length : if %%, count only one */
	while (format && format[k])
	{
		if (format[k] == '%' && format[k + 1] == '%')
			length--, k++;
		k++;
	}
/* parcourir the list which the last argument is format */
	va_start(print, format);
/* write the string but if it is '%' print argument*/
	while (format && format[i])
	{
/*
 * if we found a '%' : search for the correct
 * format which is just after '%', return the function print to use for the
 * corresponding argument
 */
		if (format[i] == '%')
		{
			while (list_format[j].tf != NULL)
			{
				if (format[i + 1] == *list_format[j].tf)
				{
					list_format[j].nfunc(print);
					i += 2;
				}
			j++;
			}
		}
	/* print the string */
	_putchar(format[i]);
	j = 0, i++;
	}
/* return the lenght of the string */
	return (length);
}
