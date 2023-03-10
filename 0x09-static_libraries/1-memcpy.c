#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		memcpy(dest, src, n);
	return (dest);
}
