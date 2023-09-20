#include "hash_tables.h"

/**
 * hash_table_print - function to print the key value from ht
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tub;
	int m = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tub = ht->array[i];
		while (tub)
		{
			if (m)
				printf(", ");
			printf("'%s': '%s'", tub->key, tub->value);
			m = 1;
			tub = tub->next;
		}
	}
	printf("}\n");
}
