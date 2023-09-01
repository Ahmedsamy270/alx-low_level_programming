#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiply of 2 numbers
 * @argc: the number of argument
 * @argv: the number of array
 * Return: 1-Erorr , 0-Success
 **/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Erorr\n");
		return (1);
	}
	return (0);
}
