#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 * create_file - The function creates a file
 * @filename: The name of the file that will be created
 * @text_content: a NULL terminated string to write to the file
 * Return: -1(filename is NULL or if function fails) OR 1(Success)
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor;
int write_status;
file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (filename == NULL)
{
	return (-1);
}
if (file_descriptor == -1)
{
	return (-1);
}

if (text_content != NULL)
{
	write_status = write(file_descriptor, text_content, strlen(text_content));
	if (write_status == -1)
	{
		close(file_descriptor);
		return (-1);
	}
}
close(file_descriptor);
return (1);
}
