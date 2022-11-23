#include "hash_tables.h"

/**
 * hash_table_create - funtion that creates a hash table
 * @size: size of array
 * Return: hash_table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *allocate_table = malloc(sizeof(hash_table_t) * 1);

	if (size == 0 || allocate_table == NULL)
	{
		return (NULL);
	}
	allocate_table->size = size;
	allocate_table->array = malloc(sizeof(size) * TABLE_SIZE);
	if (allocate_table->array == NULL)
	{
		return (NULL);
	}
	while (i < TABLE_SIZE)
	{
		allocate_table->array[i] = NULL;
		i = i + 1;
	}

	return (allocate_table);
}
