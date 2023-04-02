#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @src: Pointer to a string
 * @dest: A pointer
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c, d;

	for (c = 0; src[c] != '\0'; c++)
	{
		d = c;
	}
	for (c = 0; c <= d; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
