#include "lists.h"

/**
* print_dlistint - print all node data form a doubly linked list
*
* @h: pointer to head node of DLL
*
* Return: Number of nodes 
*/
 
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
