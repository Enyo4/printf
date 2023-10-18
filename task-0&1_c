#include <stdarg.h>
#include "main.h"

/**
 * _printf: prints characters
 * format: format specifier in character
 * 
 * Return: On success 1, on error -1
*/
int _printf(const char *format, ...)
{
    /* index of where to store the characters of format in token */
    int i, j, count = 0, valNum;
    char *valStr, flag;

    /* initializing list pointer */
    va_list ptr;
    va_start(ptr, format);

    /* parsing the formatted string */
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            count++;
            _putchar(format[i]);
        }
        else
        {
            flag = format[i + 1];
            /* for characters */
            if (flag == 'c')
            {
                valStr = va_arg(ptr, char*);
                _putchar(*valStr);
            }
            /* for strings */
            if (flag == 's')
            {
                valStr = va_arg(ptr, char*);
                j = 0;
                while (valStr[j] != '\0')
                {
                    _putchar(valStr[j]);
                    j++;
                }
            }
            /* for integers */
            if (flag == 'i' || flag == 'd' || flag == 'u' || flag == 'h') {
                valNum = va_arg(ptr, int);
                printInteger(valNum);
            }
            i++;
            count++;
        }
    }

    /* ending traversal */
    va_end(ptr); 
    return (count); 
}