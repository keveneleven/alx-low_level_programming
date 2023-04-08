#include "main.h"
#include <stdio.h>
/**
 * int binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: points to a string
 * of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int m = 1;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
		{
			num = num << 1;
			num = num | m;
		}
		else if (*b == '0')
		{
			num = num << 1;
		}
		else
		{
			return (0);
		}
		b += 1;
	}
	return (num);
}
