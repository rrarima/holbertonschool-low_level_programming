#include "main.h"
/**
 * print_alphabet_x1 - print alohabet 10x
 *
 *
 *
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
