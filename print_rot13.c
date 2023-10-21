#include "main.h"
#include <stdarg.h>

/**
 * print_rot13 - Print the ROT13'd version of a string
 * @R: Argument from va_list
 *
 * Return: The number of characters printed
 */
int print_rot13(va_list R)
{
	int i, j, count = 0;
	char *str = va_arg(R, char *);
	char a[] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklm NOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				count++;
				break;
			}
		}
		if (a[j] == '\0')
		{
			_putchar(str[i]);
		}
	}
	return (count);
}
