#include "main.h"
/**
 * error_exit - Prints an error message and exits with a specified code
 * @err: The error message to print
 * @code: The exit code
 * @fd: the file descriptor
 * @filename: The filename associated with the error
*/

void error_exit(const char *err, int code, int fd, const char *filename)
{
	if (filename == NULL)
		dprintf(STDERR_FILENO, "%s %d\n", err, fd);
	else
		dprintf(STDERR_FILENO, "%s %s\n", err, filename);
	exit(code);
}

/**
 * _copy - Copies the content of one file to another
 * @filefrom: The filename from where the data are copied
 * @fileto: The filename from where the data will be pasted
*/

void _copy(const char *filefrom, const char *fileto)
{
	int fdto, fdfrom = open(filefrom, O_RDONLY);
	ssize_t nfrom, nto;
	char *buf = malloc(sizeof(char) * 1024);

	if (fdfrom == -1)
		error_exit("Error: Can't read from file", 98, 98, filefrom);
	fdto = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == -1)
	{
		close(fdfrom);
		error_exit("Error: Can't write to", 99, 99, fileto);
	}
	while ((nfrom = read(fdfrom, buf, 1024)) > 0)
	{
		nto = write(fdto, buf, nfrom);
		if (nto != nfrom)
		{
			free(buf);
			close(fdfrom);
			close(fdto);
			error_exit("Error: Can't write to", 99, 99, fileto);
		}
		fdto = open(fileto, O_WRONLY | O_APPEND);
	}
	if (nfrom == -1)
	{
		free(buf);
		close(fdfrom);
		close(fdto);
		error_exit("Error: Can't read from the file", 98, 98, filefrom);
	}
	free(buf);
	if (close(fdfrom) == -1)
	{
		close(fdto);
		error_exit("Error: Can't close fd", 100, fdfrom, NULL);
	}
	if (close(fdto) == -1)
		error_exit("Error: Can't close fd", 100, fdto, NULL);
}

/**
 * main - first function to enter in the code
 * @argc: number of args
 * @argv: array of args
 * Return: 0 on success, error code otherwise.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97, 97, NULL);

	_copy(argv[1], argv[2]);

	return (0);
}
