#include <stdarg.h>
#include "main.h"

/**
 * print_decimalToHexCode - prints hexcode of a decimal value
 * @num: number to be converted
 * @n: 1 for uppercase hex (A-F), 0 for lowercase hex (a-f)
 *
 * Return: number of characters printed
 */
int print_decimalToHexCode(unsigned long num, int n)
{
	int count = 0, i = 0;
	char hex_buffer[32];
	char hex_chars[] = "0123456789ABCDEF";

	if (n == 0)
	{
		hex_chars[10] = 'a';
		hex_chars[11] = 'b';
		hex_chars[12] = 'c';
		hex_chars[13] = 'd';
		hex_chars[14] = 'e';
		hex_chars[15] = 'f';
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			hex_buffer[i] = hex_chars[num % 16];
			num /= 16;
			i++;
		}

		for (--i; i >= 0; i--)
		{
			_putchar(hex_buffer[i]);
		}
		count += 2;
	}
	return (count);
}
