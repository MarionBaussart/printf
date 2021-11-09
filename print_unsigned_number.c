#include "main.h"

/**
 * print_number - print integer
 * @n: nombre int
 */
void print_unsigned_number(unsigned int n)
{
    unsigned int nbc = 0;
    unsigned int num = n;
    unsigned int i = 1;

    if (n == 0)
    {
        _putchar(48);
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
            i = i / 10;
        }
    }
}