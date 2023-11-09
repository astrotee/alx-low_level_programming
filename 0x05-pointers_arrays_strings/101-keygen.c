#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating random valid
 * passwords for the program 101-crackme
 * Return: zero
 */
int main(void)
{
	int randpass[100];
	int j, sum, m;

	sum = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		randpass[j] = rand() % 78;
		sum += (randpass[j] + '0');
		putchar(randpass[j] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}

