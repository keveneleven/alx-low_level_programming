#include "main.h"
/**
 * main - print putchar, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		int_putchar(str[count]);
	}
	putchar('\n');
	return (0);
}
