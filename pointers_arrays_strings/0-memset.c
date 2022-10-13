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
	/*decalre unsigned int to store non negative numbers*/

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
