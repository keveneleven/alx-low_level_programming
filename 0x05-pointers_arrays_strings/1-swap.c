#include "main.h"
#include <assert.h>
/**
 * swap_int - swaps values of integers
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;
	swap(&a, &b);
	assert(a == 42);
	assert(b == 98);
}
