#include "lists.h"

size_t str_len(const char *str);

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: list head
 * @str: string argument
 *
 * Return: Address of new node added of NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_node;

	new_node = malloc(sizeof(list_t));  /* 1. allocate memory */

	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->str = strdup(str);
	new_node->len = str_len(str);
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

/**
 * str_len - takes a string and calculate its lenght
 * @str: string argument
 *
 * Return: length of str
 */
size_t str_len(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	return (len);
}
