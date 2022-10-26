#include "lists.h"

/**
 * print_listint - prints all the element in a linked list
 * @h: pointer to struct listint_t
 *
 * Return: number of node or zero (0) if fails
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	/* end program if h is null */
	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next; /* goto next node */
		i += 1; /* increase count */
	}

	return (i);
}
