#include "main.h"
#include <limits.h>

/**
 * create_array - create array
 * @size: size of the array
 * @c: element of the array
 *
 * Description: creates an array of chars, and initializes
 *		it with a specific char
 * Return: NULL if size = 0 else return the pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *ch;
		unsigned int i = 0;

		ch = malloc(sizeof(char) * size);
		while (i < size)
		{
			if (ch == NULL)
			{
				printf("Can't allocate %d bytes (after %d calls)\n", CHAR_MAX, i);
				return (NULL);
			}
			ch[i] = c;
			++i;
		}
		return (ch);
	}
}
