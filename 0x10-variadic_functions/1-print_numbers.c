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
	unsigned int m;
	va_list ap;

	if (separator == NULL)
		printf("%s", Nothing to print);
	va_start(ap, n);
	for (m = 0; m < n; m++);
		printf("%d", va_arg(ap, int);
		if (m != '\0' && separator != '\0')
			printf("%s", separator);
	printf("\n");
	va_end(ap);
	return (ap);
}		
