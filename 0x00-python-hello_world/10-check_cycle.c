#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if list cycle
 * @list: pointer
 * Return: 1 cycle 0 other
 */
int check_cycle(listint_t *list)
{	
		listint_t *slow = list, *fast = list;

		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
				return (1);
		}
return (0);
}
