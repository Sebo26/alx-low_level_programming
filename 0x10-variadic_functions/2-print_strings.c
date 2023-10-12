#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - The function prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

if (va_arg(ap, char*) == NULL)
{
	printf("(nil)");
}

va_start(ap, n);
for (i = 0; i < n; i++)
{
	printf("%s", va_arg(ap, char *));
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
}

va_end(ap);
printf("\n");
}
