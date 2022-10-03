#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: 'print 0-9 using int'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
	putchar((n % 10) + '0');
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
