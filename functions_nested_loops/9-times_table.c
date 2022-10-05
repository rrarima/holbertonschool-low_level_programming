#include "main.h"
/**
 * times_table - Print 9 times table starting from 0.
 * Return: 9 times table
 */
void times_table(void)
{
	int r, c, n;

	c = 0;

	while (c < 10)
	{
		r = 0;
		while (r <= 9)
		{
			n = c * r;

			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (r != 0)
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			if (r != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			r++;
		}
		_putchar('\n');
		c++;
	}
}
