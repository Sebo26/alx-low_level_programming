#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - The function prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

if (separator == NULL)
{
}

va_start(ap, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(ap, int));
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
}
va_end(ap);
printf("\n");
}
