#include "holberton.h"
/**
  * _strlen - length of a string
  * @s: input char
  * Return: length of a string
**/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
/**
* create_file - creates a file.
* @filename: file to create.
* @text_content: text to write into the file.
* Return: 1 on success, -1 if fail
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t cantletters;
	int fd;

	if (!filename)
		return (1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		cantletters = write(fd, text_content, _strlen(text_content));
		if (cantletters == -1)
		return (-1);
	}
	close(fd);
	return (1);
}
