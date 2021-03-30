#include "holberton.h"
/**
* read_textfile - check the file like argument @filename.
* @filename: file to read and write
* @letters: number of letters to read and write.
* Return: letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t cantletters;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	cantletters = read(fd, buffer, letters);
	if (cantletters == -1)
		return (0);

	buffer[cantletters] = '\0';

	if (write(STDOUT_FILENO, buffer, cantletters) != cantletters)
		return (0);

	free(buffer);
	close(fd);
	return(cantletters);
}
