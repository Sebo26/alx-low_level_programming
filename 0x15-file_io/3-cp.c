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

if (argc != 3)
{
	dprintf(2, "Usage: %s cp file_from file_to\n", argv[0]);
	exit(97);
}

p_from = open(argv[1], O_RDONLY);
if (p_from == -1)
{
	dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE%s\n", argv[1]);
	exit(98);
}

p_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (p_to == -1)
{
	dprintf(2, "Error: Can't write to NAME_OF_THE_FILE%s\n", argv[2]);
	close(p_from);
	exit(99);
}

while ((bytes_read = read(p_from, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(p_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		dprintf(2, "Error writing to file %s\n", argv[2]);
		close(p_from);
		close(p_to);
		exit(99);
	}
}
if (close(p_from) == -1 || close(p_to) == -1)
{
	dprintf(2, "Error: Can't close fd %s\n", argv[2]);
	exit(100);
}

close(p_from);
close(p_to);
return (0);
}
