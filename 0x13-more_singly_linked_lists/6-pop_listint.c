#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * of a list
 * and returns the head node’s data (n)
 * @head: singly linked list
 * Return: popped element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
