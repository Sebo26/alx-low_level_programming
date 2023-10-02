#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: The program print its name, followed by a new line.
 * @argc: The number of arguments.
 * @argv: The string that will be printed.
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);
	return 0;
}
