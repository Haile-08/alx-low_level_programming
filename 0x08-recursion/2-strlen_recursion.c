#include "main.h"

/**
 * _strlen_recursion - string length recursion
 * @s: input string
 *
 * Description: returns the length of a string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
