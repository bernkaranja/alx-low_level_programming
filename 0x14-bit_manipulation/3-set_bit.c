#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: Pointer to a bit value
 * @index: Index of the bit to set
 * Return: 1 for success, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val = sizeof(unsigned long int);

	if (index >= (val * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
