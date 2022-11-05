#include "main.h"

/**
 * _strlen -  string length
 * @c: the character
 *
 * Description: the length of string
 *
 * Return: the length
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - create a file
 * @filename: the file name
 * @text_content: the text input
 *
 * Description: Create a function that creates a file.
 *
 * Return: return 1 on success -1
 *	if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writ;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	writ = write(fd, text_content, _strlen(text_content));
	if (writ == -1)
		return (-1);
	close(fd);
	return (1);
}
