#include <stdio.h>
#include <stdlib.h>
/**
 * is_Int - checks if *s is an int
 * @s: check string
 * Return: 0 or 1
 */
int is_Int(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: arg const
 * @argv: arg var
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (is_Int(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%i\n", sum);

	return (0);
}
