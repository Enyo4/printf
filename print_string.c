#include "main.h"
#include <stdlib.h>
/**
 * print_string - writes the character c to stdout
 * @s: The string to print
 *
 * Return: i
 */
int print_string(va_list s)
{
	char *my_string;
	int i = 0, count = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
	{
		my_string = "(null)";
	}
	for (; my_string[i] != '\0'; i++)
	{
		if (my_string[i] < 32 || my_string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			count += 3;
			count += print_decimalToHexCode(my_string[i], 1);
		}
		else
		{
			_putchar(my_string[i]);
		}
		count++;
	}
	return (count);
}
