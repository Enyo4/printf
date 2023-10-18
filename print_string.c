#include "main.h"
#include <stdlib.h>
/**
 * print_string - writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int print_string(va_list s)
{
	char *my_string;
	int i = 0, decimalValue;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
	{
		my_string = "(null)";
	}
	while (my_string[i])
	{
		if (my_string[i] == '\n'
				|| my_string[i] == '\a'
				|| my_string[i] == '\b'
				|| my_string[i] == '\f'
				|| my_string[i] == '\r'
				|| my_string[i] == '\t'
				|| my_string[i] == '\v')
		{
			_putchar('\\');
			_putchar('x');
			decimalValue = my_string[i];
			print_decimalToHexCode(decimalValue);
		}
		else
			_putchar(my_string[i]);
		i++;
	}
	return (i);
}

/**
 * compareCharacter - compares charater to escape characters
 * @str: given character value
 * Return: 1 on true, 0 on false
 */
int compareCharacter(char str)
{
	if (str == '\0'	|| str == '\x01'
			|| str == '\x02'
			|| str == '\x03'
			|| str == '\x04'
			|| str == '\x05'
			|| str == '\x06'
			|| str == '\a'
			|| str == '\b'
			|| str == '\t'
			|| str == '\n'
			|| str == '\v'
			|| str == '\f'
			|| str == '\r'
			|| str == '\x0E'
			|| str == '\x0F'
			|| str == '\x10'
			|| str == '\x11'
			|| str == '\x12'
			|| str == '\x13'
			|| str == '\x14'
			|| str == '\x15'
			|| str == '\x16'
			|| str == '\x17'
			|| str == '\x18'
			|| str == '\x19'
			|| str == '\x1A'
			|| str == '\x1B'
			|| str == '\x1C'
			|| str == '\x1D'
			|| str == '\x1E'
			|| str == '\x1F'
			|| str == '\x20')
		return (1);
	return (0);
}
