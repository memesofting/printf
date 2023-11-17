#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - struct to handle specifier
 * @c: specifier
 *
 */

typedef struct format
{
	char *c;
	(*func)();
} spec;

int _putchar(char c);
in _print_perc(void);
int _printc(va_list input);
void _putstring(va_list input);
int _strlen(const char *s);
/*void _putnum(char n);*/
int _printf(const char *format, ...);

#endif
