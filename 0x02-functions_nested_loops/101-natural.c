#include <stdio.h>

/**
 * main - Prints sum of the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d, e, limit, limit1, limit2;

	a = 0, b = 0, c = 0, d = 0, e = 0;
	limit = 0, limit1 = 1024 / 3, limit2 = 1024 / 5;

	while (limit < limit1)
	{
		a = a + 3;
		if ((a % 5) == 0)
		{
			d = d - a;
		}
		d = d + a;
		limit++;
	}
	limit = 0;
	while (limit < limit2)
	{
		b = b + 5;
		e = e + b;
		limit++;
	}
	c = d + e;
	printf("%d\n", c);
	return (0);
}
