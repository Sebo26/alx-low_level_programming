#include "main.h"
#include <string.h>

/**
 * is_palindrome - The function checks if a string is a palindrome.
 * @s: The string that will be checked.
 * Return: 1 (it is a palindrome) and 0 (it is not)
 */
int is_palindrome(char *s)
{
if ((*s + 1) != (*s - 1))
{
	return (1);
}
else
{
	return (0);
}
}
