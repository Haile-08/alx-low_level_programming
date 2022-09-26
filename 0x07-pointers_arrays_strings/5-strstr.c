#include "main.h"

/**
 * _strstr - string substring
 * @haystack: the string to be searched
 * @needle: the string to be searched
 *
 * Description: function that locates a substring
 *
 * Return: a pointer to the beginning of the located substring
 *	or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int l = 0;
	int b = 0;

	while (*(needle + l) != '\0')
	{
		++l;
	}
	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(needle + j) != '\0')
		{
			if (*(heystack + i) == *(needle +j))
			{
				++b;
			}
			++j;
		}
		++i;
	}
