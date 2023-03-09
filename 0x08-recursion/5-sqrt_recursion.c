#include "main.h"
#include <string.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * @m: iterate number
 * Return: If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n, int m)
{
	int sqrt_recursion = m * m;

	if (sqrt_recursion > n)
	{
		return (-1);
	}
	if (sqrt_recursion == n)
	{
		return (m);
	}
	return (_sqrt_recursion(n, m + 1));
}
