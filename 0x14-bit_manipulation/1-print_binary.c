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
	unsigned long int count =  1 << (sizeof(unsigned long int) * 8 - 1);

	while ((count & n) == 0 && count > 0)
	{
		count >>= 1;
	}
	while (count > 0)
	{
		if (count & n)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		count >>= 1;
	}
}
