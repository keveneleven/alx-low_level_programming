#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes
 * the node at index
 * index of a listint_t linked list
 * @head: singly linked list
 * @index: index of node
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int m;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	prev = NULL;
	curr = *head;
	for (m = 0; m < index && curr != NULL; m++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	return (1);
}
