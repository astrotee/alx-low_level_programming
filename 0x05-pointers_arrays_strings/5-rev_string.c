#include "main.h"

/**
 * rev_string - reverse a string
 * @m: str to be reversed
 */
void rev_string(char *m)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (m[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = m[i];
		m[i] = m[len1];
		m[len1--] = tmp;
	}
}
