#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @m: string to be printed
 */
void print_rev(char *m)
{
	int h, n, l;

	h = 0;

	while (m[h] != '\0')
	{
		h++;
	}

	l = h;

	for (n = l - 1; n >= 0; n--)
	{
		_putchar(m[n]);
	}

	_putchar('\n');
}
