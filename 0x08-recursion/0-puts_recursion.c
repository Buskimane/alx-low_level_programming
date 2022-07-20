#include "main.h"

/**
 * _puts_recursion - this is a function to print a string.
 *  * @s: The string parameter to be printed.
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}

else
_putchar('\n');
}
