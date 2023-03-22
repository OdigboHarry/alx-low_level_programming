#include <stdio.h>
#include "main.h"

/**
 * _islower - A functions that checks if a character is lowercase or not
 * @c: formal parameter to receive integer value
 * Return: 1(if lowercase) or 0(if otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
