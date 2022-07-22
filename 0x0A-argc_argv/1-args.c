#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: The number of arguments supplied.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
