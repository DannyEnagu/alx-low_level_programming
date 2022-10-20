#include "lists.h"

/**
 * print_list - prints the all the element in a linked list
 * @h: pointer to struct list_t
 *
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	size_t i;

	/* end program if h is null */
	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next; /* goto next node */
		i += 1; /* increase count */
	}

	return (i);
}
