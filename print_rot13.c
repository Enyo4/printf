#include <stdarg.h>
#include "main.h"

/**
 * rot13 - Apply the ROT13 algorithm to a string
 * @str: The input string
 *
 * Return: Pointer to the ROT13'd string
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;
	for (i = 0; str[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}

/**
 * print_rot13 - Print the ROT13'd version of a string
 * @R: Argument from va_list
 *
 * Return: The number of characters printed
 */
int print_rot13(va_list R)
{
	char *str = va_arg(R, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	str = rot13(str);

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
