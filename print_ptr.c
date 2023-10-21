#include "main.h"

/**
 * print_ptr - Prints a pointer's address in hexadecimal format.
 * @p: Argument from va_list
 *
 * Return: The number of characters printed.
 */
int print_ptr(va_list p)
{
	int count = 0;
	unsigned long num;
	void *ptr = va_arg(p, void *);

	_putchar('0');
	_putchar('x');
	count += 2;

	/* convert and print the pointer in hexadecimal. */
	num = (unsigned long)(void *)ptr;
	count += print_decimalToHexCode(num, 0);

	return (count);
}
