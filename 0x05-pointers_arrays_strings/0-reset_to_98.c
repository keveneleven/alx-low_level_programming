#include "main.h"
/**
 * reset_to_98 - set integer to 98
 *
 * Return: 0
 * @n: a pointer to integer we want to set to 98
 */
void reset_to_98(int *n);
{
	int *n;
	n = 98;
	reset (&n);
	_putchar("Reset value: %d\n", *n);
}
