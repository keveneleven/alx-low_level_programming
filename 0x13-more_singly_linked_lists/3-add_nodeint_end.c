#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: linked list
 * @n: integer
 * Return: number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;
	
	new_code = malloc(sizeof(listint_t));
	if (new_code == NULL)
		return (NULL);
	temp = *head;
	if (temp == NULL)
		*temp = new_node;
	else
	{
		while (temp->next != NULL)
		{
			temp == temp->next;
			temp->next == new_node;
		}
	}
	return (*head);
}
