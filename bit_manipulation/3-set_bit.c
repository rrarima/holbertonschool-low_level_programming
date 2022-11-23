#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index to set to 1
 *
 * Return: 1 if succeeded of -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int insert_one;

	if (index > sizeof(*n) * 8 - 1)
	{
		return (-1);
	}

	insert_one = 1 << index;

	*n = insert_one | *n;

	return (1);
}
