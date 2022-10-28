#include "main.h"

/**
* _memset -fills memory with constant type
* @s: input pointer to char type
* @b: input variable of char type
* @n: unsigned int variable
* Return: A pointer to the filled memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;
	return (s);
}
