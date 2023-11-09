#include <stdio.h>
/**
*main - prints fizz or buzz or fizzBuzz
*
*
*Return: 0
*/
int main(void)
{
int n;
while (n++ < 100)

if ((n % 3 == 0) && (n % 5 == 0))
printf("FizzBuzz ");

else if ((n % 3) == 0)
printf("Fizz ");

else if ((n % 5) == 0)
{
if (n != 100)
printf("Buzz ");

else
printf("Buzz");
}
else
printf("%d ", n);

printf("\n");
return (0);
}
