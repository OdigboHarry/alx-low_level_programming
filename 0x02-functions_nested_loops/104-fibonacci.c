#include <stdio.h>

void comma_space(int);
int separate_number(unsigned long, unsigned long, unsigned long, int);
/**
 * main - Prints the fibonacci sequence starting from 1 to the 98th term
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c;
	int n;

	a = 0, b = 1, c = a + b, n = 0;
	while (n < 98)
	{
		n++;
		printf("%ld", c);
		comma_space(n);
		if (c > 200000000000000)
		{
			a = b, b = c, c = a + b;
			n = separate_number(a, b, c, n);
		}
		else if (c < 200000000000000)
		{
			a = b, b = c, c = a + b;
		}
	}
	return (0);
}
/**
 * comma_space - Prints out a comma and blank space between natural numbers
 * @n: First operand
 */
void comma_space(int n)
{
	if (n < 97)
	{
		printf(", ");
	}
	else if (n == 97)
	{
		printf("\n");
	}
}
/**
 * separate_number - Separates a number above 14 digits and prints the
 * two parts together
 * @a: First operand
 * @b: Second operand
 * @c: Third operand
 * @n: Fourth operand
 *
 * Return: Always  n
 */
int separate_number(unsigned long a, unsigned long b, unsigned long c, int n)
{
	unsigned long int d, e, f, h, i;
	int g;

	d = a / 10000000;
	a = a % (d * 10000000);
	e = b / 10000000;
	b = b % (e * 10000000);
	c = d + e;
	f = a + b;
	while (n < 98)
	{
		if (f > 9999999)
		{
			g = f / 10000000, f = f % (g * 10000000);
			c = c + g;
			printf("%ld%ld", c, f);
		}
		else if (f < 9999999)
		{
			printf("%ld%ld", c, f);
		}
		h = c, i = f, c = c + e, f = f + b;
		e = h, b = i;
		comma_space(n);
		n++;
	}
	return (n);
}
