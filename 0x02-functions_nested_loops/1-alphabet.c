#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase, the a new line
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
