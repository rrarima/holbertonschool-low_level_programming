#include "main.h"
/**
 * print_last_digit - Print last digit of number.
 * @n: number to be printed
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_n = n % 10;

	if (last_n < 0)
	{
		last_n *= -1;
	}
	_putchar(last_n + '0');

	return (last_n);
}
