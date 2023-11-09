#include "main.h"
/**
*print_triangle - just a triangle
*@size:size of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
int number1, number2;

if (size > 0)
{
for (number1 = 1; number1 <= size; number1++)
{
for (number2 = size - number1; number2 > 0; number2--)
_putchar(' ');

for (number2 = 0; number2 < number1; number2++)
_putchar('#');

if (number1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
