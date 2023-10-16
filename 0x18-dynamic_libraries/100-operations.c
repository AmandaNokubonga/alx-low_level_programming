#include "main.h"

/**
 * _realloc - resizes a memory block.
 * @ptr: pointer to memory to resize.
 * @old_size: size in bytes of the old memory block.
 * @new_size: size in bytes of the new memory block.
 *
 * Returns: NULL if new_size = 0 and ptr is not NULL, otherwise a pointer to the
 * newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
