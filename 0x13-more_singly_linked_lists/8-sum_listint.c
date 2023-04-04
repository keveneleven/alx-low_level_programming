#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum 
 * of all the data (n) of a list
 * @head: singly linked list
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

