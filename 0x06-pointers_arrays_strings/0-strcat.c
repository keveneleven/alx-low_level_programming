#include "main.h"
#include <string.h>
/**
 * _ strcat - concatenates two strings
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char dest[98]="Hello";
	char src[]="World!";
	strcat(dest, src);
	_putchar("%s\n", dest);
	puts(src);
}
