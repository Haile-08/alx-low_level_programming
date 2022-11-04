#include "main.h"

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
	unsigned int res = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res <<= 1;
		if (b[i] == '1')
			res += 1;
		i++;
	}
	return (res);
}
