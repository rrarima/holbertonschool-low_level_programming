#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: where key is located
 * @size: size of array of the hast table
 * Return: index of where key is
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
