#include "main.h"

/**
 * read_textfile - read the text file
 * @filename: the file name
 * @letters: the size of the letters
 *
 * Description: reads a text file and prints it to the POSIX standard output.
 *
 * Return: number of letters read
 *	if the file is not opend return 0
 *	if filename id NULL return 0
 *	if wirte fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rea, writ;
	char *ch;

	if (!filename)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (!ch)
		return (0);
	fd = open(filename, O_RDONLY);
	rea = read(fd, ch, letters);
	writ = write(1, ch, rea);
	if (fd == -1 || writ == -1 || rea == -1 || writ != rea)
	{
		free(ch);
		return (0);
	}
	free(ch);
	close(fd);
	return (writ);
}
