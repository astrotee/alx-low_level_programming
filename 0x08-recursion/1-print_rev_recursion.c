#include "main.h"

/**
 * _print_rev_recursion - printing a strr in reverse
 * @s: strr ptrr
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
