#include "hash_tables.h"

hash_node_t *linkedlist_insert_head(hash_node_t **head,
	char *key, char *value);
hash_node_t *linkedlist_insert_end(hash_node_t **head,
	char *key, char *value);
size_t print_listint(hash_node_t *h);

/**
* hash_table_set - Adds a new element to the Hash Table.
*
* @ht: Represent our Hash table.
* @key: is the key and
* @value: is the value associated with the key.
*
* Return: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key,
	const char *value)
{
	unsigned long int index, i;
	hash_node_t *head;
	char *key_copy, *value_copy;

	/* Check for empty OOBor no key string*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	key_copy = strdup(key);
	value_copy = strdup(value);
	if (!key_copy || !value_copy)
		return (0);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	head = ht->array[index];
	if (!head)
		linkedlist_insert_end(&head, key_copy, value_copy);
	else
		linkedlist_insert_head(&head, key_copy, value_copy);

	if (!head)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}

	ht->array[index] = head;
	return (1);
}

/**
 * linkedlist_insert_head - Adds a new node at the beginning of a linked list
 * @head: list head
 * @key: is the key and
 * @value: value is the value associated with the key.
 *
 * Return: ponter to the address of the added node or NULL if it fails
 */

hash_node_t *linkedlist_insert_head(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));  /* 1. allocate memory */
	if (!new_node)
		return (NULL);

	/* 2. put in the data  */
	new_node->key = key;
	new_node->value = value;
	new_node->next = (*head); /* 3. Make next of new node as head */

	/* 4. move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
}

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: list head
 * @key: is the key and
 * @value: value is the value associated with the key
 *
 * Return: Address of new node added or NULL if fails
 */
hash_node_t *linkedlist_insert_end(hash_node_t **head,
	char *key, char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = key;
	new_node->value = value;
	new_node->next = NULL;

	(*head) = new_node;

	return (*head);
}

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_listint(hash_node_t *h)
{
	hash_node_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("Key: %s => Value %s\n", current->key, current->value);
		current = current->next;
		n++;
	}

	return (n);
}
