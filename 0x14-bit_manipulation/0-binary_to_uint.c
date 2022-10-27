#include "main.h"

/**
 * _atoi - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
 */

unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
 */

unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * binary_to_uint - binary to decimal
 * @b: the binary input
 *
 * Description: convert binary number to decimal
 *
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0, base2 = 1,  num = 0;

	if (b == NULL)
		return (0);
	#ifdef DEBUG
	printf("String is %s, and length is %u.\n", b, _strlen(b));
	#endif

	for (index = _strlen(b) - 1; index >= 0; index--)
	{
		num = _atoi(b[index]);
		#ifdef DEBUG
		printf("Number is %u, index is %i and base is %u.\n\n", num, index, base2);
		#endif
		if (num != 0 && num != 1)
			return (0);
		result += num * base2;
		base2 *= 2;
		#ifdef DEBUG
		printf("Result is %u.\n", result);
		#endif
	}
	return (result);
}
