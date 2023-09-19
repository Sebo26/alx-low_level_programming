#include "main.h"
#include <string.h>

/**
 * puts_half - The function prints the second half of the string
 * @str: The function that will have its second half printed
 */
void puts_half(char *str)
{
int i;
int l = strlen(str);
int midpoint = l / 2;

for (i = midpoint; i <= l; i++)
{
	_putchar(str[i]);
	if (l % 2 != 0)
	{
		_putchar(str[i + 1]);
	}
}
}
