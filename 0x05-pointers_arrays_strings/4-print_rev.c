#include "main.h"

/**
 * print_rev - print reverse
 * @s: input string pointer
 *
 * Description: print string in reverse
 *
 * Return: null
 */

void print_rev(char *s)
{
	int l = 1;
	int i;

	while (*(s + l) != '\0')
	{
		l = l + 1;
	}
	for (i = 0; i <= l; l--)
	{
		printf("%c", *(s + l));
	}
	printf("\n");
}
