#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the
 * constant byte b
 * @s: Pointer to a memory area
 * @b: Character used to receive constant byte
 * @n: Unsigned int
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
