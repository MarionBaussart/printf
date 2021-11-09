#include "main.h"
#include <stdarg.h>

/**
 * convert_binary - convert into binary
 * @print: thing to print
 * Return: No return.
 */

void convert_binary(va_list print)
{
	print_binary(va_arg(print, unsigned int));
}

/**
<<<<<<< HEAD:convert_binary.c
 * print_binary - print binary number
 * @i: int to print
=======
 * print_binary - convert an int into binary number
 * @i: thing to print
>>>>>>> f06bb4b27e17694fbbd3709dd1aaeb2868cf99d0:print_binary.c
 * Return: No return.
 */

void print_binary(unsigned int i)
{
	if (i / 2 != 0)
	{
		print_binary(i / 2);
		_putchar(i % 2 + '0');
	}
	else
		_putchar(i % 2 + '0');
}
