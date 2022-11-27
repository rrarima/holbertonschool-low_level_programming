#include "hash_tables.h"

/**
 * hash_table_print - Print whole the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i = 0;
	hash_node_t *node;
	short int comma = 0;

	if (ht == NULL)
	{
		return;
	}

	putchar('{');
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma != 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (comma == 0)
			{
				comma = 1;
			}
		}
		i = i + 1;
	}
	printf("}\n");
}
