#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_numbers - print all numbers with separator
 * @separator: separator
 * @n: int, number of undefined arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%i", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i = i + 1;
	}
	printf("\n");
}
