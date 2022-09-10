#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		++i;
	}
	putchar("\n");

	return (0);
}
