#include "main.h"

/**
* cap_string - capitalise all words of a string
* @str: string to be capitalised
* Return: array of char
**/

char *cap_string(char *str)
{
	int index = 0;

	/*iterate through array values*/
	while (str[index])
	{
		/*check for all lower case letters*/
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index = index + 1;
		}
		/**
		 *If any of these characters match before the small letter
		 * we then chage the small letter to a capital
		 */
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
		{
			str[index] = str[index] - 32;
		}

		index = index + 1;
	}

	return (str);
}
