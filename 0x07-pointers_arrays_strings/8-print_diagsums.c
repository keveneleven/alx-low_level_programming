include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the 2
 * diagonals of a square matrix of integers
 * @a: input pointer
 * @size: size of matrix
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int m, sum1 = 0, sum2 = 0;

	for (m = 0; m < (size * size); m++)
	{
		if (m % (size + 1) == 0)
			sum1 += *(a + m);
		if (m % (size - 1) == 0 && m != 0 && m < size * size - 1)
			sum2 += *(a + m);
	}
	printf("%d, %d\n", sum1, sum2);
}

