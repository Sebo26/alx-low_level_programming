#include "main.h"
#include <stdlib.h>

/**
 * set_bit - The function sets the value of a bit to 1 at a given index.
 * @n: The binary number that will be looked at.
 * @index: The position to be looked.
 * Returns: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (n[index]
