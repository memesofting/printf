#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: string to print
 *
 * Return: count on success
 */

int _printf(const char *format, ...)
{
	int count;
	int len;
	char *str;
	char c;
	va_list print;

	/*initialize argument list*/
	va_start(print, format);
	/*iterate through the string 'format' and print elements*/
	count = 0;
	while (*format != '\0')
	{
		len = _strlen(format);
		if (*format == '%')
		{
			/*conditions for identifiers*/
			format++;
			if (*format == 'c')
			{
				c = va_arg(print, int);
				_putchar(c);
			}
			if (*format == 's')
			{
				str = va_arg(print, char *);
				_putstring(str);
			}
			if (*format == '%')
			{
				_putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
		}
		count++;
		format++;
	}
	va_end(print);
	return (len);
}
