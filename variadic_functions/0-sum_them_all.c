#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all its parameters
 * @n: take no of arguments
 * ... - variable number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i = i + 1;
	}
	va_end(ap);
	return (sum);
}
