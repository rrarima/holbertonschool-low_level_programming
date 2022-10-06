#include "main.h"
/**
 * print_numbers - print numbers from 0-9.
 *
 *
 * Return: The result of the multiplication.
 */
void print_numbers(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
