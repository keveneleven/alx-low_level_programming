#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: singly linked list
 * @index: index of node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int m;

	node = head;
	for (m = 0; m < index && node != NULL; m++;)
	{
		node = node->next;
	}
	return (node);
}
