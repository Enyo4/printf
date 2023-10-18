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
				|| my_string[i] == '\b')
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
