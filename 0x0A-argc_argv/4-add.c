#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: 0 upon success, 1 if number contains non-digit symbols
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	if (argc == 1)
{
	printf("0\n");
	return (0);
}

	sum = 0;
	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
{
	if (!isdigit(argv[i][j]))
{
	printf("Error\n");
	return (1);
}
}
	sum += atoi(argv[i]);
}
	printf("%d\n", sum);
	return (0);
}
