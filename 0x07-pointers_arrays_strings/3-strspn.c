#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @accept: bytes
 * @s: string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;

	for (; *(s + m) != '\0'; m++)
		if (*(s + m) == *accept)
			return (*(s + m));
	if (*(s + m) == *accept)
		return (*(s + m));
	return (*accept);
}
