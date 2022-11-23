#include "main.h"

/**
 * set_bit - sets a bit to 0 at given index
 * @n: pointer to integer
 * @index: index to set to 0
 * Return: 1 if succeeded or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int insert_zero;

	if (index >= sizeof(n) * 8 - 1)
	{
		return (-1);
	}

	insert_zero = 1 << index;

	*n = *n & ~insert_zero;

	return (1);
}
