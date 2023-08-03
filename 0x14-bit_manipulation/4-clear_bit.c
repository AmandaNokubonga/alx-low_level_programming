#include <stdio.h>

/**
 * clear_bit - function that gives value of bit to 0 at a given index
 * @n: pointer to number to change
 * @index: clear bit at given index to 0
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
