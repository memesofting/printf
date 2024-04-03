#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * struct format - struct to handle specifier
 * @c: specifier
 * @func: function pointer
 *
 */

typedef struct format
{
	char *c;
	int (*func)();
} spec;

int _putchar(char c);
int _print_perc(void);
int _printc(va_list input);
int _putstring(va_list input);
int _strlen(const char *s);
int _putnum(va_list input);
int _putint(va_list input);
int _putdec(va_list input);
int _putunsigned(va_list args);
int _putbinary(va_list val);
int _printf(const char *format, ...);

#endif
