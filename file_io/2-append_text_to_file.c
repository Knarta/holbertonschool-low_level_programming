#include "main.h"
/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: name of the file to appends
 * @text_content: content to read to the file
 * Return: 1 on succes , -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
