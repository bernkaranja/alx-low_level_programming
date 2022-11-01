#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: First integer number
 * @m: Second integer number
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bits++;
		n >>= 1;
		m >>= 1;
	}
	return (bits);
}
