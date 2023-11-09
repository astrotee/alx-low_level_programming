#include <stdio.h>

/**
 * main - combinations of three digits,separated by a comma then space.
 *
 * Return: zero.
 */
int main(void)
{
	int mynum1, mynum2, mynum3;

	for (mynum1 = 0; mynum1 < 8; mynum1++)
	{
		for (mynum2 = mynum1 + 1; mynum2 < 9; mynum2++)
		{
			for (mynum3 = mynum2 + 1; mynum3 < 10; mynum3++)
			{
				putchar((mynum1 % 10) + '0');
				putchar((mynum2 % 10) + '0');
				putchar((mynum3 % 10) + '0');

				if (mynum1 == 7 && mynum2 == 8 && mynum3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
