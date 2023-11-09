#include "main.h"

/**
 * _strlen - function that returns the length of a str
 * @s: this is the input str
 * Return: Length of str
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
