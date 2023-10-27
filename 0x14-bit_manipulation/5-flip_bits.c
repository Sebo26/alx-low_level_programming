#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - The function returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: The first number of bits.
 * @m: The number of bits that will be compared to the first.
 * Return: The number of changes that need to be made for digits to be the same
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned int diff;
diff = 0;
result = n ^ m;

while (result > 0)
{
	diff += result & 1;
	result >>= 1;
}
return (diff);
}
