#include "main.h"
#include <string.h>

/**
* _puts - print string
* @str: print string
* Return: 0
**/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
