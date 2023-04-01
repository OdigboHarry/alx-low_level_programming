#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: A string
 */
void rev_string(char *s)
{
	int c, e, g;
	char x;

	x = 0;
	e = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		g = c;
	}
	e = g;
	g = (g / 2);
	if (s[0] == '\0')
	{
		c = 0;
	}
	else
	{
		for (c = 0; c <= g; c++)
		{
			x = s[e];
			s[e] = s[c];
			s[c] = x;
			e--;
		}
	}
}
