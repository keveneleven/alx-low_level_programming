#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int m;
	char *str, *sep = "";
	va_list lists;

	va_start(lists, format);
	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", sep, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(lists, double));
					break;
				case 's':
					str = va_arg(lists, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					m++;
					continue;
			}
			sep = ",";
			m++;
		}
	}
	printf("\n");
	va_end(lists);
}

