#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to character that will be changed
 * @src: pointer to a character that will be changed
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	while (dest[m] != '\0')
		{
			m++;
		}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
