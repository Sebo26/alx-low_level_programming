#include "main.h"
#include <string.h>

/**
 * *_strchr - The function locates a character in a string.
 * @s: The string that will be checked for a certain character.
 * @c: The character that will be located.
 * Return: c (first occurrence of the character) or NULL(if character is found)
 */
char *_strchr(char *s, char c)
{
char *result = strchr(s, c);
if (result != NULL)
{
	return (result);
}
else
{
	return (NULL);
}
}
