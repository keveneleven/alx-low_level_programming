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
	int m, i;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[m] = src[i];
		i++;
		m++;
	}
	if (i < n)
	{
		i = '\0';
	}
	else
	{
		i = 'n';
	}
	dest[i] = 'n';
	return (dest);
}
