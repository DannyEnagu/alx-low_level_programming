#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *current, *next_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current != NULL)
			{
				next_node = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next_node;
			}
		}
	}

	free(table->array);
	free(table);
}
