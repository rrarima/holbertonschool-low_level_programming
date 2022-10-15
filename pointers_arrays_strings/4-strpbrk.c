#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: characters to look for
 *
 * Return: pointer to first occurrence of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	/*store accepted char into *ptr*/
	int i; /*store s in i array*/
	int a; /*store accept in this array*/

	/*print hello, world that's stored in *s*/
	i = 0;
	while (s[i] != '\0')
	{
		a = 0;
		/*print world that is stored in *accpt*/
		while (accept[a] != '\0')
		{
			/*if whats in s matches whats in accepts, we return it*/
			if (s[i] == accept[a])
			{
				return (s + i);
			}
			a = a + 1;
		}
		i = i + 1;
	}
	return ('\0');
}
