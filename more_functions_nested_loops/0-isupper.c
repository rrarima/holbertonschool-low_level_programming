#include "main.h"
/**
*_isupper - check if character is capital
*
*@c: character to be verified
*
*Return: return 0 or 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
