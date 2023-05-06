#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int m;
	
	if (b == NULL)
	{
		return (0);
	}
	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] == '0')
		{
			result = result << 1;
		}
		else if (b[m] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
