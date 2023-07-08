#include <stdio.h>
#include "main.h"

int multip(int a);
int dual_num(int c);
int divis(int c);

/**
 * times_table - Prints the times table up to 9
 */
void times_table(void)
{
	int a = 0;

	while (a < 10)
	{
		multip(a);
		putchar('\n');
		a++;
	}
}

/**
 * multip - Multiplies a with a value ranging from 0 t0 9
 * @a: First operand
 *
 * Return: 0;
 */
int multip(int a)
{
	int b, c, d, rem, first;

	b = 0;
	c = a;
	d = 0;

	while (b <= 9)
	{
		c = a * b;
		if (c >= 10)
		{
			rem = dual_num(c);
			first = divis(c);
			putchar('0' + first);
			putchar('0' + rem);
			putchar(',');
			putchar(' ');
		}
		else if (c < 10)
		{
			if (d > 0)
			{
				putchar(' ');
			}
			putchar('0' + c);
			putchar(',');
			putchar(' ');
		}
		d++;
		b++;
	}
	return (0);
}

/**
 * dual_num - Seperates a if c is greater than 9 and returns the second part
 * @c: First operand
 *
 * Return: rem
 */
int dual_num(int c)
{
	int rem;

	rem = c % 10;
	return (rem);
}

/**
 * divis - Returns the first part of c
 * @c: First operand
 *
 * Return: first
 */
int divis(int c)
{
	int first;

	first = c / 10;
	return (first);
}
