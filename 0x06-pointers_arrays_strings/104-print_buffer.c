#include "main.h"
#include <stdio.h>

/**
 * print_buffer - printing the  buff
 * @b:the  buf
 * @size: the size of buff
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int overflow, j, i;

	overflow = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (overflow < size)
	{
		j = size - overflow < 10 ? size - overflow : 10;
		printf("%08x: ", overflow);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + overflow + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + overflow + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		overflow += 10;
	}
}
