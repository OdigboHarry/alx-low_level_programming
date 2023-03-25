#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of any number
 * @n: The formal parameter to hold the the number whose last digit is printed
 * Return: n
 */
int print_last_digit(int n)
{
	long N = n;

	if (N > 0)
	{
		while (N >= 10)
		{
			N %= 10;
		}
		_putchar('0' + N);
		return (N);
	}
	else if (N < 0)
	{
		N *= -1;
		while (N >= 10)
		{
			N %= 10;
		}
		_putchar('0' + N);
		return (N);
	}
	else
	{
		_putchar('0' + N);
		return (N);
	}
}
