#include "main.h"
#include <string.h>

/**
* rev_string - reverse string
* @s: reverse a string
* Return: reverse of string
**/
void rev_string(char *s)
{
	if (s != NULL)
	{
		size_t len = strlen(s);
		char *end = s + (len > 1 ? len - 1 : 0);
		char *aux = s;

		for (len /= 2; len; --len)
		{
			char tmp = *aux;
			*aux++ = *end;
			*end-- = tmp;
		}
	}
}
