#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: bytes
 * Return: set of bytes or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m;
	unsigned int n;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(s + m) == *(accept + n))
				return (s + m);
		}
	}
	return ('\0');
}
