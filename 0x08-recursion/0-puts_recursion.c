#include "main.h"

/**
 * _puts_recursion - The function prints a string, followed by a new line.
 * @s: The string that will be printed by the function.
 * Return: 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
