#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Description: 'display lowercase alphabet'
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x;
	int ch;

	x = 0;
	ch = 'a';

	while (x <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

		x++;
	}
}
