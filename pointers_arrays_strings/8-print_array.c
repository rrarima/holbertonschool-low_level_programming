#include"main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: array string
 * @n: array elemts
 *
 * Return: Nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	/* iterate through arrays*/
	while (i < n)
	{
		printf("%d", a[i]); /* print arrays during condition*/

		if (i < n - 1) /* puts , at end of array int  after i++*/
		{
			printf(", ");
		}
		i = i + 1; /* +1 loop  until condition is false*/
	}
	printf("\n");
}
