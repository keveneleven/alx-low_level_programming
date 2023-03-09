#include "main.h"
#include <string.h>
/**
 * _pow_recursion -  function that returns the value of x
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
	if (y == 0)
	{
		return (1);
		_pow_recursion((x, y + 1) / x);
	}
	return (_pow_recursion(x, y - 1) * x);
}


