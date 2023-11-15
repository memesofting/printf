#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format - string to print
 *
 * Return: count on success
 */

int _printf(const char *format, ...)
{
	int count;
	char s;
	va_list print;

	/*initialize argument list*/
	va_start(print, format);
	/*iterate through the string 'format' and print elements*/
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				s = va_arg(print, int);
				_putchar(s);
			}
			format++;
		}
		_putchar(*format);
		count++;
		format++;
	}
	va_end(print);
	return (count);
}

int main(void)
{
	_printf("ready");
	_printf("\n");
	_printf("ready %c", 40);
	_printf("\n");
	return (0);
}
