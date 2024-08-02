/* Create a function that creates a file. */
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - create file, write the text.
 * @filename: name of file.
 * @text_content: string to write in the file.
 *
 * Return: 1 on sucess, -1 for error.
 *
 */
int create_file(const char *filename, char *text_content)	/* name of file; content of file. */
{
	int file_d, st_wr, len; 				/* file desciptor, stock write, len of text.*/

		if (filename == NULL)
		{
			return (-1);
		}

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		if (file_d == -1)
		{
			return (-1);
		}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		st_wr = write(file_d, text_content, len);

		if (st_wr == -1 || st_wr != len)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
