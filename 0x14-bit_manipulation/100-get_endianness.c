#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * @void: nothing
 * Return: 0 if big endian,
 * 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *)&m;

	if (*c)
		return (1);
	return (0);
}
