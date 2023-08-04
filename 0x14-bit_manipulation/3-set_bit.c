#include <stdio.h>

/**
 * set_bit - gives a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit is given to 1
 * Return: return 1 shows success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}