#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *)&m;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
