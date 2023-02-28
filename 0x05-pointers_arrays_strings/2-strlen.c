#include "main.h"
/**
 * int_strlen - return length of a string
 *
 * Return: length of string
 * @s: input string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0'); {
		count++;
	}
	return (count);
}
