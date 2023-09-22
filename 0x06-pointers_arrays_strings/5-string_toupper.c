#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *string_toupper - The function changes all lowercase letters of a
 * string to uppercase.
 * @s: The string that will change lowercase letters to uppercase.
 * Return: s (String that will have lowercase changed into uppercase.
 */
char *string_toupper(char *s)
{
int i;
int length;
length = strlen(s);
for (i = 0; i < length; i++)
{
	if (islower(s[i]))
	{
	s[i] = toupper(s[i]);
	}
}
return (s);
}
