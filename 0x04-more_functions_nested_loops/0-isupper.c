#include "main.h"
/**
 * _isupper - checks if parameter is an uppercase character.
 *
 * Return: 1 if is an uppercase character, 0 in otherwise
 * @c: input number
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

