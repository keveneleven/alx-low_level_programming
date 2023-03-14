#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: memory size
 * @c: char
 *
 * Return: pointer to array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(s) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
