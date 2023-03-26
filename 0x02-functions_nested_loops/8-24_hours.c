#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59
 */
void jack_bauer(void)
{
	int c, d, e, f, g;

	for (c = 0; c <= 2; c++)
	{
		d = 0;
		g = 9;
		if (d == 9)
		{
			g = 2;
			d = 0;
		}
		else
		{
			g = 9;
		}
		for (d = 0; d <= g; d++)
		{
			for (e = 0; e <= 5; e++)
			{
				for (f = 0; f <= 9; f++)
				{
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar(':');
					_putchar('0' + e);
					_putchar('0' + f);
					_putchar('\n');
				}
			}
		}
	}
}
