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
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		++s1_len;
	while (s2[s2_len] != '\0')
		++s2_len;
	if (n >= s2_len)
		n = s2_len;
	ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
