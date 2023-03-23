#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator - string to be printed
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list num;

	va_start(num, n);
	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(num, int));
		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
