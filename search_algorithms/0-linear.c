#include "search_algos.h"
/**
  * linear_search - function that searches for a value in an array of
  *			integers using the Linear search algorithm.
  *
  * @array: pointer to array in main
  * @size: size of array
  * @value: value to search in array
  * Return: -1 if value is not present in array or if array is NULL
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
