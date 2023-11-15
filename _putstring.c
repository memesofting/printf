#include "main.h"
#include <string.h>

int _putstring(char *s)
{
	int i;
	int len;
	char chr;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		chr = s[i];
		_putchar(chr);
	}
	_putchar('\n');
}
