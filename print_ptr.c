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
	unsigned long addr = (unsigned long)va_arg(p, void *);;

	_putchar('0');
	_putchar('x');
	count += 2;

	/* convert and print the pointer in hexadecimal. */
	count += print_decimalToHexCode(addr, 0);

	return (count);
}
