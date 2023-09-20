#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tub, *bin_free;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tub = ht->array[i];
		while (tub)
		{
			bin_free = tub;
			tub = tub->next;
			if (bin_free->key)
				free(bin_free->key);
			if (bin_free->value)
				free(bin_free->value);
			free(bin_free);
		}
	}
	free(ht->array);
	free(ht);
}
