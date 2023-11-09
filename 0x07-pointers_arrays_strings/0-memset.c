#include "main.h"
/**
 * _memset - fill a blocck of memory
 * @s: starting addres of memory
 * @b: the desired valuee
 * @n: member of bytes too be changed
 *
 * Return: Always value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

