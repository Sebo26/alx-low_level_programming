#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - The function returns the length of the string.
 * @s: The string that will have its length returned.
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return (0);
}
return (1 + _strlen_recursion(s + 1));
}
