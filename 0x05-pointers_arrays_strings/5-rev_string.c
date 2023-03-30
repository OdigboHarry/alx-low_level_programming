#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: A string
 */
void rev_string(char *s)
{
	int c, e, g;
	for (c = 0; s[c] != '\0'; c++)
	{
		e = c;
		g = c;
	}
	char f[ g];

	for (c = 0; c <= g; c++)
	{
		f[c] = s[e];
		e--;
	}
	e = 0;
	for (c = 0; c <= g; c++)
	{
		s[e] = f[c];
		e++;
	}
}
