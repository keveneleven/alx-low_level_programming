#include "main.h"
#include <string.h>
/**
 * _pow_recursion -  function that returns the value of x raised to the power of y.
 * @x: int
 * @y: int
 * Return: if  y is lower than 0, return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		_pow_recursion(x ^ y);
	}
	return (0);
}

