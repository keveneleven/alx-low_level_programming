#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int n, k = 0;

	for (n = 0; n < 64; n++)
	{
		if (n % 8 == 0 && n != 0)
		{
			k = n;
			_putchar('\n');
		}
		_putchar(a[n / 8][n - k]);
	}
	_putchar('\n');
}
