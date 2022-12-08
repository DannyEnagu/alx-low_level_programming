#include "lists.h"

/**
* sum_dlistint - Returns the sum of all data in a list
* @head: pointer to head node of a DLL
* Return: sum total, 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
