#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print table up to 98.
 * Return: table
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d ", n++);
		}
		printf("%d\n", n);
	}
	printf("98\n");
}
