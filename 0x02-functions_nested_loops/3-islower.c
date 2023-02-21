#include "main.h"
/**
 * int_islower - function that checks for lowercase character
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int_islower(int c)
{
	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return(0);
}
