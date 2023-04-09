#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits
 * you would need to flip
 * to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int flipped = n ^ m;

	while (flipped != 0)
	{
		flipped = flipped & (flipped - 1);
		count++;
	}
	return (count);
}
