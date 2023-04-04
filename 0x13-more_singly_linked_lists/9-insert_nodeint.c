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
	listint_t *new_node, *prev_node;
	unsigned int m;

	if (head == NULL)
		return NULL;

	*new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}
	*prev_node = *head;
       	for (unsigned int m = 0; m < idx - 1; m++)
	{
		if (prev_node == NULL)
		{
			free(new_node);
			return NULL;
		}
		prev_node = prev_node->next;
	}
	if (prev_node == NULL || prev_node->next == NULL)
	{
		free(new_node);
		return NULL;
	}
	*next_node = prev_node->next;
	prev_node->next = new_node;
	new_node->next = next_node;
	return (*new_node);
}
