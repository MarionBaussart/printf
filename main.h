#ifndef MAIN_H
#define MAIN_H


int _putchar(char c);
int _printf(const char *format, ...);

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

#endif
