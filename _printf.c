#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - print the string and these possibles arguments
 * @format: string to print
 * Return: length of the string printed
 */
int _printf(const char *format, ...)
{
	int i = 0, length = 0;
	int (*function)(va_list);
/* pointer of the list named print */
	va_list print;

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
			i++;
			function = get_func_format(format + i);
			i++;
			if (function == NULL)
			{
				_putchar('%');
				_putchar(format[i - 1]);
				length += 2;
			}
			else
				length += function(print);
		}
		else
		{
/* print the string */
			_putchar(format[i]);
			length++;
			i++;
		}
	}
	va_end(print);
/* return the lenght of the string */
	return (length);
}
