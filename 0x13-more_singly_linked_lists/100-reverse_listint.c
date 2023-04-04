#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: singly linked list
 * Return: pointer to first node
 * of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
