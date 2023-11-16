#include "main.h"

/**
 * _strlen - prints length of string
 * @s: string which lenght will be printed
 *
 * Return: len on success
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
