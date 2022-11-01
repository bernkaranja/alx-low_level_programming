#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: Pointer to a bit value
 * @index: Index of the bit to set
 * Return: 1 for success, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
		return (-1);
	val = 1 << index;

	if (*n & val)
		*n ^= val;
	return (1);
}
