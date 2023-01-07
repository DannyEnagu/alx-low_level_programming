#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *head, *tmp;
	unsigned long int i;

	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			while ((tmp = head) != NULL)
			{
				head = head->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}

	free(table->array);
	free(table);
}
