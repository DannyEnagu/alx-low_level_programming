#include "lists.h"

size_t str_len(const char *str);

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: list head
 * @str: string argument
 *
 * Return: Address of new node added of NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));  /* 1. allocate memory */

	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = (*head); /* 3. Make next of new node as head */

	/* 4. move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
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
