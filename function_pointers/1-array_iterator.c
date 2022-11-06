#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - ittereate through array of action
 * @array: pointer to array of int
 * @size: type of size_t typedef
 * @action: pointer to function
 * Return: always successful
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
