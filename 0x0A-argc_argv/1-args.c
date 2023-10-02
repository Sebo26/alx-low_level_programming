#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the number of arguments passed in the program.
 * @argc: The number of arguments in program.
 * @argv: The content of the program (unused)
 * Return: 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
