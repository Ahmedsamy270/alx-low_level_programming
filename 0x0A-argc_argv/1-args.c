#include <stdio.h>

/**
 * main - prints the proggram`s name
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
