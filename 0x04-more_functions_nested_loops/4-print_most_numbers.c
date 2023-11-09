#include "main.h"
/**
*print_most_numbers - from 0 to 9 except 2 and 4
*
*Return: void
*/
void print_most_numbers(void)
{
int m;
for (m = 48; m < 58; m++)
{
if ((m == 50) || (m == 52))
continue;

_putchar(m);
}
_putchar(10);
}
