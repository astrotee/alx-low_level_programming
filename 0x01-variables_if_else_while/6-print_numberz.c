#include <stdio.h>

/**
 * main - printing numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: 0.
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');

	putchar('\n');

	return (0);
}
