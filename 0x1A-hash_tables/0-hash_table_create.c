#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *plank;

	if (size == 0)
		return (NULL);

	plank = calloc(1, sizeof(hash_table_t));
	if (plank == NULL)
		return (NULL);

	plank->size = size;
	plank->array = calloc(size, sizeof(hash_node_t *));
	if (plank->array == NULL)
	{
		free(plank);
		return (NULL);
	}
	return (plank);
}
