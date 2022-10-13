#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: String to be encoded.
 *
 * Return: str
 */
char *leet(char *str)
{
	int index1 = 0;
	int index2;

	char letters[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2 = index2 + 1)
		{
			if (str[index1] == letters[index2] ||
				str[index1] - 32 == letters[index2])
			{
				str[index1] = index2 + '0';
			}
		}
		index1 = index1 + 1;
	}
	return (str);
}
