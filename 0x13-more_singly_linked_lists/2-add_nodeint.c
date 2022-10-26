#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: list head
 * @n: string argument
 *
 * Return: Address of new node added or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));  /* 1. allocate memory */

	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->n = n;
	new_node->next = (*head); /* 3. Make next of new node as head */

	/* 4. move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
}
