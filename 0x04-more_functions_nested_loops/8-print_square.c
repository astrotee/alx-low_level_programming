#include "main.h"
/**
*print_square - squares with #
*@size: size of squares
*Return:returns void
*/
void print_square(int size)
{
int l1, l2;
if (size > 0)
{
for (l1 = 0; l1 < size; l1++)
{
for (l2 = 0; l2 < (size - 1); l2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
