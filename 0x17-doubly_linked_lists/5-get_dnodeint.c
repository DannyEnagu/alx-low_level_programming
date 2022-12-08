#include "lists.h"

/**
* get_dnodeint_at_index - Returns nth node in a linked list
*
* @head: pointer to head node of a DLL
* @index: index of target node
*
* REturn: target node, NULL if failed
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i, len = 0;
	
	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}

	current = head;

	if (index > len)
		return (NULL);
	else
	{
		for (i = 0; i <= len; i++)
		{
			if (i == index)
				break;
			current = current->next;
		}
	}

	return (current);
}
