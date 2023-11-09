#include <stdio.h>

/**
 * main - base 16 in lowercase.
 *
 * Return: zero.
 */
int main(void)
{
	int n;
	char mychar;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (mychar = 'a'; mychar <= 'f'; mychar++)
		putchar(mychar);

	putchar('\n');

	return (0);
}
