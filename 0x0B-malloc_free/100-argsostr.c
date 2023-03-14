#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int m, n, o, p;

	if (ac == 0)
		return (NULL);

	for (m = n = 0; n < ac; n++)
	{
		if (av[n] == NULL)
			return (NULL);

		for (o = 0; av[n][o] != '\0'; o++)
			m++;
		m++;
	}

	aout = malloc((m + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (n = o = ia = 0; p < m; o++, p++)
	{
		if (av[n][o] == '\0')
		{
			aout[p] = '\n';
			n++;
			p++;
			o = 0;
		}
		if (p < m - 1)
			aout[p] = av[n][o];
	}
	aout[p] = '\0';

	return (aout);
}
