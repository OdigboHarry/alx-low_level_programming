#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: length of diagonal line
 */
void print_diagonal(int n)
{
	int o, p, q;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		o = 0;
		while (o < n)
		{
			p = 0;
			q = o - 1;
			while (p <= q)
			{
				_putchar(' ');
				p++;
			}
			_putchar('\\');
			o++;
			_putchar('\n');
		}
	}
}
