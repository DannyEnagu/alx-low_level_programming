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

	if (h)
	{
		i = 0;
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
				i += 1;
			}
			else
			{
				printf("[%u] (%s)\n", h->len, h->str);
				i += 1;
			}

			h = h->next;
		}
	}

	return (i);
}
