#include "main.h"
/**
 **print_Rot13- function that encodes a string using rot13
 *@R: input
 * Return: void
 */
int print_rot13(va_list R)
{	int i, j;
	int sum = 0;
	char *s = va_arg(R, char *);
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		if (s[i] == a[j])
	{
		_putchar(b[j]);
		sum++;
		break;
	}
	if (!a[j])
	{
		_putchar(s[i]);
		sum++;
	}
	}
	return (sum);
}
