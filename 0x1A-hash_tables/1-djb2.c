#include "hash_tables.h"

/**
 * hash_djb2 - function to compute hash of 'str' using djb2
 * @str: string to
 * Return: 64 bits mix
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int mix;
	int m;

	mix = 5381;
	while ((m = *str++))
	{
		mix = ((mix << 5) + mix) + m; /* mix * 33 + m */
	}
	return (mix);
}
