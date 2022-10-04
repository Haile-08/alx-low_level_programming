#include "main.h"

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
			ch[i] = c;
			++i;
		}
		return (ch);
	}
}
