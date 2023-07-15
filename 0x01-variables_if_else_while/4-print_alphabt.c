#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*Description: alphabet except for q and e
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
	if (n == 101 || n == 113)
{n++;
continue; }
putchar(n);
n++; }
putchar('\n');
return (0);
}
