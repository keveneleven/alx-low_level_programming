#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value associeted with key
 * @ht: hash table
 * @key: key to retrive value
 * Return: value or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *tub;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tub = ht->array[index];

	while (tub)
	{
		if (!strcmp(key, tub->key))
			return (tub->value);
		tub = tub->next;
	}
	return (NULL);
}
