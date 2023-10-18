#include "main.h"

/**
* print_hex - function that prints an unsigned int in hexadecimal
* @n: unsigned to be printed
* @c: case of printing (0 = lower, 1 = upper)
* Descriptions: prints unsigned in hexadecimal with _putchar
* Return: size the output
*/
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int len, powten, j, digit, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 16;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * powten;
			powten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
* print_x - takes an unsigned int an prints it in lowercase hex
* @x: unsigned int to print
* Descriptions: prints in lowercase hex with _putchar
* Return: size of the output
*/
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}
/**
* print_X - takes an unsigned int an prints it in uppercase hex
* @X: unsigned int to print
* Descriptions: prints in uppercase hex with _putchar
* Return: size of the output
*/
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
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
	char hex_buffer[BUFFER_SIZE];
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

		for (i--; i >= 0; i--)
		{
			_putchar(hex_buffer[i]);
			count++;
		}
	}
	return (count);
}
