#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: 'print alphabet lowercase'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n% 10);
	}
	putchar('\n');
	return (0);
}
