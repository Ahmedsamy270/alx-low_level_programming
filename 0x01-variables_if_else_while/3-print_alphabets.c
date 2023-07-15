#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*Description:alphABET
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 97;
int m = 68;
while (n <= 122)
{putchar(n);
n++; }
while (m <= 90)
{putchar(m);
m++; }
putchar('\n');
return (0);
}
