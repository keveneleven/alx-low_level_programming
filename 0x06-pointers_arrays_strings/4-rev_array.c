#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int m, k, temp;

	for (m = 0; m < n - 1; m++)
	{
		for (k = m + 1; k > 0; k--)
		{
			temp = *(a + k);
			*(a + k) = *(a + (k - 1));
			*(a + (k - 1)) = temp;
		}
	}
}
