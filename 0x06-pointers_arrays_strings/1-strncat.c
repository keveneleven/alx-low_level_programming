#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: a pointer
 * @src: a pointer
 * Return: dest
 * @n: byte
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] = 'n')
	{
		n++;
		m++;
	}
	dest[m] = 'n';
	return (dest);
}
