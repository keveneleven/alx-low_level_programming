#include "lists.h"
/**
 * find_listint_loop -  finds loop in a linked list
 * @head: singly_linked list
 * Return: address of node 
 * where loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL && head->next == NULL)
		return (NULL);
	slow = head->next;
	fast = head->next->next;
	while (fast == NULL && fast->next == NULL)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
