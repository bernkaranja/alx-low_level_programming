#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: Integer value of the bit
 * @index: Index to get the value
 * Return: Value of the bit at index, otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 64)
		return (-1);
	val = (n >> index) & 1;

	return (val);
}
