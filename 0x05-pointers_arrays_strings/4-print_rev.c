#include "main.h"
#include <string.h>

/**
 * print_rev - The function prints string in reverse followed by new line.
 * @s: The string that will be printed in reverse.
 */
void print_rev(char *s)
{
int i;
char temp;
int l = strlen(s);
int midpoint = l / 2;

for (i = 0; i < midpoint; i++)
{
	temp = s[i];
	s[i] = s[l - i - 1];
	s[l - i - 1] = temp;
}
_putchar('\n');
}
