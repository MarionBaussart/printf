#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * get_func_format - get the function according to the format
 * @format: string to print
 * Return: function to use
 */
int (*get_func_format(const char *format))(va_list)
{
	int i = 0;
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
		{"S", unprintable_char},
		{"r", print_revstring},
		{"R", print_rot13},
		{"+", print_integer_flagplus},

		{NULL, NULL}
	};

	while (list_format[i].tf != NULL)
	{
		if (*format == *list_format[i].tf)
		{
			return (list_format[i].nfunc);
		}
		i++;
	}
	/* if not found */
	return (NULL);
}
