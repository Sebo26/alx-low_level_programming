#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - The function converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars.
 * Return: the converted number, or 0(there is one or more chars in the
 * string b that is not 0 or 1, or b is NULL)
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int length = 0;
unsigned int number = 0;
if (b == NULL)
{
	return (0);
}

length = strlen(b);
for (i = 0; i < length; i++)
{
	if (b[i] != '0' && b[i] != '1')
	{
		return (0);
	}
	number = (number * 2) + (b[i] - '0');
}
return (number);
}
