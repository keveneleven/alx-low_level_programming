#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key to add the element
 * @value: value to add the element
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *numcopy, *keycopy;
	hash_node_t  *tub, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	numcopy = strdup(value);
	if (!numcopy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tub = ht->array[index];

	while (tub)
	{
		if (!strcmp(key, tub->key))
		{
			free(tub->value);
			tub->value = numcopy;
			return (1);
		}
		tub = tub->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(numcopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = numcopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
