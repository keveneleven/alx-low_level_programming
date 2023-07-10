#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFSIZE 1024
/**
 * copy_file - copies contents of a file
 * @src_path: the source path
 * @dest_pt: the destination path
 */
void copy_file(const char *src_path, const char *dest_pt)
{
	int src_fd, dest_fd, err_close;
	ssize_t num_seen, num_found;
	char buf[BUFSIZE];

	src_fd = open(src_path, O_RDONLY);
	if (src_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", src_path);
		exit(98);
	}
	dest_fd = open(dest_pt, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dest_fd == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", dest_pt);
		exit(99);
	}
	while ((num_seen = read(src_fd, buf, BUFSIZE)) > 0)
	{
		num_found = write(dest_fd, buf, num_seen);
		if (num_found == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", dest_pt);
			exit(99);
		}
	}
	if (num_seen == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", src_path);
		exit(98);
	}
	err_close = close(src_fd);
	if (err_close == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	err_close = close(dest_fd);
	if (err_close == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}
/**
 * main - check code
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
