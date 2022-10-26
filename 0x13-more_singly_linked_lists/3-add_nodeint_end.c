#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: list head
 * @n: string argument
 *
 * Return: Address of new node added or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;

	new_node = malloc(sizeof(listint_t));  /* 1. allocate memory */

	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->n = n;
	/* make the next of new_node null since it will be the last node */
	new_node->next = NULL;

	temp_node = *head; /* copy head node to temp_node */

	/* if the list is empty, make the new node as head */
	if (temp_node == NULL)
		*head = new_node;
	else
	{
		/* Else traverse till the last node */
		while (temp_node->next != NULL)
			temp_node = temp_node->next;

		/* change the next of temp_node node */
		temp_node->next = new_node;
	}

	return (*head);
}
