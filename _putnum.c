#include "main.h"

/**
 * _putnum - prints numbers
 * @input: argument
 *
 * Return: 0 on success
 */

int _putnum(va_list input)
{
	char n;

	n = va_arg(input, int);
	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	return (0);
}

#include "main.h"
/**
 * _putint - prints integer
 * @input: argument to print
 *
 * Return: int
 */
int _putint(va_list input)
{
	int n, i, number, end, dig, expo;

	n = va_arg(input, int);
	end = n % 10;
	expo = 1;
	i = 1;
	n = n / 10;
	number = n;
	if (end < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		end = -end;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			expo = expo * 10;
			number = number / 10;
		}
		number = n;
		while (expo > 0)
		{
			dig = number / expo;
			_putchar(dig + '0');
			number -= (dig * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(end + '0');
	return (i);
}

/**
 * _putdec - prints decimal numbers
 * @input: argument to print
 *
 * Return: decimal number
 */

int _putdec(va_list input)
{
	int n, i, number, end, dig, expo;

	n = va_arg(input, int);
	end = n % 10;
	i = 1;
	expo = 1;
	n = n / 10;
	number = n;
	if (end < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		end = -end;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			expo = expo * 10;
			number = number / 10;
		}
		number = n;
		while (expo > 0)
		{
			dig = number / expo;
			_putchar(dig + '0');
			number -= (dig * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(end + '0');
	return (i);
}
