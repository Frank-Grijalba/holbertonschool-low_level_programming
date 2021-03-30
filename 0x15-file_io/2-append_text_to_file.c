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
* append_text_to_file - appends text at the end of a file.
* @filename: file to append.
* @text_content: info to append into the file.
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t cantletters;
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
