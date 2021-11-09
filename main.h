#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int n);
void print_unsigned_number(unsigned int n);

/**
 * struct list_format - Struct list_format
 *
 * @tf: type of format
 * @nfunc: name of the function to use
 */
typedef struct list_format
{
	char *tf;
	void (*nfunc)(va_list);
} format_t;

void print_char(va_list print);
void print_string(va_list print);
void print_percent(va_list print);
void print_integer(va_list print);
void print_unsigned(va_list print);

#endif
