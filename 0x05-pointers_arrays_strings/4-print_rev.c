#include "main.h"
#include <string.h>

/**
 * print_rev - The function prints string in reverse followed by new line.
 * @s: The string that will be printed in reverse.
 */
void print_rev(char *s)
{
int i;
int l = strlen(s);

for (i = l - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
