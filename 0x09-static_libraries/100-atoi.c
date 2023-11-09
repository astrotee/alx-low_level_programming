#include "main.h"

/**
 * _atoi - A string to an int
 * @m: string to be converted
 * Return: int converted from the string
 */
int _atoi(char *m)
{
	int j, sign, n, len, h, digit;

	j = sign = n = h = len = digit = 0;

	while (m[len] != '\0')
		len++;

	while (j < len && h == 0)
	{
		if (m[j] == '-')
			++sign;

		if (m[j] >= '0' && m[j] <= '9')
		{
			digit = m[j] - '0';
			if (sign % 2)
				digit = -digit;
			n = n * 10 + digit;
			h = 1;
			if (m[j + 1] < '0' || m[j + 1] > '9')
				break;
			h = 0;
		}		j++;
	}

	if (h == 0)
		return (0);

	return (n);
}
