#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int index = 1ul << (sizeof(unsigned long int) * 8 - 1);
	unsigned long int m;

	for (m = 0ul; m < sizeof(unsigned long int) * 8ul; m++)
	{
		_putchar((n & index) ? '1' : '0');
		index >>= 1;
	}
	_putchar('\n');
}
