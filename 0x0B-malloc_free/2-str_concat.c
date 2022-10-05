#include "main.h"

/**
 * str_concat - string concatenate
 * @s1: string input 1
 * @s2: string input 2
 *
 * Description:  concatenates two strings
 *
 * Return: return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int l1 = 0;
	int l2 = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_len) != '\0')
	{
		++s1_len;
	}
	while (*(s2 + s2_len) != '\0')
	{
		++s2_len;
	}

	m = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (m == NULL)
	{
		return (NULL);
	}
	while (*(s1 + l1) != '\0')
	{
		m[l1] = s1[l1];
		++l1;
	}
	while (*(s2 + l2) != '\0')
	{
		m[l1] = s2[l2];
		++l1;
		++l2;
	}
	m[1 + l1] = '\0';
	return (m);
}
