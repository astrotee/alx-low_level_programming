/* vim: set noet:ts=8:sw=8 */
#include "main.h"

/**
 * clear_bit - clear an indexed bit value
 * @n: the number to use
 * @index: the index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = sizeof(n) * 8;
	unsigned long int mask = -1;

	if (index >= len || n == 0)
		return (-1);

	mask ^= 1UL << index;

	*n &= mask;

	return (1);
}

