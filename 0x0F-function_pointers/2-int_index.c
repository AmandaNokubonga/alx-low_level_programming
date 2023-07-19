#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size is the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]))
		{
			return (u);
		}
	}

	return (-1);
}
