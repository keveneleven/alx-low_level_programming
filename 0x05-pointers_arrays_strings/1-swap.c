#include "main.h"
/**
 * swap_int - swaps values of integers
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n = a;
	*a = 98;
	*b = 42;
	*a = *b;
	n = *a;
	n = *b;

}
