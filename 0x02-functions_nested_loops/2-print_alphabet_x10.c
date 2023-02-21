#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c;
	char l;

	for (c = 0; c <= 9; c++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
