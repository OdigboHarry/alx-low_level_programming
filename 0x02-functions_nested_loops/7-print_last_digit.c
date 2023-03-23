#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of any number
 * @n: The formal parameter to hold the the number whose last digit is printed
 * Return: n
 */
int print_last_digit(int n)
{
	if (n > 0 && n < 100)
	{
		n %= 10;
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;
		n %= 10;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' + n);
		return (n);
	}
}
