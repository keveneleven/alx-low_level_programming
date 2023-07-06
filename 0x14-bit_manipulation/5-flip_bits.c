#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number of bits
 * @m: number of bits
 * Return: flipped_bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int found_result = n ^ m;
	unsigned int flipped_bits = 0;

	while (found_result != 0)
	{
		flipped_bits += found_result & 1;
		found_result >>= 1;
	}
	return (flipped_bits);
}
