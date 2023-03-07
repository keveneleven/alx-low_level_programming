#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: bytes
 * Return: set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m = 0;

	for (m = 0; *(s + m) != '\0'; m++)
		if (*(s + m) == *accept)
			return (s + m);
	if (*(s + m) != *accept)
		return ('\0');
	return (0);
}
