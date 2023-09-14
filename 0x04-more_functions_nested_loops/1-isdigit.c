#include "main.h"

/**
 * _isdigit - The function checks for digits from 0 to 9
 *
 * @c: It will be checked if it is a digit or not.
 * Return: 1 (if it is a digit) or 0(Otherwise)
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
	return (1);
}
else
{
	return (0);
}
}
