#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - The function reads a text file and prints it to the POSIX
 * standard output.
 * @filename: the name of the file to be read and printed
 * @letters: The number of letters in the file
 * Return: 0 (if file cannot open or read, filename is NULL, or write fail
 * or doesn't write the correct letters) OR the number of characters printed.
 */
size_t read_textfile(const char *filename, size_t letters)
{
char c;
FILE *file_pointer;
file_pointer = fopen(filename, "r");

if (filename == NULL)
{
	return (0);
}

if (file_pointer == NULL)
{
	return (0);
}

while ((c = fgetc(file_pointer)) != EOF && letters > 0)
{       
	_putchar(c);
	letters--;
}
fclose(file_pointer);
return((letters == 0) ? 0 : letters);
}
