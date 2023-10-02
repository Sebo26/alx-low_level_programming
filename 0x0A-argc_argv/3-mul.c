#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: The program multiplies two numbers
 * @argc: The number of arguments in the program
 * @argv: The arguments stored in the program
 * Return: 0 (Success) and 1 (Error)
 */
int main(int argc, char **argv)
{
int multiplication;
if (argc == 3)
{
	multiplication = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiplication);
}
else if (argc < 3)
{
	printf("Error\n");
	return (1);
}
return (0);
}
