#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + m) == '\0') && (*(s2 + m) == '\0'))
			break;
		op = *(s1 + m) - *(s2 + m);
		m++;
	}

	return (op);
}
