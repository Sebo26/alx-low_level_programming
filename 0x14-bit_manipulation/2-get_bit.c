#include <stdio.h>
#include "main.h"

/**
 * get_bit - The function returns the value of a bit at a given index.
 * @n: The binary that will be looked at.
 * @index: The position at which the binary will be looked at.
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
if (index >= (sizeof(unsigned long int) * 8))
{
	return (-1);
}

mask = 1UL << index;
if ((n & mask) == mask)
{
	return (1);
}
else
{
	return (0);
}
}
