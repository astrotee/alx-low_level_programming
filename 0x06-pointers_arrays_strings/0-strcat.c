#include "main.h"
/**
 * _strcat - concatenat two strings
 * @dest: first str
 * @src: second str
 *
 * Return: concatented string
 */
char *_strcat(char *dest, char *src)
{
	int c1;
	int j;

	c1 = 0;
	while (dest[c1] != '\0')
	{
		c1++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[c1] = src[j];
		c1++;
		j++;
	}

	dest[c1] = '\0';
	return (dest);
}
