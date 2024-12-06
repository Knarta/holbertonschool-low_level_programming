#include "main.h"
/**
 * create_file - that creates a file.
 * @filename: name of the file to create
 * @text_content: content to read to the file
 * Return: 1 on succes , -1 on faillure
 */

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR);
	if (fileDescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			write(fileDescriptor, text_content, 1);
			text_content++;
		}
	}
	close(fileDescriptor);
	return (1);
}
