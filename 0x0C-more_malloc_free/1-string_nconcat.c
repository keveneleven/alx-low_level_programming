#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatnenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: a pointer to memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b, c, d;
	unsigned int lens2;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	lens2 = b;
	if (n >= lens2)
		b = lens2;
	else
		b = n;
	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		p[c] = s1[c];
	for (d = 0; d <= b; c++, d++)
		p[c] = s2[d];
	return (p);
}
