#include "main.h"
#include <string.h>

/**
 * _strspn - The function gets the length of a prefix substring.
 * @s: The string that will have the length of the prefix determined.
 * @accept: The length of the prefix.
 * Return: length (the length of prefix from s)
 */
unsigned int _strspn(char *s, char *accept)
{
int length = strspn(s, accept);

return (length);
}
