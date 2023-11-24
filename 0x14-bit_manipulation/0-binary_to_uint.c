/* vim: set noet: */
#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 * @b: the binary string
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0, count = 0;

	if (b == 0)
		return (0);
	while (*b)
	{
		ui <<= 1;
		if (*b == '1')
			ui |= 1;
		else if (*b != '0')
			return (0);
		b++;
		count++;
	}

	return (ui);
}

