#include "main.h"

/**
 * puts_half - print half of a string
 * @mera: mera to be printed
 */
void puts_half(char *mera)
{
	int len, n, i;

	len = 0;

	while (mera[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; mera[i] != '\0'; i++)
		{
			_putchar(mera[i]);
		}
	} else
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(mera[n + 1]);
		}
	}
	_putchar('\n');
}
