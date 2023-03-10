#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return: 0, otherwise -1 if NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	for (; *(s + m) != '\0'; m++)
		if (*(s + m) == c)
			return (s + m);
	if (*(s + m) == c)
		return (s + m);
	if (*(s + m) != c)
		return ('\0');

	return (0);
}
