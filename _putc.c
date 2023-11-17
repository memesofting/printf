#include "main.h"
/**
 * _printc - prints characters
 * @input: argument
 *
 * Return: 0 on success
 */

int _printc(va_list input)
{
	char c;

	c = va_arg(input, int);
	_putchar(c);
	return (0);
}
