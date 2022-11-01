#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int val = 1;
	char *end = (char *) &val;

	if (*end == 1)
		return (1);
	return (0);
}
