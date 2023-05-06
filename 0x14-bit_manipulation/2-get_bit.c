#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit given at an index
 * @n: number
 * @index: index of bit starting at 0
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int container;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
    container = 1UL << index;
    return ((n & container) ? 1 : 0);
}
