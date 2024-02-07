#include "search_algos.h"

/**
 * linear_search - Linear search for a number in an array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    int i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%i] = [%i]\n", i, *(array + i));
        if (*(array + i) == value)
            return (i);
    }

    return (-1);
}
