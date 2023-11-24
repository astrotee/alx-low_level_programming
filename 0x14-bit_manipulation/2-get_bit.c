/* vim: set noet:ts=8:sw=8 */
#include "main.h"

/**
 * get_bit - return an indexed bit value
 * @n: the number to use
 * @index: the index of the bit
 * Return: the bit value or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	short bit;
	unsigned int len = sizeof(n) * 8;

	if (index >= len)
		return (-1);

	bit = (n & (1 << index)) ? 1 : 0;

	return (bit);
}

