#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: Number
 * @m: The Number we need to flip to
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned long int flipped = 0;

	while (i > 0)
	{
		flipped = flipped + (i & 1);
		i = i >> 1;
	}

	return (flipped);
}
