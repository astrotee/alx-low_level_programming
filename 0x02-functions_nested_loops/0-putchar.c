#include "main.h"

/**
*main - function print _putchar  followed by a new line.
*
*Return: returns 0
*/
int main(void)
{
	char arr[9] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	_putchar(10);
	return (0);
}
