#include "main.h"

/**
 * *_strcpy - copies the string pointed to by alx
 * to the mera
 * @mera: pointer to the buffer
 * @alx: str to be copied
 *
 * Return: the pointer to mera
 */
char *_strcpy(char *mera, char *alx)
{
	int len, i;

	len = 0;

	while (alx[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		mera[i] = alx[i];
	}
	mera[i] = '\0';

	return (mera);
}
