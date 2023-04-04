#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  function that frees a list.
 * @h: singly linked list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(head);
	}
}
