#include <stdio.h>
/**
*main - print even-valued terms sum of fibonacci
*suit elements
*fibonacci suit numbers
*Return: 0
*/
int main(void)
{
unsigned long n1 = 0, n2 = 1, n3 = 0, add = 0;
while (n3 <= 4000000)
{
n3 = n1 + n2;
n1 = n2;
n2 = n3;

if ((n1 % 2) == 0)
add += n1;

}
printf("%ld\n", add);
return (0);
}
