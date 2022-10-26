#include "main.h"

/**
 * jack_bauer - longest day of my life
 * Description: prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59
 *
 * Return: none
 */

void jack_bauer(void)
{
	int h1 = 0;
	int h2;
	int m1;
	int m2;

	while (h1 <= 2)
	{
		h2 = 0;
		while (h2 <= 9)
		{
			if (h1 == 2 && h2 == 4)
				break;
			m1 = 0;
			while (m1 <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
					++m2;
				}
				++m1;
			}
			++h2;
		}
		++h1;
	}
}

