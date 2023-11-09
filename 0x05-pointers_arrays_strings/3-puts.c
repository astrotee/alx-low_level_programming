#include "main.h"

/**
 * _puts - pur string followed by new line.
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
