#include "hash_tables.h"

/**
 * sorted_list - function for insert new node in sorted
 * @ht: hash table
 * @new_node: new node
 *
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *stub = ht->shead;

	if (stub == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, stub->key) < 0)
		{
			new_node->snext = stub;
			new_node->sprev = stub->sprev;

			if (!stub->sprev)
				ht->shead = new_node;
			else
				stub->sprev->snext = new_node;
			stub->sprev = new_node;
			return;
		}
		stub = stub->snext;
	} while (stub);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - creates a sorted hash tables
 * @size: size of the hash table
 * Return: hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *plank;

	if (size == 0)
		return (NULL);

	plank = calloc(1, sizeof(shash_table_t));
	if (plank == NULL)
		return (NULL);

	plank->size = size;
	plank->array = calloc(size, sizeof(shash_node_t *));
	if (plank->array == NULL)
	{
		free(plank);
		return (NULL);
	}
	return (plank);
}

/**
 * shash_table_set - function that adds an element to the sorted hash table
 * @ht: hash table
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *numcopy, *keycopy;
	shash_node_t  *tub, *new_node;

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
	new_node = calloc(1, sizeof(shash_node_t));
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
	sorted_list(ht, new_node);
	return (1);
}
/**
 * shash_table_get - function to retrieve value associeted with key
 * @ht: hash table
 * @key: key to retrive value
 * Return: value or NULL if key does not exit.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t  *tub;

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

/**
 * shash_table_print - function to print the key:value from ht
 * @ht: hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tub;
	int m = 0;

	if (!ht)
		return;
	tub = ht->shead;
	printf("{");
	while (tub)
	{
		if (m)
			printf(", ");
		printf("'%s': '%s'", tub->key, tub->value);
		m = 1;
		tub = tub->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function to print the key:value from ht in reverse
 * @ht: hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tub;
	int m = 0;

	if (!ht)
		return;
	tub = ht->stail;
	printf("{");
	while (tub)
	{
		if (m)
			printf(", ");
		printf("'%s': '%s'", tub->key, tub->value);
		m = 1;
		tub = tub->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free hash table
 * @ht: pointer to hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tub, *bin_free;
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
