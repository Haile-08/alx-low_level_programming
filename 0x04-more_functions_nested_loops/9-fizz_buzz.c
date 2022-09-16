#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 1 to 100 but for numbers that
 *		speacial pattern
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("%d", i);
			}
		}
		if (i < 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
