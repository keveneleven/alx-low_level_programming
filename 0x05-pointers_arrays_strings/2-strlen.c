#include "main.h"
#include <stddef.h>
/**
 * int_strlen - return length of a string
 *
 * Return: length of string
 * @s: input string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
