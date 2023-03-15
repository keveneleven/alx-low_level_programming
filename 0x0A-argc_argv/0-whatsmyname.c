#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguements
 * @argv: array that contains the program command line arguements
 * Return: 0 - Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
