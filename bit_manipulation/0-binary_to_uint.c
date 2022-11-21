#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to char
 * Return: converted value or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_val = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		converted_val = 2 * converted_val + (b[i] - '0');
		i = i + 1;
	}
	return (converted_val);
}
