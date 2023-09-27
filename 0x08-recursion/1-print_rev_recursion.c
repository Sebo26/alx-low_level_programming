#include "main.h"

/**
 * _print_rev_recursion - the function prints a string in reverse.
 * @s: the string that will be printed in reverse.
 * Return: 0 (when the first letter of original string is printed)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
	return;
}
_print_rev_recursion(s - 1);
_putchar(*s);
}
