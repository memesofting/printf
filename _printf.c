#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list print;
	va_start(print, format);
	if (*format != '\0')
	{
		for(int i = 0; i < va_arg(print, int); i++)
		{
			putchar(*format);
			format++;
		}
	}
	va_end(print);
	return (0);
}

int main(void)
{
	_printf("ready");
	return (0);
}
