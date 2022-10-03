#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: 'remove q & e fro alphabet'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'q' || alph == 'e')
		{
			continue;
		}
		putchar (alph);
	}
	putchar ('\n');
	return (0);
}
