#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: The string that will have every other character printed
 */
void puts2(char *str)
{
int i;
int l = strlen(str);
for (i = 0; i <= l; i += 2)
{
_putchar(str[i]);
}
}
