#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters 10 times followed by a new line.
*Return: void
*/
void print_alphabet_x10(void)
{
int i = 0;
char a = 'a';
for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar(10);
}
}
