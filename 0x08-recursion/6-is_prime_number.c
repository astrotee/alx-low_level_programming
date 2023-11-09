#include "main.h"

/**
 * is_primt_number2 - internal func to check
 * @num: nom
 * @i: the iterator
 * Return: 1 or 0
 */
int is_primt_number2(int num, int i)
{
	if (i == 1)
		return (1);
	if (num % i == 0 && i > 0)
		return (0);
	return (is_primt_number2(num, i - 1));
}

/**
 * is_prime_number - check primiaty
 * @n: number to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_primt_number2(n, n / 2));
}
