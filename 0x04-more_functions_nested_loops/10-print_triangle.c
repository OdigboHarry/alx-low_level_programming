#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int c, d, e, f;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		f = size - 1;
		for (c = 1; c <= size; c++)
		{
			for (d = 0; d < f; d++)
			{
				_putchar(' ');
			}
			for (e = 0; e < c; e++)
			{
				_putchar('#');
			}
			f--;
			_putchar('\n');
		}
	}
}
