#include "main.h"
#include <limits.h>

/**
 * _strdup - string duplicate
 * @str: array of character input
 *
 * Description: returns a pointer to a newly allocated space in memory
 *
 * Return: Null if str = Null else return the pointer to the array
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *ma;

	while (*(str + size) != '\0')
	{
		++size;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ma = malloc((sizeof(char) * size) + 1);
		i = 0;
		if (ma == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			ma[i] = str[i];
			++i;
		}
		return (ma);
	}
}
