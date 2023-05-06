#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 ata given index
 * @n: number of bits
 * @index: inex of of bit you want to set starting at 0
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
    return (1);
}
