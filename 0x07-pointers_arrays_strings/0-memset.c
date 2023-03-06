#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: address of memory to print
 * @n: bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(s + m) = b;
	return (s);
}

