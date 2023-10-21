#include "main.h"

/**
 * print_ptr - Prints a pointer's address in hexadecimal format.
 * @p: Argument from va_list
 *
 * Return: The number of characters printed.
 */
int print_ptr(va_list p)
{
	int i, count = 0;
	const char null_str[] = "(null)";
	unsigned long num;
	void *ptr = va_arg(p, void *);
	char hex_buffer[32];
	char hex_chars[] = "0123456789abcdef";

	if (ptr == NULL)
	{
		for (i = 0; null_str[i] != '\0'; i++)
		{
			_putchar(null_str[i]);
		}
		return (6);
	}
	num = (unsigned long)ptr;

	_putchar('0');
	_putchar('x');
	count += 2;

	/* convert and print the pointer in hexadecimal. */
	while (num > 0)
	{
		hex_buffer[count] = hex_chars[num % 16];
		count++;
		num /= 16;
	}
	for (i = count - 1; i >= 2; i--)
	{
		_putchar(hex_buffer[i]);
	}

	return (count);
}
