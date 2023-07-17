#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * The main function prints the name of the file
 * it was compiled from using the __FILE__ macro.
 * It expands to a string literal containing the current source file name.
 * output, followed by a new line character. It then returns 0 to indicate a
 * successful execution.
 *
 * Return: 0(success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
