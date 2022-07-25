#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the argument of your program
 * @ac: argument count
 * @av: array of strings
 *
 * Return: pointer to a new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k, total_len;
char *p;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j] != '\0'; j++)
total_len++;

p = (char *)malloc(sizeof(char) * (total_len + ac + 1));

if (p == NULL)
{
return (NULL);
}

for (i = 0, k = 0; k < total_len + ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
p[k] = av[i][j];
}
p[k] = '\n';
k++;
}
p[k] = '\0';
return (p);
}
