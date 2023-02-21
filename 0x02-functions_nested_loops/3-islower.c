#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * Return: 1 if c is lowercase, 0 if otherwis
 * @c: single letter input
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
