#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: memory size
 * @malloc: memory allocation
 * @c: char array
 *
 * Return: pointer to array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	
	if (size == 0)
		return ('\0');
	s = malloc(sizeof(s) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	if (s == NULL)
		return (NULL);
	return (s);
}
