#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct op - Struct op
 *
 * @type: The data type
 * @f: The function associated
 */
typedef struct op
{
	char *type;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list i);
int print_dec(va_list d);
int print_bin(va_list b);
int print_rev(va_list r);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);

#endif
