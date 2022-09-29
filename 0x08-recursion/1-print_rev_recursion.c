#include "main.h"

/**
 * _print_rev_recursion - print reverse recursion
 * @s: input string
 *
 * Description: prints a string in reverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
