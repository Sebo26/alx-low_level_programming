#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * Description - The program copies the content of a file to another file.
 * @argc: The number of arguments in the program.
 * @argv: The arguments in the program.
 */
int main(int argc, char *argv[])
{
int p_from;
int p_to;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
const char *file_from = "source_file.txt";
const char *file_to = "destination_file.txt";

if (argc != 3)
{
	printf("Usage: cp file_from file_to");
	exit (97);
}

p_from = open(file_from, O_RDONLY);
if (p_from == NULL)
{
	dprintf("%s\n", Error: Can't read from file NAME_OF_THE_FILE);
	exit (98);
}

p_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (p_to == NULL)
{
	dprintf("%s\n", Error: Can't write to NAME_OF_THE_FILE);
	exit (99);
}

while ((bytes_read = read(p_from, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(p_to, buffer, bytes_read);
}

if (close(p_from) == || close(p_to))
{
	dprintf("%s\n", Error: Can't close fd FD_VALUE);
	exit(100);
}

close(p_from);
close(p_to);
return (0);
}
