#include "main.h"

/**
  * print_number - print num of chars
  * @n: input
  * Return: 0
 **/

void print_number(int n)
{
	unsigned int numb;

	numb = n;

	if (n < 0)
	{
		_putchar('-');
		numb = -n;
	}

	if (numb / 10 != 0)
	{
		print_number(numb / 10);
	}
	_putchar((numb % 10) + '0');
}
