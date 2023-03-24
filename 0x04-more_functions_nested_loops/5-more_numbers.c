#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int c, d, e, f;

	c = 0;
	d = 0;
	while (c < 10)
	{
		while (d <= 14)
		{
			if (d > 9)
			{
				e = d / 10;
				f = d % 10;
				_putchar('0' + e);
				_putchar('0' + f);
				d++;
			}
			else
			{
				_putchar('0' + d);
				d++;
			}
		}
		_putchar('\n');
		c++;
		d = 0;
	}
}
