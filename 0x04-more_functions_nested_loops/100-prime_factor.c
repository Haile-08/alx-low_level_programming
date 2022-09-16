#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: print the largest prime factor
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n = 612852475143;
	int d = 2;
	long int maxpf;

	while (n != 0)
	{
		if (n % d != 0)
		{
			d = d + 1;
		}
		else
		{
			maxpf = n;
			n = n / d;
			if (n == 1)
			{
				printf("%ld",maxpf);
				printf("\n");
				break;
			}
		}
	}
	return (0);
}

