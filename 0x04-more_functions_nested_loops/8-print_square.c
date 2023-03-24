#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square using hashes
 * @size: size of the square
 */
void print_square(int size)
{
	int c, d;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		c = 0;
		while (c < size)
		{
			d = 0;
			while (d < size)
			{
				_putchar('#');
				d++;
			}
			_putchar('\n');
			c++;
		}
	}
}
