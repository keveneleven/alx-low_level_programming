#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node
 * at given position
 * @head: singly linked list
 * @idx: index of list
 * @n: integer
 * Return: address of new node,
 * or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node;
	unsigned int index;

	node = *head;
	if (idx != 0)
	{
		for (index = 0; index < idx - 1 && node != NULL; index++)
		{
			node = node->next;
		}
	}
	if (node == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = node->next;
		node->next = new_node;
	}
	return (new_node);
}
