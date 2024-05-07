#include "search_algos.h"
#include <stdio.h>

/**
* linear_search - do a linear search on array
* @array: a pointer to the array
* @size: the size of the array
* @value: the value to search for
* Return: the index or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int) size; array++, i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
	}

	return (-1);
}
