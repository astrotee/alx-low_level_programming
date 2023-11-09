#include <stdio.h>
#include <stdlib.h>

/**
 * main - print out the change that needs to given
 * @argc: args count
 * @argv: agrgs
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int t, c;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	for (t = 0; c > 0; t++)
	{
		if (c - 25 >= 0)
			c = c - 25;
		else if (c - 10 >= 0)
			c = c - 10;
		else if (c - 5 >= 0)
			c = c - 5;
		else if (c - 2 >= 0)
			c = c - 2;
		else if (c - 1 >= 0)
			c = c - 1;
	}
	printf("%d\n", t);
	return (0);
}
