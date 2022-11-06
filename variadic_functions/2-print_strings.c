#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - print string followed by new line
  * @separator: use , separator
  * @n: 2 arguments
  *
  * Return: string
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *c;

	va_start(args, n);

	while (i < n)
	{
		c = va_arg(args, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
