#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * handle_file - handles errors
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
 * Return: exit
 */
void handle_file(int fd1, int fd2)
{
	if (close(fd1) < 0)
	{
		perror("Error: Can't close the file 1");
		exit(100);
	}
	if (close(fd2) < 0)
	{
		perror("Error: Can't close the file 2");
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguement variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	ssize_t n_read;
	char buf[BUF_SIZE];
	int dest_fd, source_fd;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s  <source_file> <destination_file>\n", argv[0]);
		exit(97);
	}
	source_fd = open(argv[1], O_RDONLY);
	if (source_fd < 0)
	{
		perror("Error: Can;t read from file");
		exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (dest_fd < 0)
	{
		perror("Error: Can't write to file");
		exit(99);
	}
	while ((n_read = read(source_fd, buf, BUF_SIZE)) > 0)
	{
		if (write(dest_fd, buf, n_read) != n_read)
		{
			handle_file(source_fd, dest_fd);
			perror("Error: Can't write to file");
			exit(99);
		}
	}
	if (n_read < 0)
	{
		handle_file(source_fd, dest_fd);
		perror("Error: Can't read from file");
		exit(98);
	}
	handle_file(source_fd, dest_fd);
	return (0);
}
