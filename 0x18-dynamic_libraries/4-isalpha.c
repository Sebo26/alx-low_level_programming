#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if a character is a letter, upper or lower -case.
 *
 * @c: number that will be checked
 * Return: 1 (letter, lowercase or uppercase) or 0 (otherwise)
 */
int _isalpha(int c)
{
if (isalpha(c))
{
	return (1);
}
else
{
	return (0);
}
}
