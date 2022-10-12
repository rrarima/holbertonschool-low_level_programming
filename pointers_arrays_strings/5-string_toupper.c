#include "main.h"

/**
 * string_toupper - chane lowercase letters of string to uppercase
 * @str: take string input
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	/* iterate through array values*/
	while (str[i] != '\0')
	{
		/*search for all lowercase letters*/
		if (str[i] > 96 && str[i] < 123)
		{
			/**
			 * Subtracts 32 from ascii code lower case
			 * and always get upper case equivalent
			 */
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
