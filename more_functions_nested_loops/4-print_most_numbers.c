#include "main.h"
/**
 * print_most_numbers - print 0-9 except 2 & 4.
 *
 *
 * Return: 0.
 */
void print_most_numbers(void)
{
	char n = 48;

	while (n < 58)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		else
		{
			_putchar(n++);
		}
	}
	_putchar('\n');
}
