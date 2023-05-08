#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - reads a certain amount of letters from a file
 * @filename: name of file
 * @letters: how many letters to read
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rv, wv;
	char *buffer = malloc(sizeof(char) *letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, o_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	rv = read(fd, buffer, letters);
	if (rv < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	wv = write(STDOUT_FILENO, buffer, rv);
	if (wv < 0 || wv != rv)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (rv);
}
