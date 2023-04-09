#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit
 * to 0 at a given index
 * @n: printed num
 * @index: index of bit
 * return: 1 if it worked,
 * or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	bit = ~(1UL << index);
	*n &= bit;
	return (1);
}
