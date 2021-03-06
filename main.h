#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int print_unsigned_number(unsigned int n);
int print_binary(unsigned int i);
int print_hexa(unsigned int i);
int print_HEXA(unsigned int i);
int print_octal(unsigned int i);
int print_hexa_long(unsigned long int h);
int print_number_sign(int n);

/**
 * struct list_format - Struct list_format
 *
 * @tf: type of format
 * @nfunc: name of the function to use
 */
typedef struct list_format
{
	char *tf;
	int (*nfunc)(va_list);
} format_t;

int (*get_func_format(const char *format))(va_list);
int print_char(va_list print);
int print_string(va_list print);
int print_percent(va_list print);
int print_integer(va_list print);
int print_unsigned(va_list print);
int convert_binary(va_list print);
int convert_hexa(va_list print);
int convert_HEXA(va_list print);
int convert_octal(va_list print);
int print_address(va_list print);
int convert_hexas(va_list print);
int unprintable_char(va_list print);
int print_revstring(va_list print);
int print_rot13(va_list print);
int print_integer_flagplus(va_list print);

#endif
