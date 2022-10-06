#include "main.h"
/**
 * print_line - draw straight line
 * @n: Put length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
