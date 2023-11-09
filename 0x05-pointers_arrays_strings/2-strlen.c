#include "main.h"

/**
 * _strlen - fuction that return length of a string
 * @m: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *m)
{
	int h;

	h = 0;

	while (m[h] != '\0')
	{
		h++;
	}

	return (h);
}
