#include "main.h"
/**
*print_diagonal - a diagonal
*@n:count of lines
*Return:returns void
*/
void print_diagonal(int n)
{
int l1, l2;
if (n > 0)
{
for (l1 = 0; l1 < n; l1++)
{
for (l2 = 0; l2 < l1; l2++)
_putchar(' ');

_putchar('\\');

if (l1 == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
