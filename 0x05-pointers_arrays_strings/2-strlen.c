#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: A string
 * Return: string_length
 */
int _strlen(char *s)
{
	int c, string_length;

	string_length = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		string_length++;
	}
	return (string_length);
}
