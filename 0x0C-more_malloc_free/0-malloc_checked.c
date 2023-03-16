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
	unsigned int m;
	char *i;

	i = malloc(b);
	for (m = 0; i[m] != '\0'; m++)
		;
	if (i == NULL)
		exit(98);
	return (i);
}
