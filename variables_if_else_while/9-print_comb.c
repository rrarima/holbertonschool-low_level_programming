#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: 'print single digit combinations'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
