#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @n: integer
 * @head: head of linked list
 * Return: address of head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_code;

	new = malloc(sizeof(listint_t));
	if (new_code == NULL)
		return (NULL);
	new_code->n = n;
	new_code->next = *head;
	*head = new_code;
	return (*head);
}

