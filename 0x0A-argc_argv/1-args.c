#include <stdio.h>

/**
 * main - it prints the number of arguments passed to the program
 * @argc: there are  number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))

{
	printf("%d\n", argc - 1);

	return (0);
}