#include "main.h"

/**
 * printInteger: prints integers up to 20 digits
 * @num: number to print
*/
void printInteger(int num) {
    /* Allocate a buffer to store the digits (assuming a maximum of 20 digits) */
    char digits[20];
    char digit = '0', digitChar;
    int index = 0, digitValue, i;

    if (num == 0) {
        digit = '0';
        _putchar(digit);
        return;
    }

    if (num < 0) {
        _putchar('-');
        num = -num;
    }

    while (num > 0) {
        digitValue = num % 10;
        digitChar = '0' + digitValue;
        digits[index++] = digitChar;
        num /= 10;
    }

    /* Print the digits in reverse order */
    for (i = index - 1; i >= 0; i--)
    {
        _putchar(digits[i]);
    }
}