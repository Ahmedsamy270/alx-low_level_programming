#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*Description: print alohabet in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 122;
while (n >= 97)
{
	putchar(n);
	n--; }
	putchar('\n');
return (0);
}
