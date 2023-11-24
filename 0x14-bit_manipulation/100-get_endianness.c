/* vim: set noet:ts=8:sw=8 */
#include "main.h"

/**
 * get_endianness - get the endianness
 * Return: 1 for  little endian and 0 for big endian
 */
int get_endianness(void)
{
	int x = 1;

	return (*(char *)&x);
}

