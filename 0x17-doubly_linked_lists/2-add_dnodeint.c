#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of
*	a DLL
*
* @head: pointer to head node
* @n: new node data
*
* REturn: Address of new node, NULL is failed 
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;

	(*head) = new;

	return (new);
}
