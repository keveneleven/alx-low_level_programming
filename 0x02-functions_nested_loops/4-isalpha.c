#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * Return: 1 for alphabetic lowercase or uppercase character
 * @c: character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
