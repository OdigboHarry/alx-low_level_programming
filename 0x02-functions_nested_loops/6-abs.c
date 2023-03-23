#include <stdio.h>
#include "main.h"

/**
 * _abs - A function that prints the absolute value of an integer
 * @n: formal parameter that holds the arguments of the actual parameter from
 * the main function
 * Return: n Always(Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
