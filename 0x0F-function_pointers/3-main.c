#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: array of argument
 * Return: none
 */

int main(int argc, char *argv[])
{
	int (*get_op_func(char *s))(int, int);
	if (argc == 4)
	{
		if ((*argv[2] == '%' || *argv[2] == '/') && atoi(argv[3]) == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
