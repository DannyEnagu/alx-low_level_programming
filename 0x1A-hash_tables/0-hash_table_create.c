#include "hash_tables.h"

/**
* hash_table_create - Creates new Hash Table and initializes
*	the Hash Table array. 
*
* @size: Size of the array.
*
* Return: A pointer to the newly created hash table or NULL if fails
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
