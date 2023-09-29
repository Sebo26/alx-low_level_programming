#include "main.h"

/**
 * wildcmp - The function compares two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: 1 (identical strings), otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == *s2 || *s2 == '*' || (*s1 + 1) == (*s2 + 1))
{
	return (1);
}
else
{
	return (0);
}
}
