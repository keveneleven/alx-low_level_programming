#include "main.h"
#include <string.h>
/**
 * int_strlen - return length of a string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0');
		count++;
	return (count);
}
