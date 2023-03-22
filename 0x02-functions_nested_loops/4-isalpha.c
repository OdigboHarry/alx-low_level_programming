#include <stdio.h>
#include "main.h"

/**
 * _isalpha - A function that checks if a character is an alphabet or not
 * @c: receives the integer used to represent the character in ASCII notation
 * Return: 1(if an alphabet) or 0(if otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
