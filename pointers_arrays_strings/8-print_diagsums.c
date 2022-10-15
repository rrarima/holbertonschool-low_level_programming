#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (row < size)
	{
		sum1 = sum1 + *(a + row * size + row);
		sum2 = sum2 + *(a + row * size + size - row - 1);

		row++;
	}

	printf("%i, %i\n", sum1, sum2);
}
