#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function to return index of compared int
 * @array: pointer to array of int type
 * @size: size of array of int type
 * @cmp: pointer to function of int type
 *
 * Return: return index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
		index = index + 1;
	}
	return (-1);
}
