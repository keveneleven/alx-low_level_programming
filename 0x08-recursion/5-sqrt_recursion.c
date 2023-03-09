#include "main.h"
#include <string.h>

int actual_sqrt_recursion(int n, int m);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * @m: iterate number
 * Return: If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - to find natural 
 * square root number
 * @n: number to calculate root of a number
 * Return: resulting square
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}

