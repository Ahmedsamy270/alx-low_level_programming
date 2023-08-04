#include "main.h"

/**
* _isdigit - checking if the number from 0 to 9
* @c: is annumber to check
* Return: 1 for numbers or 0 for else
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
