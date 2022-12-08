#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a DLL list
*
* @head: pointer to head node
* @n: new node data
*
* Return: Address of new node, NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	current = (*head);
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
