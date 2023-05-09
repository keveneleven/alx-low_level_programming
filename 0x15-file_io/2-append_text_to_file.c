#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: null terminated string to add at the end of the file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_found;
	ssize_t text_size;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	text_size = strlen(text_content);
	bytes_found = write(fd, text_content, text_size);
	close(fd);
	if (bytes_found < 0 || bytes_found < text_size)
	{
		return (-1);
	}
	return (1);
}

