#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @x: pointer to first int
 * @y: pointer to second int
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
