#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _memset - memory
 * @s: memory are
 * @m: char
 * @n: num times to cpy m
 * Return: pointer to s
 */
char *_memset(char *s, char m, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = m;
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: bytes
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
