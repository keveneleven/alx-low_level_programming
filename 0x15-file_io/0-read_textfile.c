#include "main.h"
/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output
 * @filename: textfile to read from
 * @letters: number of letters that should be printed and read
 * Return: bytes_found
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_seen;
	ssize_t bytes_found;
	int fd;
	char *buffer;
	
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_found = 0;
	bytes_seen = read(fd, buffer, letters);
	if (bytes_found == -1 || bytes_seen == 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytes_found = write(STDOUT_FILENO, buffer, bytes_seen);
	if (bytes_found != bytes_seen)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return bytes_found;
}
