#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
 * append_text_to_file - The function appends text at the end of a file.
 * @filename: The name of the file to be appended.
 * @text_content: a NULL terminated string to write to the file.
 * Return:1(Success) OR -1(on failure, filename is NULL, or file doesn't exist)
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor;
int write_status;
file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);

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
