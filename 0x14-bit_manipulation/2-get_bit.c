#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit
 * at a given index
 * @n: printed num
 * @index: the index of bit
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 0x01;
	unsigned long int bit_index = sizeof(unsigned long int) * 8 - 1;

	if (index > bit_index)
		return (-1);
	m = m << index;
	if ((n & m) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
