#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: A string
 */
void puts2(char *str)
{
	int c, g;

	g = 0;
	if (str[g] != '\0')
	{
		for (c = 0; str[c] != '\0'; c++)
		{
			if (c % 2 == 0)
			{
				_putchar(str[c]);
			}
			else
			{
				c++;
				c--;
			}
		}
		_putchar('\n');
	}
	else if (str[g] == '\0')
	{
		_putchar(str[g]);
	}
}
