#include "main.h"
#include <stdarg.h>

/**
 * get_function - get the function according to the format
 * @format: string to print
 * Return: function to use
 */
int (*get_func_format(const char *format, int index))(va_list print)
{
	int i = index, j = 0;
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
		{"p", print_address},
		{NULL, NULL}
	};

	while (list_format[j].tf != NULL)
	{
		if (format[i] == *list_format[j].tf)
		{
			return (list_format[j].nfunc);
		}
		j++;
	}
	
	return (1);




	int i = 0, j = 0, k = 0, length = _strlen(format);
/* pointer of the list named print */
	va_list print;

/* parcourir the list which the last argument is format */
	va_start(print, format);
/* write the string but if it is '%' print argument*/
	while (format && format[i])
	{
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
	va_end(print);
/* return the lenght of the string */
	return (list_format[j].nfunc(print));
}
