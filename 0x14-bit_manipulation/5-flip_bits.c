#include "main.h"

/**
 * flip_bits - flip the bit
 * @n: the value to flip
 * @m: the value to be fliped
 *
 * Description: the number of bits you would need to
 *		flip to get from one number to another
 * Return: the number of times it needs to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, num = 0;

	while (xor > 0)
	{
		num += (xor & 1);
		xor >>= 1;
	}
	return (num);
}
