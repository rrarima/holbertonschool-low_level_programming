#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	/*iterate hello world stored in s*/
	while (*s)
	{
		/*scans accept f for charcters to compare*/
		for (i = 0; accept[i]; i = i + 1)
		{
			if (*s == accept[i])
			{
				/*count +1 byte if *s == to accepted*/
				bytes = bytes + 1;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				/*counts double letters once*/
				return (bytes);
			}

		}
		s = s + 1;
	}
	return (bytes);
}
