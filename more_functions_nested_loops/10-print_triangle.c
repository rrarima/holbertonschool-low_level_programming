#include "main.h"
/**
 * print_triangle - print triangle
 *@size: using int
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0;
	int a;

	while (i <= size && size > 0)
	{
		a = 0;
		while (a < size - i)
		{
			_putchar(' ');
			a++;
		}
		a = 0;
		while (a < i)
		{
			_putchar('#');
			a++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}
