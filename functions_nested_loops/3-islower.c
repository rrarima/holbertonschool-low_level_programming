#include "main.h"
/**
 * _islower - check for lowercase character
 *
 * @c: char input from user
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
