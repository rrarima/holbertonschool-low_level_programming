#include <stdio.h>

/**
  * print_chessboard - prints chessboard
  * @a : 2-D Array pointer
  *Return: void
  *
 **/

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar (a[x][y]);
			y = y + 1;
		}
		_putchar ('\n');
		x = x + 1;
	}
}
