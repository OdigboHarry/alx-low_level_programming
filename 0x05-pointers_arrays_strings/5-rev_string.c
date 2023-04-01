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
	
	for (c = 0; s[c] != '\0'; c++)
	{
		g = c;
	}
	e = g;
	g = (g/2);
	for (c = 0; c <= g; c++)
	{
		x = s[e];
		s[e] = s[c];
		s[c] = x;
		e--;
	}
}
