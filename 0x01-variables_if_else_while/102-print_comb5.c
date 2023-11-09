#include <stdio.h>

/**
 * main - combinations of two two-digit from 0-99.
 *
 * Return: 0.
 */
int main(void)
{
	int mynum1, mynum2;

	for (mynum1 = 0; mynum1 <= 98; mynum1++)
	{
		for (mynum2 = mynum1 + 1; mynum2 <= 99; mynum2++)
		{
			putchar((mynum1 / 10) + '0');
			putchar((mynum1 % 10) + '0');
			putchar(' ');
			putchar((mynum2 / 10) + '0');
			putchar((mynum2 % 10) + '0');

			if (mynum1 == 98 && mynum2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
