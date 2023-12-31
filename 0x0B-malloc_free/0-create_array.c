#include <stdlib.h>
#include "main.h"
/**
 * create_array - it creates an array of chars,
  * @size: size of the array is created
 * @c: char to array
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	*(ptr + i) = c;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
