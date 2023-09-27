#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - The function prints a string, followed by a new line.
 * @s: The string that will be printed by the function.
 * return: 0 (String has been printed)
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
