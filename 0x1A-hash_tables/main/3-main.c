#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "nice");
	hash_table_set(ht, "heliotropes", "cool ok");
	hash_table_set(ht, "mentioner", "nice2");
	printf("-------------\n");
	hash_table_set(ht, "neurospora", "cool ok2");
	hash_table_set(ht, "neurospora", "cool ok13");
	hash_table_set(ht, "neurospora", "cool ok4");
	printf("-------------\n");
	hash_table_set(ht, "depravement", "coolid 1");
	hash_table_set(ht, "serafins", "coolid 2");

	return (EXIT_SUCCESS);
}
