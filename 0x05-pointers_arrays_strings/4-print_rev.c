#include "main.h"

/**
 * print_rev - print reverse
 * @s: string pointer value
 *
 * Description: print a string in reverse
 *
 * Return: null
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index);

	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
