/* vim: set noet:ts=8:sw=8 */
#include "main.h"

/**
 * print_binary - print the binary repr
 * @n: the number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int count = (sizeof(n) * 8) - 1;
	short msb = 0;
	short bit = 0;

	while (~count)
	{
		bit = (n & (1UL << count)) ? 1 : 0;
		msb |= bit;
		if (msb || count == 0)
			_putchar(bit + '0');
		count--;
	}

}

