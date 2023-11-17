#include "main.h"
#include <unistd.h>

/**
 * _putnum - prints numbers
 * @n: number to be printed
 *
 * Return: 0 on success
 */

void _putnum(char n)
{
	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
}
