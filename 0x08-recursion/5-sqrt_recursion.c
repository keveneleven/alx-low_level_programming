#include "main.h"
#include <string.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * Return: If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (_sqrt_recursion(n, 0));
	}
}
