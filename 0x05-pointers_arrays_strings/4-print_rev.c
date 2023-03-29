#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: A string
 */
void print_rev(char *s)
{
	int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		d = c;
	}
	for (c = 0; c <= d; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
