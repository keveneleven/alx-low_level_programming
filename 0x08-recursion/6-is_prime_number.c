#include "main.h"
#include <string.h>

int actual_prime(int n, int m);
/**
 * _is_prime_number - to see if an int is prime number or not
 * @n: number
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * is_prime - calculates if a number is a prime
 * @m: iterator
 * @n: number to check
 * Return: 1 if n a prime, 0 otherwise
 */

int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}
