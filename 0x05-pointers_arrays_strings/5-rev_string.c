#include "main.h"
#include <string.h>

/**
 * rev_string - The function reverses a string.
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int i;
int j;
char temp;
int l = strlen(s);

for (i = 0, j = l - 1; i < j; i++, j--)
{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}
}
