#include "main.h"
/**
 * main - check the code
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

	while (x < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		x++;
		ch = 'a';
		_putchar('\n');
	}
}
