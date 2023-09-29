#include "main.h"
#include <string.h>

/**
 * *_strstr - The function locates a substring.
 * @haystack: The string that will be searched for a substring.
 * @needle: The substring that will be located.
 * Return: Result (pointer to the beginning of the located substring)
 * or NULL (substring not found)
 */
char *_strstr(char *haystack, char *needle)
{
char *result = strstr(haystack, needle);
if (result != NULL)
{
	return (result);
}
else
{
	return (NULL);
}
}
