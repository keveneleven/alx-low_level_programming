#include "main.h"
/**
 * reset_to_98 - set integer to 98
 *
 * Return: 0
 * @n: a pointer to integer we want to set to 98
 */
void reset_to_98(int *n)
{
	int n = 402;
	int *n = &n;
	_putchar("Value of n: %d\n", *n);
	int n = 98;
	reset_to_98(&n);
	_putchar("Value of n: %d\n", n);
}
