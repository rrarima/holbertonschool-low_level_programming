#include "main.h"
/**
 * print - print numbers from 0-9.
 *
 *
 * Return: The result of the multiplication.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
