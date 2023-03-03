#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int m = 0, n;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + m) >= 97 && *(s + m) <= 122)
		*(s + m) = *(s + m) - 32;
	m++;
	while (*(s + m) != '\0')
	{
		for (n = 0; n < 13; n++)
		{
			if (*(s + m) == sep_words[n])
			{
				if ((*(s + (m + 1)) >= 97) && (*(s + (m + 1)) <= 122))
					*(s + (m + 1)) = *(s + (m + 1)) - 32;
				break;
			}
		}
		m++;
	}
	return (s);
}

