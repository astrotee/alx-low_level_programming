#include "main.h"
/**
*print_last_digit - printing last digit of a number.
*@n: number to input
*Return:  the value of last digit.
*/
int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (lastdigit);
}
