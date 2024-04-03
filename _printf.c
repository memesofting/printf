#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string to print
 *
 * Return: number of characters on success
 */

int _printf(const char *format, ...)
{
	spec sp[] = {
		{"%c", _printc}, {"%s", _putstring}, {"%%", _print_perc},
		{"%d", _putdec}, {"%i", _putint}, {"%u", _putunsigned},
		{"%b", _putbinary}
	};

	va_list args;
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	va_start(args, format);
	/*check if format is null with first and second element of format for % sign*/
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	/*loop through array of struct spec to determine specifier*/
	while (format[i] != '\0')
	{
		j = 6;
		while (j >= 0)
		{
			/*check if format element match with a specific specifier*/
			if (format[i] == sp[j].c[0] && sp[j].c[1] == format[i + 1])
			{
				len  = len + sp[j].func(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
