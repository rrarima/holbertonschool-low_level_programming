#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - print rang from 0x00 to 0x0a
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int array;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	array = 0;
	while (min <= max)
	{
		ptr[array] = min;
		min = min + 1;
		array = array + 1;
	}
	return (ptr);
}
