#include <stdio.h>
/**
*main - printing first 98
*fibonacci numbers start with 1 and 2.
*Return: 0.
*/
int main(void)
{
int inc;
unsigned long n1 = 0, n2 = 1, n3;
unsigned long m1, m2, m3, m4;
unsigned long j1, j2;

for (inc = 0; inc < 92; inc++)
{
n3 = n1 + n2;
printf("%lu, ", n3);
n1 = n2;
n2 = n3;
}

m1 = n1 / 10000000000;
m3 = n2 / 10000000000;
m2 = n1 % 10000000000;
m4 = n2 % 10000000000;

for (inc = 93; inc < 99; inc++)
{
j1 = m1 + m3;
j2 = m2 + m4;

if ((m2 + m4) > 9999999999)
{
j1 += 1;
j2 %= 10000000000;
}

printf("%lu%lu", j1, j2);
if (inc != 98)
printf(", ");
m1 = m3;
m2 = m4;
m3 = j1;
m4 = j2;
}
printf("\n");
return (0);
}
