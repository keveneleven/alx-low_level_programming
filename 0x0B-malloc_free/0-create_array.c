#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: memory
 *
 * Return: pointer to array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		create_array(c);
		if (size == 0)
			return ('\0');
		else if (size > 0)
			return ((*c));
		else
			return (NULL);
	}
	return (*(c));
}
