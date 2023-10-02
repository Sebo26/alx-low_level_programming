#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program print its name, followed by a new line.
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return 0;
}
