#include "main.h"
/**
*_isdigit - is a digit or not
*@c: inout char
*Return: returns 1 if it is uppercase or 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
