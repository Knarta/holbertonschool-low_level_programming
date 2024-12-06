#include "main.h"
/**
 * create_file - that creates a file.
 * @filename: name of the file to create
 * @text_content: content to read to the file
 * Return: 1 on succes , -1 on faillure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			n = write(fd, text_content, 1);
			if (n != 1)
			{
				close(fd);
				return (-1);
			}
			text_content++;
		}
	}
	close(fd);
	return (1);
}
