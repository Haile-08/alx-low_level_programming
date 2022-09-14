#include "main.h"

/**
 * print_alphabet - lowcase alphabet
 *
 * Description: print the alphabet in lowercase
 *
 * Return: null
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
