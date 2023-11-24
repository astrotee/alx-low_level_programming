/* vim: set noet:ts=8:sw=8 */
#include "main.h"

/**
 * flip_bits - get the num of diff bits
 * @n: the 1st number
 * @m: the 2nd number
 * Return: return the num of diff bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 0;
	unsigned int len = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int diff = n ^ m;

	while (~len)
	{
		if (diff & (1UL << len))
			num++;
		len--;
	}

	return (num);
}

