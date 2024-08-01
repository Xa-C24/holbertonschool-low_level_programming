#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;							/* file descriptor.*/
	ssize_t bytes_read, bytes_written;	/* stock bytes.*/
	char *zo_stock_tmp;					/* zone stock temporaire.*/

	if (filename == NULL)
		return (0);

	/* Open the file in read-only mode, get the file descriptor.*/

	file = open(filename, O_RDONLY, O_WRONLY, O_TRUNC);
	if (file == -1)
		return (0);

	zo_stock_tmp = malloc(sizeof(char) * letters);

		if (zo_stock_tmp == NULL)
		{
			close(file);				/*Close the file if malloc fails.*/
			return (0);
		}

		bytes_read = read(file, zo_stock_tmp, letters);
		if (bytes_read == -1)			/* If reading the file failed.*/
		{
			free(zo_stock_tmp);
			close(file);
			return (0);
		}

		/*  Write the buffer to the standard output.*/
	bytes_written = write(STDOUT_FILENO, zo_stock_tmp, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(zo_stock_tmp);
		close(file);
		return (0);
	}

		free(zo_stock_tmp);
		close(file);

		return (bytes_written);
}
