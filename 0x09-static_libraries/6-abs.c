#include "main.h"
/**
 *_abs - function that computes the absolute value of a computer
 * @c: integer input
 *
 * Return: absolute value of ab
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
		return (c);
}
