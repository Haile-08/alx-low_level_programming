#include "main.h"

/**
 * string_nconcat - string concatenate
 * @s1: first string input
 * @s2: second string input
 * @n: the amount s2 of string to print
 *
 * Description: concatenates two strings.
 *
 * Return: Null if fail and pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		++s1_len;
	while (s2[s2_len] != '\0')
		++s2_len;
	if (n > s2_len)
		ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
		ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];
	if (n > s2_len)
	{
		for (i = 0; i < s2_len; i++)
		{
			++s1_len;
			ptr[s1_len] = s2[i];
		}
		++s1_len;
		ptr[s1_len] = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			++s1_len;
			ptr[s1_len] = s2[i];
		}
		++s1_len;
		ptr[s1_len] = '\0';
	}
	return (ptr);
}
