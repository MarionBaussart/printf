#include "main.h"

void print_address(va_list print)
{
	unsigned int arg = va_arg(print, int);
	unsigned int *p = &arg;

	print_unsigned_number(*p);	
}
