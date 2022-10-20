#include "lists.h"

/**
 * list_len - get the total number of nodes in a linked list
 * @h: pointer to struct list_t
 *
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t i;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		h = h->next; /* goto next node */
		i += 1; /* increase count */
	}

	return (i);
}
