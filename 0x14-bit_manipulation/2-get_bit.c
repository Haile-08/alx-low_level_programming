#include "main.h"

/**
 * get_bit - get the bit
 * @n: the value
 * @index: the index of the bit
 *
 * Description: find the value of a bit at a given index
 *
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
