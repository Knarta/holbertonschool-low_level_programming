#include "main.h"
/**
 * read_textfile - that reads a text file and prints it to the POSIX standard
 * @filename: name of the file to read
 * @letters: number of letters to read of print
 * Return: number of letters it could read and print, 0 otherwile
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileHandle;
	ssize_t n;
	char *buf;

	if (filename == NULL)
		return (0);
	fileHandle = open(filename, O_RDONLY);
	if (fileHandle == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fileHandle);
		return (0);
	}
	n = read(fileHandle, buf, letters);
	if (n == -1)
	{
		free(buf);
		close(fileHandle);
		return (0);
	}
	buf[n] = '\0';
	write(STDOUT_FILENO, buf, n);
	free(buf);
	close(fileHandle);
	return (n);
}
