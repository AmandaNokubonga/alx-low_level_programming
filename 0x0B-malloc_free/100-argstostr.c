#include <stdlib.h>
#include "main.h"
/**
 * argstostr - This function concatenates
 *	all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *	or it fails
 */
char *argstostr(int ac, char **av)
{
	int o, n, len, bufferlen;
	char *result;

	if (ac == 0 || av == NULL)
	return (NULL);

	len = bufferlen = 0;
	for (o = 0; av[o]; o++)
	{
	for (n = 0; av[o][n]; n++)
	len++;
	}

	result = (char *)malloc(len + ac + 1);
	if (result == NULL)
	return (NULL);

	bufferlen = 0;
	for (o = 0; av[o]; o++)
	{
	for (n = 0; av[o][n]; n++)
	result[bufferlen++] = av[o][n];
	result[bufferlen++] = '\n';
	}
	result[bufferlen] = '\0';

	return (result);
}
