#include "main.h"
#include <stdio.h>

/**
 * print_error - Print error messages and exit with a specific code.
 * @message: The error message to print.
 * @code: The exit code.
 */
void print_error(const char *message, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * open_file - Open a file and handle errors.
 * @filename: The name of the file to open.
 * @flags: The flags for opening the file.
 * @mode: The permission mode if creating a file.
 * @argv: The arguments vector.
 * @error_code: The exit code in case of an error.
 * @read_flag: A flag indicating if the file is for reading.
 * @write_flag: A flag indicating if the file is for writing.
 * Return: The file descriptor.
 */
int open_file(const char *filename, int flags, mode_t mode, char *argv[], int error_code, int read_flag, int write_flag)
{
	int file_descriptor;

	file_descriptor = open(filename, flags, mode);
	if (file_descriptor == -1)
	{
		if (read_flag)
			print_error("Can't read from file", error_code);
		if (write_flag)
			print_error("Can't write to file", error_code);
	}

	return file_descriptor;
}

/**
 * main - Copy content from one file to another.
 * @argc: The number of arguments.
 * @argv: The arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);

	file_from = open_file(argv[1], O_RDONLY, 0, argv, 98, 1, 0);
	file_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664, argv, 99, 0, 1);

	do
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			print_error("Can't read from file", 98);

		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			print_error("Can't write to file", 99);

	}
	while (nchars == 1024);

	err_close = close(file_from);
	if (err_close == -1)
		print_error("Can't close file descriptor", 100);

	err_close = close(file_to);
	if (err_close == -1)
		print_error("Can't close file descriptor", 100);

	return (0);
}
