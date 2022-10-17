#include "main.h"

/**
*_pow_recursion - return power of two values
*@x: int
*@y: power of
*Return: power of two numbers
*/
int _pow_recursion(int x, int y)
{
	if (y < 0) /*return -1 if condition is less than 0*/
	{
		return (-1);
	}
	if (y == 0) /*return 1 if condition is equal to 0*/
	{
		return (1);
	}
	/*-1 from y so it can continue doing calculations*/
	return (x * _pow_recursion(x, y - 1));
}
