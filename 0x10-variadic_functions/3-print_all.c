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
	char *str, *s = "";
	va_list lists;

	va_start(lists, format);
	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", s, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(lists, double));
					break;
				case 's':
					str = va_arg(lists, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					m++;
					continue;
			}
			s = ",";
			m++;
		}
	}
	printf("\n");
	va_end(lists);
}

