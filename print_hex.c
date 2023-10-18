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
 * @decimalValue: the decimal value to fetch
 */
void print_decimalToHexCode(int decimalValue)
{
	int quotient = decimalValue;
	int remainder;
	int index = 1;
	char hexCode[3];

	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexCode[index] = remainder + '0';
		else
			hexCode[index] = remainder - 10 + 'A';

		quotient = quotient / 16;
		index--;
	}

	hexCode[0] = '0';
	hexCode[2] = '\0';
	_putchar(hexCode[0]);
	_putchar(hexCode[1]);
	_putchar(hexCode[2]);
}
