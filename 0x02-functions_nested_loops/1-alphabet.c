#include "main.h"
/**
*print_alphabet - print alphabets in lowercase followed by a new line
*Return: void
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar(10);
}
