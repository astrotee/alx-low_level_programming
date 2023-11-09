#include "main.h"

/**
 * _pow_recursion - get the value of x raised to the power of y
 * @x: nom
 * @y: power
 * Return: value of num power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
