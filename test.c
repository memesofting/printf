#include "main.h"

int main(void)
{
	char *test;

	test = "mummy yo!";
	_printf("ready");
	_printf("\n");
	_printf("ready %c", 'b');
	_printf("\n");
	_printf(" %s", test);
	_printf("\n");
	return (0);
}
