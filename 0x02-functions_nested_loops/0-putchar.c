#include <stdio.h>

/**
 * function_putchar - Prints "_putchar" followed by a new line.
 *
 * Description: This function prints the string "_putchar" followed by
 * a new line character to the standard output.
 */
void function_putchar(void)
{
	printf("_putchar\n");
}

/**
 * main - Entry point
 *
 * Description: This is the main function that calls function_putchar
 * to print "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	function_putchar();

	return (0);
}
