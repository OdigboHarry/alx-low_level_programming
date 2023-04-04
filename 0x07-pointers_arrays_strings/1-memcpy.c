#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: Pointer to a memory area
 * @src: Pointer to a memory area
 * @n: Size of memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(dest + c) = *(src + c);
	}
	return (dest);
}
