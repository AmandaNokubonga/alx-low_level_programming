#include <stdio.h>

/**
 * get_bit - function prints the binary representation of number.
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the of value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
