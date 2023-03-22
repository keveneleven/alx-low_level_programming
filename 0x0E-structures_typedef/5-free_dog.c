#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: struct dog_t
 *
 * Return: No return
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
