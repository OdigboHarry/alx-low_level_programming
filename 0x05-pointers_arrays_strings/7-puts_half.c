#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: A string
 */
void puts_half(char *str)
{
	int c, d, n, e;
	
	d = 0;
	for (c = 0; str[c] != '\0'; c++)
	{
		d++;
	}
	e = d;
	if (d % 2 == 0)
	{
		e = d / 2;
		for (; e <= d; e++)
		{
			_putchar(str[e]);
		}
		_putchar('\n');
	}
	else if(d % 2 == 1)
	{
		n = (d - 1) / 2;
		n++;
		for (; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
