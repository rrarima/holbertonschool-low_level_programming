#include "main.h"
/**
 * print_diagonal - draw diagonal line in terminal
 * @n: number of \
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int a;

	while (i < n && n > 0)
	{
		a = 0;
		while (a < i)
		{
			_putchar(' ');
			a++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
