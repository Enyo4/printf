#include "main.h"
#include <stdlib.h>

/**
 * print_srting: writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int print_string(va_list s)
{
	char *my_string;
	int i = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
	{
		my_string = "(null)";
	}
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
	}
	return (i);
}

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */
int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
/**
 * print_porcentage - %
 *
 * Return: 1.
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
