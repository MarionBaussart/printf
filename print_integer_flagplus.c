#include "main.h"
#include <stdarg.h>
#include "main.h"

/**
 * print_number_sign - print integer
 * @n: int
 * Return: length of number printed
 */
int print_number_sign(int n)
{
	int lenght = 0;
	unsigned int nbc = 0;
	unsigned int num = n;
	unsigned int i = 1;

	if (n == 0)
	{
		_putchar(48);
		lenght++;
	}
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			_putchar('-');
			lenght++;
			num = n;
		}
        if (n > 0)
        {
            _putchar('+');
			lenght++;
        }
		while (num > 0)
		{
			num = num / 10;
			nbc++;
		}
		while (nbc > 1)
		{
			i = i * 10;
			nbc--;
		}
		while (i > 0)
		{
			_putchar(((n / i) % 10) + 48);
			lenght++;
			i = i / 10;
		}
	}
	return (lenght);
}

/**
 * print_integer_flagplus - print an int with the sign
 * @print: thing to print
 * Return: lenght of thing printed
 */

int print_integer_flagplus(va_list print)
{
	int i = va_arg(print, int);
	return (print_number_sign(i));
}
