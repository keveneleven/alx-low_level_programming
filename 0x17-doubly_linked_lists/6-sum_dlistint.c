#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all the data.
 * @head: head of the list
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int num = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		num += i->n;
	}

	return (num);
}
