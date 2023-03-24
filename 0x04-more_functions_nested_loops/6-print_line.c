#include <stdio.h>
#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: width of line
 */
void print_line(int n)
{
	int o;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		o = 0;
		while (o < n)
		{
			_putchar('_');
			o++;
		}
		_putchar('\n');
	}
}
