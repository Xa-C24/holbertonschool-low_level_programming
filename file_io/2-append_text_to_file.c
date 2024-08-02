#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of file.
 * @text_content: text on the file.
 *
 * Return: 1 if correct return, -1 for fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;
	size_t len = 0;

	if (filename == NULL)
			return (-1);

	file = open (filename, O_WRONLY | O_APPEND);
	if (file == -1)
			return (-1);

	if (text_content == NULL)
	{
		while (text_content[len])
			len++;
	}

	bytes_written = write(file, text_content, len);
		{
			if (bytes_written == -1)
			close(file);
			return (-1);
		}

		close(file);
		return (1);
}
