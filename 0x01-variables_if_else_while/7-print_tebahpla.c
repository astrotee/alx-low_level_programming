#include <stdio.h>

/**
 * main - lowercase alphabet in reverse.
 *
 * Return: always 0.
 */
int main(void)
{
	char mychr;

	for (mychr = 'z'; mychr >= 'a'; mychr--)
		putchar(mychr);

	putchar('\n');

	return (0);
}
