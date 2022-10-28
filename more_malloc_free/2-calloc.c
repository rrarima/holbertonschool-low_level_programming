#include "main.h"
#include <stdlib.h>
#include "functions.h"
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	unsigned int calloc_space = nmemb * size;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(calloc_space);

	if (m == 0)
		return (NULL);

	_memset(m, 0, calloc_space);

	return (m);
}
