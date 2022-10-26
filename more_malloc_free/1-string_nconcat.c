#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenate two strings
 * @s1:"Best "
 * @s2:"School !!!"
 * @n: value of 6
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1 = 0, str2 = 0, str2_n = 0, i = 0;
	char *comp_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str1])/*store "Best ""*/
		str1 = str1 + 1;

	while (s2[str2])/*store "School !!!"*/
		str2 = str2 + 1;

	if (n >= str2)
		str2_n = str1 + str2;/*Use entire string*/
	else
		str2_n = str1 + n; /*assign 5+6 to str2_n*/

	/*allocate 11 bytes in area of memory*/
	comp_string = malloc(sizeof(char) * str2_n + 1);
	if (comp_string == NULL)
		return (NULL);

	str2 = 0;/*set to 0 as we have to itterate it in loop*/
	while (i < str2_n)
	{
		/*storing "Best " in comp_string*/
		if (i <= str1)
			comp_string[i] = s1[i];
		/*storing School in comp_string*/
		if (i >= str1)
		{
			comp_string[i] = s2[str2];
			str2 = str2 + 1;
		}
		i = i + 1;
	}
	comp_string[i] = '\0';
	return (comp_string);
}
