#include <stdio.h>
#include "main.h"

/**
 * _isupper - A function that checks if a letter is uppercase
 * @c: value checked for uppercase
 * Return: 1(if uppercase) or 0(if otherwise)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
