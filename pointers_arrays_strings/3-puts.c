#include "main.h"
#include <string.h>

/**
* _puts - print string
* @str: print string
* Return: 0
**/

void _puts(char *str)
{
	int i = 0;
  
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchr('\n');
}
