#include "3-calc.h"

/**
 * op_add - add operation
 * @a: input one
 * @b: input two
 *
 * Description: sum of a and b
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract operation
 * @a: input one
 * @b: input two
 *
 * Description: difference of a and b
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  multiplication operation
 * @a: input one
 * @b: input two
 *
 * Description: product of a and b
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: input one
 * @b: input two
 *
 * Description: division of a by b
 *
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus
 * @a: input one
 * @b: input two
 *
 * Desription: remainder of the division of a by b
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
