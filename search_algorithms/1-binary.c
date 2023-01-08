#include "search_algos.h"
/**
  * binary_search -  function that searches for a value in an array of
  *			integers using the Linear search algorithm.
  * @array: pointer to array in main
  * @size: size of array
  * @value: value to search in array
  * Return: -1 if value is not present in array or if array is NULL
  */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		size_t middle = left + (right - left) / 2;
		size_t i;

		printf("Searching in array: ");
		i = left;
		while (i <= right)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");

			i = i + 1;
		}
		printf("\n");
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
