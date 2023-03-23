#include <stdio.h>
#include "main.h"

/**
 * print_sign - A function that prints the polarity sign of integers
 * @n: parameter that holds the value of the integers from the main
 * function
 * Return: 1(if greater than 0) or -1(if less than 0) or 0(if equal to 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
