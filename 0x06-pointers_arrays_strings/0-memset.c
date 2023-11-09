#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: starting address of memoryy
 * @b: constant byte
 * @n:  bytes of memory to be changed
 *
 * Return: pointer to memmory
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
