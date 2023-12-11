#include "main.h"
#include <stdio.h>
/**
 * _puts - The function prints a string followed by a new line to the
 * standard output.
 * @str: The string that will be on the standard output
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
