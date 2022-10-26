#include "lists.h"

/**
 * free_listint2 - frees linked list from memory
 * @head: list first node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *placeholder;

	if (head  != NULL)
	{
		/* copy head to placeholder */
		placeholder = *head;

		while ((temp = placeholder) != NULL)
		{
			placeholder = placeholder->next;
			free(temp);
		}
		/* set head to NULL after free the list */
		*head = NULL;
	}
}
