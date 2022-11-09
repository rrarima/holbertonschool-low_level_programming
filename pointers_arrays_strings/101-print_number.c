#include "main.h"

void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n > 9)
	{
		print_number(n/10);
	}

	_putchar ((n % 10) + '0');
}
