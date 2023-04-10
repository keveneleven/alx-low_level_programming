#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters
 * Return: actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int m;
	char *buffer;
	ssize_t bytes, text;

	if (filename == NULL)
		return (0);
	m = open(filename, O_RDONLY);
	if (m == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(m);
		return (0);
	}
	bytes = read(m, buffer, letters);
	if (bytes == -1)
	{
		close(m);
		free(buffer);
		return (0);
	}
	text = write(STDOUT_FILENO, buffer, bytes);
	if (bytes == -1 || text != bytes)
	{
		close(m);
		free(buffer);
		return (0);
	}
	close(m);
	free(buffer);
	return (text);
}

