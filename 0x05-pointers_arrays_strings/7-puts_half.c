#include "main.h"

/**
 * puts_half - put half
 * @str: input string of a pointer
 *
 * Description: print half of the string
 *
 * Return: null
 */

void puts_half(char *str)
{
	int l = 0;
	int i;

	while (*(str + l) != '\0')
	{
		l++;
	}

	for (i = l / 2; i <= l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
