#include "main.h"

int root_calc(int n, int i);

/**
* _sqrt_recursion - returns the sqrt of the number
* @n: number from _sqrt_recursion pintf
* Return: sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_calc(n, 0));
}

/**
* root_calc - finds the natural sqrt of a num
* @n: input
* @i: counter starting from zero
* Return: sqrt
*/
int root_calc(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)/*once comparison = to n, we return to main*/
		return (i);
	return (root_calc(n, i + 1));/*this will increment if not true*/
}
