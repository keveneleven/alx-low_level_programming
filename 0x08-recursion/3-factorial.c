#include "main.h"
#include <string.h>
/**
 * factorial - returns factorial of a given number
 * @n: integer
 * Return: if n is lower than 0 return -1
 */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (factorial(n) = n * factorial(n - 1));
	}
}
