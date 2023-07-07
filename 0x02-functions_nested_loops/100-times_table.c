#include <stdio.h>
#include "main.h"

void print_times_table2(int);
void space(int);
/**
 * print_times_table - prints times table ranging from 0 to n
 * @n: First operand
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		print_times_table2(n);
	}
	else if (n > 15 || n < 0)
	{
		putchar('\n');
	}
}
/**
 * print_times_table2 - An extension of the print_times_table function
 * @n: First operand
 */
void print_times_table2(int n)
{
	int a, b, c, d, e, f;

	a = 0;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			c = a * b;
			if (c > 99)
			{
				d = c / 100;
				e = (c / 10) % 10;
				f = c % 10;
				putchar('0' + d);
				putchar('0' + e);
				putchar('0' + f);
			}
			else if (c > 9 && c < 100)
			{
				d = c / 10;
				e = c % 10;
				putchar('0' + d);
				putchar('0' + e);
			}
			else if (c < 10)
			{
				putchar('0' + c);
			}
			if (b < n)
			{
				putchar(',');
			}
			b++;
			c = a * b;
			space(c);
		}
		putchar('\n');
		a++;
	}
}
/**
 * space - Provides space from the second number in each row of the times table
 * @c: First operand
 */
void space(int c)
{
	if (c < 10)
	{
		putchar(' ');
		putchar(' ');
		putchar(' ');
	}
	else if (c > 9 && c < 100)
	{
		putchar(' ');
		putchar(' ');
	}
	else if (c > 99)
	{
		putchar(' ');
	}
}
