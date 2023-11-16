#include "main.h"
#include <string.h>

/**
 * _putstring - prints a string to output
 * @s: pointer to string
 *
 * Return: void on success
 */

void _putstring(char *s)
{
	int i;
	int len;
	char chr;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		chr = s[i];
		_putchar(chr);
	}
}
