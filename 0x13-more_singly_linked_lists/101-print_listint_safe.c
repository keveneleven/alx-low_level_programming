#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a list
 * @head: singly linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *next;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		next = current->next;
		count++;
		if (next <= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			exit(98);
		}
		current = next;
	}
	return (count);
}
