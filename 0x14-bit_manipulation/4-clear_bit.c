#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: number of bit at given index
 * @index: index of bit you want to set starting at 0
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int container;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	container = ~(1UL << index);
	*n &= container;
	return (1);
}
