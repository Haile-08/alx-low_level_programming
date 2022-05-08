#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * 	, which contains a copy of the string given as a parameter.
 * @str: the string passed
 *
 * Return: if str == NULL return null ,
 * 	or return the pointer and if insufficent memory return
 * 	null,
 */

char *_strdup(char *str)
{
	int *t;
	int len;
	int i;

	t = malloc(sizeof(char) * strlen(str));

	if (str == NULL)
		return (NULL);
	len = strlen(*str);
	i = 0;
	while(i < len)
	{
		t[i] = *str;
	}
	return (t);
}
