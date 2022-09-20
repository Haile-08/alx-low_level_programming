#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string pointer
 *
 * Description: reverse a string
 *
 * Return: null
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
