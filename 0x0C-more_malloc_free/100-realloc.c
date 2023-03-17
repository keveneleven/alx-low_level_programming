#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory 
 * @old_size: size in bytes
 * @new_size: new size in bytes
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *1ptr;
	char *pre_ptr;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	1ptr = malloc(new_size);
	if (!1ptr)
		return (NULL);
	pre_ptr = ptr;
	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
			1ptr[m] = pre_ptr[m];
	}
	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
			1ptr[m] = pre_ptr[m];
	}
	free(ptr);
	return (1ptr);
}
