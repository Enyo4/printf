#include <stdarg.h>
#include "main.h"

/**
 * print_S - prints the string
 * * Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way:
 * \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 *
 * Return: the number of characters printed
 */
int print_S(va_list S)
{
	char *str = va_arg(S, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += print_hex_value((unsigned char)*str);
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * print_hex_value - Print the hexadecimal representation of a character.
 * @c: The character for which to print the hexadecimal value.
 *
 * Return: The number of characters printed (always 2).
 */
int print_hex_value(unsigned char c)
{
	int count = 0;
	int value = c;
	int upper_digit = value / 16;
	int lower_digit = value % 16;

	_putchar("0123456789ABCDEF"[upper_digit]);
	_putchar("0123456789ABCDEF"[lower_digit]);

	count += 2;

	return (count);
}
