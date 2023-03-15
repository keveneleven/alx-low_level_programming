#include <stdio.h>

/**
 * main - print the number of arguements passed
 * @argc: number of arguements
 * @argv: one dimensional array
 * Return: 0 - Successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int m;

	for (m = 0; m < argc; m++)
	{
		continue;
	}
	--m;
	printf("%d\n", m);
	return (0);
}
