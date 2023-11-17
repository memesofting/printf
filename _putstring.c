#include "main.h"
#include <string.h>

/**
 * _putstring - prints a string to output
 * @input: argument
 *
 * Return: void on success
 */

int _putstring(va_list input)
{
	char *s;
	int i;
	int len;
	char chr;

	s = va_arg(input, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			chr = s[i];
			_putchar(chr);
		}
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			chr = s[i];
			putchar(chr);
		}
		return (len);
	}
}
