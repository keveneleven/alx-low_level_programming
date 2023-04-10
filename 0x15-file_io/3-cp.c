#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - prints error message
 * @code: message
 * @format: formatting
 * * Return: exit
 */
void print_error_and_exit(int code, char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - entry point
 * @argc: statement
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m_1, m_2;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	char *file_from = argv[1];
	char *file_to = argv[2];

	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to\n");
	}
	m_1 = open(file_from, O_RDONLY);
	if (m_1 == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	m_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (m_2 == -1)
	{
		print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	}
	while ((bytes_read = read(m_1, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(m_2, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error_and_exit(100, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (bytes_read == -1)
	{
		print_error_and_exit(101, "Error: Can't read from file %s\n", file_from);
	}
	if (close(m_1) == -1)
	{
		print_error_and_exit(102, "Error: Can't close file %s\n", file_from);
	}
	if (close(m_2) == -1)
	{
		print_error_and_exit(103, "Error: Can't close file %s\n", file_to);
	}
	return (0);
}
