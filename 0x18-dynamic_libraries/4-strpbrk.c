#include "main.h"
#include <string.h>

/**
 * *_strpbrk - The function searches a string for any of a set of bytes.
 * @s: The string that will be searched for the occurrence of a set of bytes.
 * @accept: The set of bytes that will be searched for in s.
 * Return: Match (where there is an occurrence of accept) or
 * NULL (no occurrence)
 */
char *_strpbrk(char *s, char *accept)
{
char *match = strpbrk(s, accept);
if (match != NULL)
{
	return (match);
}
else
{
	return (NULL);
}
}
