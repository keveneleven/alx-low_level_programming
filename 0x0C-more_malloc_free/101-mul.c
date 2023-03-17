#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"
/**
 * isdigit - checks if a string 
 * non-digit char
 * @s: string to be evaluated
 * Return: 0 if non-digit is foud
 * 1 otherwise
 */
int is_digit(char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] < '0' || s[m] > '9')
			return (0);
		m++;
	}
	return (1);
}
/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive 
 * numbers
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *s1;
	char s2;
	int len, 1len, 2len = 0;
	int m, a = 0;
	int carry, *result = 0;
	int 1digit, 2digit = 0;

	s1 = argv[1], s2 = argv[2];
	
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
			errors();
	1len = _strlen(s1);
	2len = _strlen(s2);
	len = 1len + 2len + 1;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);
	for (m = 0; m <= 1len + 2len; m++)
		result[m] = 0;
	for (llen = 1len - 1; 1len >= 0; 1len--)
		{
			1digit = s1[1len] - '0';
			carry = 0;
		
		for (2len = _strlen(s2) - 1; 2len >= 0; 2len--)
			{
				2digit = s2[2len] - '0';
				carry += result[1len + 2len + 1] + (1digit * 2digit);
				result[1len + 2len + 1] = carry % 10;
				carry /= 10;
			}
			
		if (carry > 0)
		result[1len + 2len + 1] += carry;
		}
	for (m = 0; m < len - 1; m++)
		{
			if (result[m])
				a = 1;
			if (a)
				_putchar(result[m] + '0');
		}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
	


