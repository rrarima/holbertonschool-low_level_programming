#include "main.h"
/**
 * times_table - Print 9 times table starting from 0.
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int row, col, c, n, i, t;
	n = 9;
	i = 1;
	col = 0;

	while (col < 10)
	{
		row = 0;
		while (row <= 9)
		{
			c = row * col;
			t = n * i % 10;
			_putchar(t + c + '0');
			_putchar(',');
			_putchar(' ');
		        t++;
			row++;
		}
		_putchar('\n');
		col++;
	}
}
