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
	unsigned int m;
	unsigned int n;
	unsigned int bool;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		bool = 1;

		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(s + m) == *(accept + n))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (n);
}
