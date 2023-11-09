#include "main.h"
/**
 * _strcmp - compare string val
 * @s1: inp1
 * @s2: inp2
 *
 * Return: compare betwwen them
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
