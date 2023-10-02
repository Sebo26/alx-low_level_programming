#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: The program print all the arguments it receives, one per line.
 * @argc: The number of arguments in the string.
 * @argv: The arguments in the program.
 * Return: (0)
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
