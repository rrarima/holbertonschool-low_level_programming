#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int a;

	/*iterate through s1 & s2*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/*if characters a different, do not continue*/
		if (s1[i] != s2[i])
		{
			/*return the difference of the two characters*/
			a = s1[i] - s2[i];
			break;
		}
		else
		{
			a = s1[i] - s2[i];
		}
		i++;
	}
	return (a);
}
