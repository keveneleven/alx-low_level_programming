#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary
 * representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int count;

	count = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (!n)
	{
		_putchar('0');
		return;
	}

	while ((count & n) == 0 && count > 0)
	{
		count >>= 1;
	}
	while (count > 0)
	{
		if (count & n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		count >>= 1;
	}
}
