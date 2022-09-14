#include "main.h"

/**
 * print_alphabet_x10 - alphabet 10x
 *
 * Description: print the alphabet 10x in
 *		lowercase
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	int  i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
	putchar('\n');

}
