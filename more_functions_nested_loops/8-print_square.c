#include "main.h"
/**
 * print_square - print square
 * @n: number of
 *
 * Return: void
 */
void print_square(int n)
{
	int i = 0;
	int a;

	while (i < n && n > 0)
	{
		a = 0;
		while (a < n)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
