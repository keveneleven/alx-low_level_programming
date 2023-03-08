#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + i);
	}
	return (i);
}
