#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	void *cmpb = malloc(b);

	if (cmpb == NULL)
	{
		exit(98);
	}
	return (cmpb);
}
