#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: The string
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
