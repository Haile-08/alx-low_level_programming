#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Description: prints strings, followed by a new line.
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);

	}

	va_end(ap);
	putchar('\n');
}
