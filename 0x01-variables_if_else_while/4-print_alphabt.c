#include <stdio.h>

/**
 * main - print all alphabet in lowercase except q, e.
 * Return: 0.
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == 'e' || m == 'q')
			continue;
		putchar(m);
	}

	putchar('\n');

	return (0);
}
