#include "lists.h"

/**
 * free_listint - frees linked list from memory
 * @head: list first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	/**
	 * while current node (temp), head node is not NULL
	 * set head as the next node and
	 * free the current node (temp) str then
	 * free temp node.
	*/

	while ((temp = head) != NULL)
	{
		head = head->next;
		 /* free(temp->n); */
		free(temp);
	}
}
