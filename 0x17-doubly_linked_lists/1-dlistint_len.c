#include "lists.h"

/**
* dlistint_len - Returns only the length of a linked list
* @h: head of DDL
*
* Return: Total number of element in a list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
