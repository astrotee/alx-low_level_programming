#include "main.h"
/**
 * reverse_array - reversing array of ints
 * @a: the array
 * @n: number of elements of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
