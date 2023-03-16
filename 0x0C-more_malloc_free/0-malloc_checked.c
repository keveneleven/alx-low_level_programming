#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 *
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
