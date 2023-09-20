#include "hash_tables.h"

/**
 * key_index - get index for given key
 * @key: key (string)
 * @size: size of hash table
 * Return: index of key 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
