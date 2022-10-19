#include <stdlib.h>
#include <stdio.h>

/**
 * main - print name of file
 * Return: 0
 * @argc: arg count
 * @argv: arg val
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i = i + 1)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
