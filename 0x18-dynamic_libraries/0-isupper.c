#include "main.h"
#include <ctype.h>

/**
 * _isupper - The function checks for uppercase characters.
 *
 * @c: Character to be checked
 * Return: 1 (uppercase) and 0 (otherwise)
 */
int _isupper(int c)
{
if (isupper(c))
{
	return (1);
}
else
{
	return (0);
}
}
