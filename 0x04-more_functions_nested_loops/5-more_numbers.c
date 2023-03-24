#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int c, d, e, f, g, h;

	c = 0;
	d = 0;
	while (c < 10)
	{
		while (d <= 14)
		{
			if (d > 9)
			{
				g = 0;
				h = d;
				e = h / 10;
				f = h % 10;
				while (g < 2)
				{
					if (g == 0)
					{
						h = e;
					}
					else
					{
						h = f;
					}
				_putchar('0' + h);
				g++;
				}
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
