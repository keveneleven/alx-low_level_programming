#include <variadic_functions.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * separator - string to be printed
 * @n: number of integers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *c;
	unsigned int m;
	va_list ap;
	int num = 0;

	if (separator == NULL)
		printf("Nothing to print");
	va_start(ap, n);
	for (m = 0; m < n; m++);
		int num = va_arg(ap, c, int);
	va_end(ap);
	return (num);
}
		
