#include "main.h"
/**
 * more_numbers - print 0-14 10x.
 *
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int x;
	int n;

	x = 0;

	while (x < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n >= 10)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
			n++;
		}
		_putchar('\n');
		x++;
	}
}
