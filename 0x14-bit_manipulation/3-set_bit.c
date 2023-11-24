/* vim: set noet:ts=8:sw=8 */
#include "main.h"

/**
 * set_bit - set an indexed bit value
 * @n: the number to use
 * @index: the index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = sizeof(n) * 8;

	if (index >= len || n == 0)
		return (-1);

	*n ^= 1 << index;

	return (1);
}

