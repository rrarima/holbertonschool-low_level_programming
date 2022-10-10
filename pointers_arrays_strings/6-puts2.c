#include "main.h"
#include <string.h>

/**
* puts2 - print every other character
* @str: characters to print
* Return: 0
**/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
