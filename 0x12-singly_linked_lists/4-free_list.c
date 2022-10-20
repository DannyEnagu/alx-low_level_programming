#include "lists.h"

/**
 * free_list -frees linked list from memory
 * @head: list first node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	/**
	 * while current node (temp) node head is not NULL
	 * set head as the next node and
	 * free the current node (temp) str then
	 * free temp node.
	*/

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
