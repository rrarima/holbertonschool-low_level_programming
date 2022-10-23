#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of chars and initialise
 * with specific char
 * @size: size of array to compare
 * @c: char to replace size
 * Return: x or NULL if == 0
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (x);
}
