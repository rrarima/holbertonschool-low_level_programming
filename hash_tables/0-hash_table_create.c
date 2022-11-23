#include "hash_tables.h"

/**
 * hash_table_create - funtion that creates a hash table
 * @size: size of array
 * Return: hash_table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;

	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);

	hashtable->array = malloc(sizeof(size) * TABLE_SIZE);

	while (i < TABLE_SIZE)
	{
		hashtable->array[i] = NULL;
		i = i + 1;
	}

	return (hashtable);
}
