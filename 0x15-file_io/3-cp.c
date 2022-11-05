#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Entry point
 * @ac: number of argument
 * @av: the array of argument
 *
 * Description: a program that copies the content of a file to another
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int fd[2], wrt, red;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd[0] = open(av[1], O_RDONLY);
	fd[1] = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	red = read(fd[0], buf, 1024);
	wrt = write(fd[1], buf, red);
	if (red == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (wrt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd[0]) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd[0]);
		exit(100);
	}
	if (close(fd[1]) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd[1]);
		exit(100);
	}

	return (0);
}
