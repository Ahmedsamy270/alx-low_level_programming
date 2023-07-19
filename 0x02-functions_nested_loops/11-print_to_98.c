#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* print_to_98- print n to 98 counts seperated by comma,
* followed by space and number should be printed
* @n: is an input
*/
void print_to_98(int n)
{
int count;
if (n > 98)
for (count = n; count > 98; count--)
	printf("%d, ", count);
else
for (count = n; count < 98; count++)
	printf("%d, ", count);
printf("98\n");
}
