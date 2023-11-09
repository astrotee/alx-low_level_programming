#include "main.h"

/**
 * puts2 - one char out of 2 of a string
 * @mera: string to print the chars from
 */
void puts2(char *mera)
{
	int len, i;

	len = 0;

	while (mera[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(mera[i]);
	}

	_putchar('\n');
}
