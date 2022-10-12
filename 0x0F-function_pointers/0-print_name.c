#include "function_pointers.h"

/**
 * print_name - print name
 * @name: input name
 * @f: input function pointer
 *
 * Description: prints a name
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
