#include "lists.h"

/**
* list_len - calculates the length of a list
* @head: pointer to head node
* Return: Total item in a list
*/

size_t list_len(dlistint_t **head)
{
	dlistint_t *current;
	unsigned int len = 0;

	current = *head;
	while (current != NULL)
	{
		current = current->next;
		len++;
	}

	return (len);
}

/**
* insert_dnodeint_at_index - Inserts a new node at any
*	given position
*
* @h: list to insert new nodes
* @idx: position in list to add node
* @n: new node data
*
* Return: Address of new node, or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int len, i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	current = (*h);
	if ((*h)->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	len = list_len(h);
	if (idx > len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i <= len; i++)
	{
		if (current->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}

		if (i == idx - 1)
			break;
		current = current->next;
	}

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}
