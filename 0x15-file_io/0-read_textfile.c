#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * read_textfile - read a text file and print to POSIX standard output
 * @filename: the file to be read
 * @letters: size of letters read and printed
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readData;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t ansr;

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	readData = read(fd, buffer, letters);
	if (readData == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	ansr = write(STDOUT_FILENO, buffer, readData);
	if ((ansr == -1) || (ans != readData))
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	readData = close(fd);
	if (readData == -1)
		return (0);
	return (ansr);
}


