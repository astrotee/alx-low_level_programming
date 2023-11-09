#include "main.h"
/**
*_islower -function takes a char and return output if lower or not.
*@c: the char that we want to test
*Return: 1 or 0 dependes lower or not
*/
int _islower(int c)
{
if (c > 97 && c < 123)
return (1);
else
return (0);
}
