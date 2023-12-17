#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *check cycle - a function that checks if a cycle has a list
 *@list: linked list
 *Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (!list || !list->next)
		return (0);
	fast = list;
	slow = list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
