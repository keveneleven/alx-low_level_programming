#include "main.h"
#include <stddef.h>
/**
 * int_strlen - return length of a string
 *
 * Return: length of string
 * @s: input string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
