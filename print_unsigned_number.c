#include "main.h"

/**
 * print_unsigned_number - print unsigned integer
 * @n: unsigned int
 * Return: length of the number printed
 */
int print_unsigned_number(unsigned long int n)
{
	int lenght = 0;
	unsigned long int nbc = 0;
	unsigned long int num = n;
	unsigned long int i = 1;

	if (n == 0)
	{
		_putchar(48);
		lenght++;
	}
	else
	{
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
