#include "main.h"
#include <ctype.h>

/**
 * _islower - It checks for lowercase characters.
 *
 * @c: character being checked.
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
if (islower(c))
{
	return (1);
}
else
{
	return (0);
}
}
