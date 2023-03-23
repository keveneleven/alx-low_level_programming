#include "variadic_ functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings 
 * @separator: string to be printed between strings
 * @n: number of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *c;
	va_list string;

	va_start(string, n);
	for (m = 0; m < n; m++)
	{
		c = va_arg(string, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}

