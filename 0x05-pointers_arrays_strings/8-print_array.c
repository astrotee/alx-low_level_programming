#include "main.h"
#include <stdio.h>

/**
 * print_array - print k elements of an array
 * @m: array to be printed
 * @k: number of elements to print
 */
void print_array(int *m, int k)
{
	int i;

	for (i = 0; i < k; i++)
	{
		if (i == 0)
			printf("%d", m[i]);
		else
			printf(", %d", m[i]);
	}
		printf("\n");
}
