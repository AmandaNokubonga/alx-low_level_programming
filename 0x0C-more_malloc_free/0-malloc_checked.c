#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - it allocates memory using malloc
 * @b: This is the size of b
 * Return: The pointer to b
 */
void *malloc_checked(unsigned int b)
{
	void *memSpace = malloc(b);

	if (memSpace == NULL)
	{
	exit(98);
	}
	return (memSpace);
}
