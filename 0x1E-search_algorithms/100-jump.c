#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * min_int - get the minimum of two ints
 * @a: the first int
 * @b: the second int
 * Return: the minimum of the two
 */
int min_int(int a, int b)
{
	return ((b > a) ?  a : b);
}

/**
* jump_search - do a jump search on array
* @array: a pointer to the array
* @size: the size of the array
* @value: the value to search for
* Return: the index or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	int a = 0, b = 1, e = min_int(b, (int) size) - 1;

	if (array == NULL)
		return (-1);

	for (; array[e] < value; b += sqrt(size), e = min_int(b, (int) size) - 1)
	{
		printf("Value checked array[%d] = [%d]\n", e, array[e]);
		a = b - 1;
		if (a + 1 >= (int) size)
		{
			b += sqrt(size);
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", a, b - 1);

	for (; array[a] < value; a++)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (a == e)
			return (-1);
	}

	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		return (a);
	}

	return (-1);
}
