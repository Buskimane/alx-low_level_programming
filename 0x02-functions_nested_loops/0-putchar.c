#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l[] = {"Holberton"};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(l[i]);
	}
	_putchar('\n');

	return (0);
}
