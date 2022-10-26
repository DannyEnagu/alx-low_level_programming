#include "lists.h"

/**
 * pop_listint - Deletes head node of a linked list
 * @head: list head
 *
 * Return: head node's data or 0 if fails
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp, *next_node;

	if (*head == NULL)
	{
		return (0);
	}

	/* copy head node into temp */
	temp = *head;
	i = temp->n; /* set i to temp data */
	/* point next to the next node i.e second node */
	next_node = temp->next;
	/* free temp from memory to delete it */
	free(temp);

	/* set head to the second node */
	*head = next_node;

	return (i);
}
