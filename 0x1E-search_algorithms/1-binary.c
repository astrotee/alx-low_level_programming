#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - do a binary search on array
* @array: a pointer to the array
* @size: the size of the array
* @value: the value to search for
* Return: the index or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_divide(array, 0, size, value));
}

/**
* binary_divide - do a recursice divide and conquer lookup
* @array: a pointer to the array
* @start: the start index
* @end: the end index
* @value: the value to search for
* Return: the index or -1 if not found
*/
int binary_divide(int *array, size_t start, size_t end, int value)
{
	int i, mid;

	mid = start + ((end - start + 1) / 2) - 1;
	if (start > end || mid < (int)start)
		return (-1);
	printf("Searching in array:");
	for (i = start; i < (int) end; i++)
	{
		printf(" %d", i);
		if (i < (int) end - 1)
			printf(",");
		else
			printf("\n");
	}
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_divide(array, start, mid, value));
	else
		return (binary_divide(array, mid + 1, end, value));
}
