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
	int m = 0;
	int i = 0;

	m = 0;
	while (*(dest + m) != '\0')
	{
		m++;
	}
	i = 0;
	while (src[i] < n)
	{
		*(dest + m) = *(src + i);

		if (*(src + i) == '\0')
			break;
		m++;
		i++;
	}
	return (dest);
}
