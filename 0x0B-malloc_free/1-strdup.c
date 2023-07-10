#include "main.h"
#include <stdlib.h>

/**
 * _strdup - it has copied the new memory
 * @str: The string to duplicate
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	return (NULL);

	for (; str[len]; len++)
	{

	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	return (NULL);

	for (; (duplicate[i] = str[i]) != '\0'; i++)
	{

	}

	return (duplicate);
}
