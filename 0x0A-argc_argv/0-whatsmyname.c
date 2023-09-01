#include <stdio.h>

/**
 * main - prints the proggram`s name
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
