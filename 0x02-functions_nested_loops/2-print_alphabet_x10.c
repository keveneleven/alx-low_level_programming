#include "main.h"
/**
 * print alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 10; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
