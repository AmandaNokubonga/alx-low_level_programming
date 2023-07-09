#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the program that take in numbers.
 * @argc: The number of the arguments.
 * @argv: The array that rguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int u, h, sum = 0;

	for (u = 1; u < argc; u++)
	{
		for (h = 0; argv[u][h] != '\0'; h++)
		{
			if (!isdigit(argv[u][h]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[u]);
	}
	printf("%d\n", sum);
	return (0);
}
