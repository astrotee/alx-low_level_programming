#include "main.h"
/**
*jack_bauer - printing every minutes of the day.
*
*Return: 0.
*/
void jack_bauer(void)
{
int i, j;
for (j = 0; j <= 23; j++)
{
for (i = 0; i <= 59; i++)
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar(':');
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(10);
}
}

}
