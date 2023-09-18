#include "main.h"

/**
 * swap_int - The function will swap the values of two integers.
 * @a: integer value to be swapped with b
 * @b: integer value to be swapped with a
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = *a;

return (0);
}
