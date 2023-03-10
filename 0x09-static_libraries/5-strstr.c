#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: a pointer to beginning of string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *mhaystack, *ineedle;

	while (*haystack != '\0')
	{
		mhaystack = haystack;
		ineedle = needle;

		while (*haystack != '\0' && *ineedle != '\0' && *haystack == *ineedle)
		{
			haystack++;
			ineedle++;
		}
		if (!*ineedle)
			return (mhaystack);
		haystack = mhaystack + 1;
	}
	return (0);
}
