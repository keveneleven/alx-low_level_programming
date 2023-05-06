#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer number
 */
void print_binary(unsigned long int n)
{
	if (num > 1)
		print_binary(num >> 1);

	_putchar((num & 1) + '0');
}
