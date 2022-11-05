#include "main.h"

/**
 * _strlen - string lenght
 * @c: input character
 *
 * Description: string length
 *
 * Return: lenght
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}

/**
 * append_text_to_file - appendto text file
 * @filename: the name of a file
 * @text_content: the content of a text
 *
 * Description: appends text at the end of a file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content  = "";
	wrt = write(fd, text_content, _strlen(text_content));
	if (wrt == -1)
		return (-1);
	return (1);
}
