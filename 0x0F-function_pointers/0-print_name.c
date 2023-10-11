#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - The function prints a name.
 * @name: Name that will be printed.
 * @f: The pointer to the name function
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
}
else
{
	f(name);
}
}
